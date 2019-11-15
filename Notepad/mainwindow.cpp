#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "save.h"
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QFileDialog>
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionSave_triggered()
{
    QString fname = QFileDialog::getSaveFileName(this,"Save file as :","C://");
    QFile file(fname);
    file.open(QIODevice::WriteOnly);
    if(!file.isOpen())QMessageBox::warning(this,"tt","file not saved!!");
    QTextStream out(&file);
    QString input = ui->textEdit->toPlainText();
    out<<input;
    file.flush();
    file.close();
}

void MainWindow::on_actionNew_triggered()
{
    MainWindow *win = new MainWindow();
    win->setWindowIcon(QIcon(":/image/img/notepad.jpg"));
    win->setWindowTitle("Notepad");
    win->show();

}

void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}

void MainWindow::on_actionOpen_triggered()
{
    QString fname = QFileDialog::getOpenFileName(this,"Open :","C:\\");
    QFile file(fname);
    file.open(QIODevice::ReadOnly);
    if(!file.isOpen())QMessageBox::warning(this,"error","file not opened!!");
    QTextStream in(&file);
    QString data = in.readAll();
    ui->textEdit->setPlainText(data);

    file.close();
}

void MainWindow::on_actionAbout_triggered()
{
    QMessageBox::about(this,"About Notepad","Created by\n\tAmit Kathait");
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox::about(this,"About Notepad","Created by\n\tAmit Kathait");
}
