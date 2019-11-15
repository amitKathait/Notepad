#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

     w.setWindowIcon(QIcon(":/image/img/notepad.jpg"));
     w.setWindowTitle("Notepad");
    w.show();

    return a.exec();
}
