#ifndef SAVE_H
#define SAVE_H

#include <QDialog>

namespace Ui {
class Save;
}

class Save : public QDialog
{
    Q_OBJECT

public:
    explicit Save(QWidget *parent = 0);
    ~Save();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::Save *ui;
};

#endif // SAVE_H
