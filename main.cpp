#include "mafenetreprincipal.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mafenetreprincipal w;
    w.show();

    return a.exec();
}
