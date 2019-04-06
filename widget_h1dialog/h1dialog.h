#ifndef H1DIALOG_H
#define H1DIALOG_H

#include <QDialog>

namespace Ui {
class H1Dialog;
}

class H1Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit H1Dialog(QWidget *parent = nullptr, QString *line = nullptr);
    ~H1Dialog();

private:
    Ui::H1Dialog *ui;
};

#endif // H1DIALOG_H
