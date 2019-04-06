#pragma once

#include <QLabel>

#include <QMouseEvent>
#include <QPoint>

namespace Widgets {
  class FloatLabel;
}

class FloatLabel : public QLabel
{
    Q_OBJECT

public:
    explicit FloatLabel(QWidget *parent = nullptr);
    ~FloatLabel();

    void setFontSize(int size);
    int getFontSize();
    void setLabel(const QString &label);
    const QString getLabel();
    ulong getAwaitTime();
    void setAwaitTime(ulong value);

private:
    QPoint relativePos;
    ulong pressedTime;
    ulong awaitTime = 2000/* ms */;

    const static int DEFAULT_POINT_SIZE = 20;

protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);

signals:
    void mouseRightClick();
    void mouseLeftClick();
};
