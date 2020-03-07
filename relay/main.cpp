#include "relaytest.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    relaytest w;
    w.show();

    return a.exec();
}
