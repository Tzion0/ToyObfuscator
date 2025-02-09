#include "mainwindow.h"

#include <QApplication>
#include <QStyleFactory>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Set global stylesheet
    a.setStyleSheet("QWidget { background-color: #efefef; color: black }");

    MainWindow w;
    w.show();
    return a.exec();
}
