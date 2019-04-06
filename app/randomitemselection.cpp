#include "randomitemselection.h"

RandomItemSelection::RandomItemSelection(const FloatLabel &label)
{
    connect(&label, SIGNAL(mouseLeftClick()), this, SLOT(onFloatLeftMouseClick()));
    connect(&label, SIGNAL(mouseRightClick()), this, SLOT(onFloatRightMouseClick()));
}

void RandomItemSelection::onFloatLeftMouseClick()
{
    QString msg("Emmm");
    H1Dialog h1(nullptr, &msg);
    h1.exec();
}

void RandomItemSelection::start() {
    QTextStream out(stdout);
    out << "Started" << endl;
}

_Noreturn void RandomItemSelection::onFloatRightMouseClick()
{
    exit(EXIT_SUCCESS);
}
