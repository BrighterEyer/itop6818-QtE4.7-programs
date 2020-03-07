#include "rc522.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFont font;
    font.setPointSize(4);
    font.setBold(false);
    a.setFont(font);
    rc522 w;
    w.show();

    return a.exec();
}
