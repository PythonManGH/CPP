#include "mainwindow.h"
#include"menuwidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    MenuWidget m;
    m.show();

    return a.exec();
}
