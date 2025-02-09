#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QCheckBox>
#include <QPushButton>
#include <QMimeDatabase>
#include <QString>
#include <QLineEdit>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    void dragEnterEvent(QDragEnterEvent *event) override;
    void dropEvent(QDropEvent *event) override;

private slots:
    void onOpen();
    void onObfuscate();
    void onHelp();

private:
    Ui::MainWindow *ui;
    QLabel *dropAreaLabel;
    QCheckBox *checkBoxMBA;
    QCheckBox *checkBoxBCF;
    QCheckBox *checkBoxCFF;
    QCheckBox *checkBoxSOBF;
    QPushButton *obfuscateButton;
    QWidget *rightPanel;
    QLabel *fileNameLabel;
    QLabel *fileTypeLabel;
    QLabel *filePathLabel;
    QLabel *fileSizeLabel;
    QLabel *outputFilenameLabel;
    QLineEdit *outputFileNameEdit;
    QMimeDatabase mimeDatabase;

    void setupUI();  // Method to setup the UI components
    QString shortenText(const QString &text, int maxLength = 50);
};

#endif // MAINWINDOW_H
