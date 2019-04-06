#ifndef RANDOMITEMSELECTION_H
#define RANDOMITEMSELECTION_H

#include "../widget_floatlabel/floatlabel.h"
#include "../widget_h1dialog/h1dialog.h"

#include <QObject>
#include <QTextStream>

class RandomItemSelection : public QObject
{
    Q_OBJECT
public:
    explicit RandomItemSelection(const FloatLabel &label);
    void start();

signals:

public slots:
    void onFloatLeftMouseClick();
    void onFloatRightMouseClick();
};

#endif // RANDOMITEMSELECTION_H
