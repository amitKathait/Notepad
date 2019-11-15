#include "save.h"
#include "ui_save.h"
#include <QFile>
#include <QString>
#include <QTextStream>
#include <QMessageBox>
#include "mainwindow.h"
//#include ""
Save::Save(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Save)
{
    ui->setupUi(this);
}

Save::~Save()
{
    delete ui;
}



void Save::on_buttonBox_accepted()
{

}
