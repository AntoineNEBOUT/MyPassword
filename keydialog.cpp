#include "keydialog.h"
#include "ui_keydialog.h"

KeyDialog::KeyDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::KeyDialog)
{
    ui->setupUi(this);

    //Génération d'une QList contenant les chiffres de 0 à 9 sous la forme de QString
    int i;
    for(i = 0 ; i < 10 ; i++)
        num.append(QString::number(i));

    ui->buttonBox->setEnabled(false);
}

KeyDialog::~KeyDialog()
{
    delete ui;
}

void KeyDialog::on_lineEdit_textChanged(const QString &arg1)
{
    /*
     * Slot qui se déclenche lorsque le texte de la LineEdit contenant la clé de déchiffrage est modifié afin de vérifier la présence de lettres.
     */

    bool withoutNum = true;
    int i;

    //Vérifier si la clé entrée par l'utilisateur ne contient pas de lettres
    for(i = 0 ; i < arg1.length() ; i++)
        if(!num.contains(arg1[i]))
            withoutNum = false;

    //Condition qui désactive le bouton de validation si la clé entrée par l'utilisateur contient une ou plusieurs lettres
    if(withoutNum && arg1 != "")
    {
        keyToShare = arg1;
        ui->buttonBox->setEnabled(true);
    }
    else
        ui->buttonBox->setEnabled(false);
}

