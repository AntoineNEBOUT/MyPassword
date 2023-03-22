#ifndef FILECLASS_H
#define FILECLASS_H

#include <QString>
#include <QFile>

class FileClass
{
public:
    FileClass();
    QString OpenFile(QString pathToFile, bool trimmed);
    bool WriteFile(QString pathToFile, QString text);

private:
    QFile *file;
    QString fileContentToReturn;
    bool resultToReturn;
};

#endif // FILECLASS_H
