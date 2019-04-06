#include "h1dialog.h"
#include "ui_h1dialog.h"

H1Dialog::H1Dialog(QWidget *parent, QString *line) :
    QDialog(parent),
    ui(new Ui::H1Dialog)
{
    ui->setupUi(this);
    ui->label->setText(*line);
}

H1Dialog::~H1Dialog()
{
    delete ui;
}
