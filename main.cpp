#include "mainwindow.h"
#include "chiffrage.h"
#include "fileclass.h"

#include <QApplication>
#include <iostream>
#include <QCoreApplication>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
