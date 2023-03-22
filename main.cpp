#include "mainwindow.h"
#include "chiffrage.h"
#include "fileclass.h"

#include <QApplication>
#include <iostream>
#include <QCoreApplication>

/*
 * Antoine NEBOUT
 * March 2023
*/

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
