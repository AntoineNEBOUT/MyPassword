#include "fileclass.h"

#include <iostream>
#include <fstream>
#include <QString>
#include <QFile>
#include <QByteArray>

using namespace std;

FileClass::FileClass()
{

}

QString FileClass::OpenFile(QString pathToFile, bool trimmed)
{
    fileContentToReturn = "";

    string a = pathToFile.toStdString();
    ifstream fileToOpen(a.c_str());

    if(fileToOpen)
    {
        string line;

       while(std::getline(fileToOpen, line)) // Pour récupérer tout le fichier
       {
            if(trimmed)
                fileContentToReturn.append("\n" + QString::fromStdString(line).trimmed());
            else
                fileContentToReturn.append("\n" + QString::fromStdString(line));
       }
    }
    else
        fileContentToReturn = "errorFile";

    return(fileContentToReturn);
}

bool FileClass::WriteFile(QString pathToFile, QString text)
{
    resultToReturn = 0;

    string const pathToFileString = pathToFile.toStdString();
    ofstream savingStream(pathToFileString.c_str());

    if(savingStream)
    {
        savingStream << text.toStdString();
        resultToReturn = 1;
    }

    return(resultToReturn);
}
