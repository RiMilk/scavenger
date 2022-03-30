#include "scavenger.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    scavenger w;
    w.show();
    return a.exec();
}
