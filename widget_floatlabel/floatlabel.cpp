#include "floatlabel.h"

using namespace Qt;

FloatLabel::FloatLabel(QWidget *parent)
    : QLabel(parent, WindowStaysOnTopHint | FramelessWindowHint)
{
    QFont font;
    font.setPointSize(DEFAULT_POINT_SIZE);
    this->setFont(font);
}

int FloatLabel::getFontSize() { return this->font().pointSize(); }
void FloatLabel::setFontSize(int size) { this->setFont(QFont(nullptr, size)); }

ulong FloatLabel::getAwaitTime() { return awaitTime; }
void FloatLabel::setAwaitTime(ulong value) { awaitTime = value; }

const QString FloatLabel::getLabel() { return this->text(); }
void FloatLabel::setLabel(const QString &value) { this->setText(value); }

void FloatLabel::mousePressEvent(QMouseEvent *event)
{
  if (event->button() == LeftButton)
  {
    relativePos = this->pos() - event->globalPos();
  }

  pressedTime = event->timestamp();
}

void FloatLabel::mouseReleaseEvent(QMouseEvent *event)
{
  if (/* widget pressed time */(event->timestamp() - pressedTime) < this->awaitTime)
  switch (event->button())
      {
        case LeftButton:
          emit mouseLeftClick();
          return;
        case RightButton:
          emit mouseRightClick();
          return;
        default: break;
      }
}

void FloatLabel::mouseMoveEvent(QMouseEvent *event)
{
  this->move(event->globalPos() + relativePos);
}

FloatLabel::~FloatLabel()
{
}
