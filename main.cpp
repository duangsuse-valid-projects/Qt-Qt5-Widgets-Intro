#include "widget_floatlabel/floatlabel.h"
#include "widget_h1dialog/h1dialog.h"
#include "app/randomitemselection.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FloatLabel w;
    w.setLabel("Hello world");
    w.setFontSize(40);
    w.show();

    H1Dialog *d = new H1Dialog(nullptr, new QString("Hello"));
    d->show();

    RandomItemSelection rs(w);
    rs.start();

    return a.exec();
}
