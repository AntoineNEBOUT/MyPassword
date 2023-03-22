#ifndef CHIFFRAGE_H
#define CHIFFRAGE_H

#include <QString>

class Chiffrage
{    
public:
    Chiffrage();
    Chiffrage(QString key);
    QString Encrypt(QString qstringToEncrypt, QString key);
    QString Encrypt(QString qstringToEncrypt);
    QString Decrypt(QString qstringToDecrypt, QString key);
    QString Decrypt(QString qstringToDecrypt);
    QString GeneratePassword(int length);

private:
    QString keyToUse;
};

#endif // CHIFFRAGE_H
