#include "chiffrage.h"

#include <QString>
#include <QStringList>
#include <iostream>
#include <random>

using namespace std;

Chiffrage::Chiffrage()
{

}

Chiffrage::Chiffrage(QString key)
{
    keyToUse = key;
}

QString Chiffrage::Encrypt(QString qstringToEncrypt, QString key)
{
    QString encryptedQString = "";

    char temp;
    int j = 0;
    int i;
    for(i = 0 ; i < qstringToEncrypt.length() ; i++)
    {
        /*
         * Méthode qui prend en paramètre une QString à encrypter avec une QString contenant la clé de cryptage/décryptage composée uniquement de chiffres
        */
        temp = qstringToEncrypt[i].toLatin1();
        int tempToAscii = int(temp);
        temp = char(tempToAscii+key[j].digitValue());

        encryptedQString.append(temp);

        // cout << "DEBUG[ENCRYPT] : " << qstringToEncrypt[i].toLatin1() << " => " << tempToAscii << " => +" << key[j].digitValue() << " => " << temp << " => " << encryptedQString.toStdString() << endl;

        if(j == key.length() || j > key.length())
            j = 0;
        else if(j == key.length()-1)
            j = 0;
        else
            j++;
    }

    return(encryptedQString);
}

QString Chiffrage::Encrypt(QString qstringToEncrypt)
{
    QString encryptedQString = "";

    char temp;
    int j = 0;
    int i;
    for(i = 0 ; i < qstringToEncrypt.length() ; i++)
    {
        /*
         * Méthode qui prend en paramètre une QString à encrypter avec une QString contenant la clé de cryptage/décryptage composée uniquement de chiffres
        */
        temp = qstringToEncrypt[i].toLatin1();
        int tempToAscii = int(temp);
        temp = char(tempToAscii+keyToUse[j].digitValue());

        encryptedQString.append(temp);

        // cout << "DEBUG[ENCRYPT] : " << qstringToEncrypt[i].toLatin1() << " => " << tempToAscii << " => +" << key[j].digitValue() << " => " << temp << " => " << encryptedQString.toStdString() << endl;

        if(j == keyToUse.length() || j > keyToUse.length())
            j = 0;
        else if(j == keyToUse.length()-1)
            j = 0;
        else
            j++;
    }

    return(encryptedQString);
}

QString Chiffrage::Decrypt(QString qstringToDecrypt, QString key)
{
    QString decryptedQString = "";

    char temp;
    int j = 0;
    int i;
    for(i = 0 ; i < qstringToDecrypt.length() ; i++)
    {
        /*
         * Méthode qui prend en paramètre une QString à decrypter avec une QString contenant la clé de cryptage/décryptage composée uniquement de chiffres
        */
        temp = qstringToDecrypt[i].toLatin1();
        int tempToAscii = int(temp);
        temp = char(tempToAscii-key[j].digitValue());

        decryptedQString.append(temp);

        // cout << "DEBUG[DECRYPT] : " << qstringToDecrypt[i].toLatin1() << " => " << tempToAscii << " => -" << key[j].digitValue() << " => " << temp << " => " << decryptedQString.toStdString() << endl;

        if(j == key.length() || j > key.length())
            j = 0;
        else if(j == key.length()-1)
            j = 0;
        else
            j++;
    }

    return(decryptedQString);
}

QString Chiffrage::Decrypt(QString qstringToDecrypt)
{
    QString decryptedQString = "";

    char temp;
    int j = 0;
    int i;
    for(i = 0 ; i < qstringToDecrypt.length() ; i++)
    {
        /*
         * Méthode qui prend en paramètre une QString à decrypter avec une QString contenant la clé de cryptage/décryptage composée uniquement de chiffres
        */
        temp = qstringToDecrypt[i].toLatin1();
        int tempToAscii = int(temp);
        temp = char(tempToAscii-keyToUse[j].digitValue());

        decryptedQString.append(temp);

        // cout << "DEBUG[DECRYPT] : " << qstringToDecrypt[i].toLatin1() << " => " << tempToAscii << " => -" << key[j].digitValue() << " => " << temp << " => " << decryptedQString.toStdString() << endl;

        if(j == keyToUse.length() || j > keyToUse.length())
            j = 0;
        else if(j == keyToUse.length()-1)
            j = 0;
        else
            j++;
    }

    return(decryptedQString);
}

QString Chiffrage::GeneratePassword(int length)
{
    QString passwordToReturn = "";
    QString alphabet = "abcdefghijklmnopqrstuvwxyz123456789!:;,?ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    srand((unsigned int)time(NULL)); // Permet d'améliorer l'aléatoire de 'rand()'

    int i;
    for(i = 0 ; i < length ; i++)
    {
        int letterIndex = rand() % 67+1;
        passwordToReturn.append(alphabet[letterIndex-1]);
    }

    return(passwordToReturn);
}
