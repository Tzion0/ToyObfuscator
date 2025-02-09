#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMimeData>
#include <QDebug>
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QMessageBox>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QSpacerItem>
#include <QDragEnterEvent>
#include <QDropEvent>
#include <QFileInfo>
#include <QMimeType>
#include <QFileDialog>
#include <QProcess>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , dropAreaLabel(new QLabel(this))
    , checkBoxMBA(new QCheckBox("Mixed Boolean Arithmetic (MBA)", this))
    , checkBoxBCF(new QCheckBox("Bogus Control Flow", this))
    , checkBoxCFF(new QCheckBox("Control Flow Flattening", this))
    , checkBoxSOBF(new QCheckBox("String Obfuscation", this))
    , obfuscateButton(new QPushButton("Obfuscate", this))
    , rightPanel(new QWidget(this))
    , fileNameLabel(new QLabel("Filename: ", this))
    , fileTypeLabel(new QLabel("Type: ", this))
    , filePathLabel(new QLabel("Location: ", this))
    , fileSizeLabel(new QLabel("Size: ", this))
    , outputFilenameLabel(new QLabel("Output FIlename: ", this))
    , outputFileNameEdit(new QLineEdit(this))
{
    ui->setupUi(this);

    // Set the window title
    setWindowTitle("ToyObfuscator");

    // Set the window icon
    setWindowIcon(QIcon(":/images/logo.png"));

    setupUI();  // Separate method to set up the UI
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setupUI()
{
    // Set up the drop area label
    dropAreaLabel->setText("Drag and drop a file here");
    dropAreaLabel->setAlignment(Qt::AlignCenter);
    dropAreaLabel->setStyleSheet("border: 2px dashed gray; font-size: 16pt; color: grey;");  // Visual cue for drop area
    dropAreaLabel->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);  // Dynamic resizing

    // Enable drag-and-drop on the label
    setAcceptDrops(true);
    dropAreaLabel->setAcceptDrops(true);

    // Create a QFont object and set it to a larger size
    QFont font;
    font.setPointSize(10);  // Increase font size

    // Apply the font to each checkbox
    checkBoxMBA->setFont(font);
    checkBoxBCF->setFont(font);
    checkBoxCFF->setFont(font);
    checkBoxSOBF->setFont(font);

    // Optionally, adjust the size policy to ensure the checkbox can expand
    checkBoxMBA->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
    checkBoxBCF->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
    checkBoxCFF->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
    checkBoxSOBF->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);

    obfuscateButton->setFont(font);
    obfuscateButton->setStyleSheet(
        "QPushButton {"
        "   color: black;"               // White text
        "   border: 2px solid grey;"     // Grey border line
        "   border-radius: 8px;"         // Rounded corners
        "   padding: 7px 16px;"          // Padding for a larger button
        "}"
        "QPushButton:hover {"
        "   background-color: #d0000c;"  // Darker red on hover
        "   color: white;"               // White text
        "}"
        "QPushButton:pressed {"
        "   background-color: #a00008;"  // Even darker red when pressed
        "   color: white;"               // White text
        "}"
        );

    // Set some padding around these labels
    QString labelStyle = "padding: 5px;";
    fileNameLabel->setStyleSheet(labelStyle);
    fileTypeLabel->setStyleSheet(labelStyle);
    filePathLabel->setStyleSheet(labelStyle);
    fileSizeLabel->setStyleSheet(labelStyle);
    outputFilenameLabel->setStyleSheet(labelStyle);

    // Enable text interaction for selection and copying
    fileNameLabel->setTextInteractionFlags(Qt::TextSelectableByMouse);
    fileTypeLabel->setTextInteractionFlags(Qt::TextSelectableByMouse);
    filePathLabel->setTextInteractionFlags(Qt::TextSelectableByMouse);
    fileSizeLabel->setTextInteractionFlags(Qt::TextSelectableByMouse);
    outputFilenameLabel->setTextInteractionFlags(Qt::TextSelectableByMouse);

    // Create a QWidget to hold the rightLayout and apply a border
    rightPanel->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);  // Allow dynamic resizing
    rightPanel->setStyleSheet("border: 2px solid grey;");  // Set a grey border
    rightPanel->hide();  // Initially hide the right panel

    // Create a vertical layout (panel) to the right of the drop area
    QVBoxLayout *rightLayout = new QVBoxLayout(rightPanel);
    rightLayout->setContentsMargins(10, 10, 10, 10);  // Add margins to make it look clean
    rightLayout->addWidget(fileNameLabel);
    rightLayout->addWidget(fileTypeLabel);
    rightLayout->addWidget(filePathLabel);
    rightLayout->addWidget(fileSizeLabel);

    // Create a horizontal layout for the "Output Filename" field and label
    QHBoxLayout *outputFileNameLayout = new QHBoxLayout();

    // Set placeholder and default text for the QLineEdit

    outputFileNameEdit->setStyleSheet("padding: 5px; background-color: #efefef;");
    outputFileNameEdit->setPlaceholderText("/home/user/out_file");
    outputFileNameEdit->setText("output_file");
    outputFileNameEdit->setMinimumWidth(200);  // Adjust width as needed

    // Add label and text field to the horizontal layout
    outputFileNameLayout->addWidget(outputFilenameLabel);
    outputFileNameLayout->addWidget(outputFileNameEdit);
    rightLayout->addLayout(outputFileNameLayout);

    rightLayout->addStretch();  // Add stretch to push content to the top

    // Create a horizontal layout for the drop area and the right panel
    QHBoxLayout *topLayout = new QHBoxLayout();
    topLayout->addWidget(dropAreaLabel);
    topLayout->addWidget(rightPanel);  // Add the right panel beside the drop area

    // Create a horizontal layout for the checkboxes and button
    QHBoxLayout *bottomLayout = new QHBoxLayout();
    bottomLayout->addWidget(checkBoxMBA);
    bottomLayout->addWidget(checkBoxBCF);
    bottomLayout->addWidget(checkBoxCFF);
    bottomLayout->addWidget(checkBoxSOBF);
    bottomLayout->addStretch();  // Add a stretchable space between checkboxes and button
    bottomLayout->addWidget(obfuscateButton);

    // Create a spacer item to add padding below the drop area
    QSpacerItem *verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

    // Create a vertical layout to hold the drop area, spacer, and bottom layout
    QVBoxLayout *mainLayout = new QVBoxLayout();
    mainLayout->addLayout(topLayout);
    mainLayout->addItem(verticalSpacer);  // Add spacer to create padding
    mainLayout->addLayout(bottomLayout);

    // Set the layout on a central widget and make it the main window's central widget
    QWidget *centralWidget = new QWidget(this);
    centralWidget->setLayout(mainLayout);
    setCentralWidget(centralWidget);

    // Create the menu bar
    QMenuBar *menuBar = new QMenuBar(this);
    setMenuBar(menuBar);

    // Create the "File" menu
    QMenu *fileMenu = new QMenu("File", this);
    fileMenu->setStyleSheet(
        "QMenu::item {"
        "    background-color: transparent;"  // Default background color
        "    padding: 10px 5px;"
        "    border-radius: 5px;"         // Rounded corners
        "}"
        "QMenu::item:selected {"
        "    background-color: rgba(128, 128, 128, 150);"  // Background color when hovered
        "}"
        "QMenu::item { padding-left: 15px; }" // Remove the preserved icon space
        );
    menuBar->addMenu(fileMenu);

    // Add actions to the "File" menu
    QAction *openAction = new QAction("Open", this);
    QAction *helpAction = new QAction("Help", this);
    QAction *exitAction = new QAction("Exit", this);
    fileMenu->addAction(openAction);
    fileMenu->addSeparator();  // Add a separator line
    fileMenu->addAction(helpAction);
    fileMenu->addSeparator();  // Add a separator line
    fileMenu->addAction(exitAction);

    // Connect menu actions to slots
    connect(openAction, &QAction::triggered, this, &MainWindow::onOpen);
    connect(helpAction, &QAction::triggered, this, &MainWindow::onHelp);
    connect(exitAction, &QAction::triggered, this, &MainWindow::close);

    // Connect the Obfuscate button to a slot (you can define what it does later)
    connect(obfuscateButton, &QPushButton::clicked, this, &MainWindow::onObfuscate);
}

void MainWindow::dragEnterEvent(QDragEnterEvent *event)
{
    if (event->mimeData()->hasUrls()) {
        event->acceptProposedAction();  // Accept drag if it contains URLs (files)
    }
}

void MainWindow::dropEvent(QDropEvent *event)
{
    if (event->mimeData()->hasUrls()) {
        QList<QUrl> urlList = event->mimeData()->urls();
        if (!urlList.isEmpty()) {
            QString filePath = urlList.first().toLocalFile();  // Get the first file path
            QFileInfo fileInfo(filePath);

            // Get the file extension
            QString fileExtension = fileInfo.suffix().toLower(); // Convert to lowercase for comparison

            // Define the allowed extensions
            QStringList allowedExtensions = {"c", "cpp", "cc", "cxx", "m", "mm", "h", "hpp", "hh", "hxx"};

            // Check if the file extension is valid
            if (!allowedExtensions.contains(fileExtension)) {
                // Show an alert message
                QMessageBox::warning(this, "Invalid File",
                                     "The uploaded file is not a valid C, C++, Objective-C, or Objective-C++ source file. "
                                     "Please re-upload a supported file with appropriate file extension.");
                return; // Stop further processing
            }

            // Update the drop area label with the file path
            dropAreaLabel->setText(shortenText(filePath));
            qDebug() << "File dropped:" << filePath;

            // Use QMimeDatabase to get a more accurate file type
            QMimeType mimeType = mimeDatabase.mimeTypeForFile(fileInfo);

            // Set the text for the file properties
            fileNameLabel->setText("Filename: " + shortenText(fileInfo.fileName()));
            fileTypeLabel->setText("Type: " + mimeType.name());
            filePathLabel->setText("Location: " + shortenText(fileInfo.absoluteFilePath()));
            fileSizeLabel->setText("Size: " + QString::number(fileInfo.size()) + " B");
            // Set the output file name to the name of the input file
            outputFileNameEdit->setText(fileInfo.absolutePath() + "/" + fileInfo.baseName());

            // Show the right panel when a file is uploaded
            rightPanel->show();
        }
    }
}


void MainWindow::onOpen()
{
    // Open a file dialog to select a file
    QString filePath = QFileDialog::getOpenFileName(this, tr("Open File"), "", tr("All Files (*.*)"));

    if (!filePath.isEmpty()) {
        QFileInfo fileInfo(filePath);

        // Get the file extension
        QString fileExtension = fileInfo.suffix().toLower(); // Convert to lowercase for comparison

        // Define the allowed extensions
        QStringList allowedExtensions = {"c", "cpp", "cc", "cxx", "m", "mm", "h", "hpp", "hh", "hxx"};

        // Check if the file extension is valid
        if (!allowedExtensions.contains(fileExtension)) {
            // Show an alert message
            QMessageBox::warning(this, "Invalid File",
                                 "The uploaded file is not a valid C, C++, Objective-C, or Objective-C++ source file. "
                                 "Please re-upload a supported file with appropriate file extension.");
            return; // Stop further processing
        }

        // Update the UI with the selected file's information
        dropAreaLabel->setText(shortenText(filePath));
        qDebug() << "File selected:" << filePath;

        // Use QMimeDatabase to get a more accurate file type
        QMimeType mimeType = mimeDatabase.mimeTypeForFile(fileInfo);

        // Update labels with file information
        fileNameLabel->setText("Filename: " + shortenText(fileInfo.fileName()));
        fileTypeLabel->setText("Type: " + mimeType.name());
        filePathLabel->setText("Location: " + shortenText(fileInfo.absoluteFilePath()));
        fileSizeLabel->setText("Size: " + QString::number(fileInfo.size()) + " B");
        // Set the output file name to the name of the input file
        outputFileNameEdit->setText(fileInfo.absolutePath() + "/" + fileInfo.baseName());

        // Show the right panel with the file details
        rightPanel->show();
    }
}

// Helper function to get the project root path
QString getProjectRootPath()
{
    QString appDir = QCoreApplication::applicationDirPath();
    QDir projectRootDir(appDir);
    return projectRootDir.absolutePath();
}

void MainWindow::onObfuscate()
{
    // Get the current file path from the drop area label
    QString filePath = dropAreaLabel->text();

    // Ensure a file has been loaded
    if (filePath.isEmpty() || filePath == "Drag and drop a file here") {
        QMessageBox::warning(this, "No File", "Please upload a file before obfuscating.");
        return;
    }

    QFileInfo fileInfo(filePath);
    QString fileExtension = fileInfo.suffix().toLower(); // Get the file extension

    // Get the project root path
    QString projectRootPath = getProjectRootPath();

    // Determine the compiler based on the file extensions ("c", "cpp", "cc", "cxx", "m", "mm", "h", "hpp", "hh", "hxx")
    QString compiler = (fileExtension == "c" || fileExtension == "m" || fileExtension == "h") ? "clang" : "clang++";

    // Prepend the project root path to the compiler
    QString compileCommand = projectRootPath + "/obf-build/bin/" + compiler;

    // CompileCommand Arguments
    QStringList arguments = {};

    // Append the source file to the compile command
    arguments.append(fileInfo.absoluteFilePath());

    // Add arguments for each checked obfuscation option
    if (checkBoxMBA->isChecked()) {
        arguments.append("-mllvm");
        arguments.append("-sub");
    }
    if (checkBoxBCF->isChecked()) {
        arguments.append("-mllvm");
        arguments.append("-bcf");
    }
    if (checkBoxCFF->isChecked()) {
        arguments.append("-mllvm");
        arguments.append("-fla");
    }
    if (checkBoxSOBF->isChecked()) {
        arguments.append("-mllvm");
        arguments.append("-sobf");
    }

    QString outputFileName = outputFileNameEdit->text();
    arguments.append("-o");
    arguments.append(outputFileName);

    QProcess process;
    process.setProgram(compileCommand);
    process.setArguments(arguments);

    process.start();
    if (!process.waitForFinished()) {
        QMessageBox::critical(this, "Error", "Failed to execute compile command.");
        return;
    }

    QMessageBox::information(this, "Success", "Compilation completed successfully. The compiled file has been saved as: " + outputFileName);

}

QString MainWindow::shortenText(const QString &text, int maxLength)
{
    if (text.length() <= maxLength)
        return text;

    // Show the first few characters, ellipsis, and the last few characters
    int keepStart = maxLength / 2 - 2;
    int keepEnd = maxLength - keepStart - 3;  // 3 is for the "..."

    return text.left(keepStart) + "..." + text.right(keepEnd);
}

void MainWindow::onHelp()
{
    QMessageBox helpBox;
    helpBox.setWindowTitle("How to Use ToyObfuscator");
    helpBox.setText(
        "<h2 style='color: #FE2E2E;'>ToyObfuscator Usage Guide</h2>"
        "<p><strong>Follow these steps to use the application:</strong></p>"
        "<ol>"
        "    <li>Drag and drop a file into the designated area, or use the <strong>File</strong> menu to select a file. The tool currently supports source code written in C, C++, Objective-C, and Objective-C++.</li>"
        "    <li>Choose one or more obfuscation methods by checking the available options:</li>"
        "    <li>Click the <strong>Obfuscate</strong> button to start the obfuscation process.</li>"
        "</ol>"
        "<p>File details will be displayed on the right panel once a file is loaded.</p>"
        );
    helpBox.setIcon(QMessageBox::Information);
    helpBox.exec();
}
