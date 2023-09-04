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
    /*
     * Méthode qui prend en paramètre une QString à encrypter avec une QString contenant la clé de cryptage/décryptage composée uniquement de chiffres.
     */

    QString encryptedQString = "";

    char temp;
    int j = 0;
    int i;
    for(i = 0 ; i < qstringToEncrypt.length() ; i++)
    {
        temp = qstringToEncrypt[i].toLatin1(); // Conversion du caractère en type 'char'
        int tempToAscii = int(temp); // Récupération de la valeur du caractère dans la table ASCII
        temp = char(tempToAscii+key[j].digitValue()); // Stockage du caractère de remplacement par addition de la valeur de la clé à la valeur du caractère dans la table ASCII

        encryptedQString.append(temp); // Ajout du nouveau caractère à la chaîne finale à renvoyer

        // cout << "DEBUG[ENCRYPT] : " << qstringToEncrypt[i].toLatin1() << " => " << tempToAscii << " => +" << key[j].digitValue() << " => " << temp << " => " << encryptedQString.toStdString() << endl;

        // Gestion de l'indice 'j' qui gère les valeurs de la clé
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
    return(Encrypt(qstringToEncrypt, keyToUse));
}

QString Chiffrage::Decrypt(QString qstringToDecrypt, QString key)
{
    /*
     * Méthode qui prend en paramètre une QString à decrypter avec une QString contenant la clé de cryptage/décryptage composée uniquement de chiffres.
     */

    QString decryptedQString = "";

    char temp;
    int j = 0;
    int i;

    for(i = 0 ; i < qstringToDecrypt.length() ; i++)
    {
        temp = qstringToDecrypt[i].toLatin1(); // Conversion du caractère en type 'char'
        int tempToAscii = int(temp); // Récupération de la valeur du caractère dans la table ASCII
        temp = char(tempToAscii-key[j].digitValue()); // Stockage du caractère de remplacement par soustraction de la valeur de la clé à la valeur du caractère dans la table ASCII

        decryptedQString.append(temp); // Ajout du nouveau caractère à la chaîne finale à renvoyer

        // cout << "DEBUG[DECRYPT] : " << qstringToDecrypt[i].toLatin1() << " => " << tempToAscii << " => -" << key[j].digitValue() << " => " << temp << " => " << decryptedQString.toStdString() << endl;

        // Gestion de l'indice 'j' qui gère les valeurs de la clé
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
    return(Decrypt(qstringToDecrypt, keyToUse));
}

QString Chiffrage::GeneratePassword(int length)
{
    /*
     * Méthode qui prend en paramètre un entier correspondant à la longueur du mot de passe souhaité
     */

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
