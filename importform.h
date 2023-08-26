#ifndef IMPORTFORM_H
#define IMPORTFORM_H

#include <QWidget>

#include "chiffrage.h"

namespace Ui {
class importForm;
}

class ImportForm : public QWidget
{
    Q_OBJECT

public:
    explicit ImportForm(QWidget *parent = nullptr, QString *importFolderPath = NULL);
    ~ImportForm();

private slots:
    void on_addToolButton_clicked();

    void on_replaceToolButton_clicked();

    void on_keyOfCurrentCategoriesLineEdit_textChanged(const QString &arg1);

    void on_keyOfImportCategoriesLineEdit_textChanged(const QString &arg1);

    void on_newKeyOfCategoriesLineEdit_textChanged(const QString &arg1);

    void on_validateNewKeyOfCategoriesLineEdit_textChanged(const QString &arg1);

    void on_addRadioButton_toggled(bool checked);

    void on_replaceRadioButton_toggled(bool checked);

    void on_acceptButtonBox_rejected();

    void on_acceptButtonBox_accepted();

private:
    Ui::importForm *ui;
    QList<QString> mNum;
    int mSize;
    QString mImportPath;
    bool mIsAdd = 1;
    bool mIsCurrentCategoriesKeyIsOk = 0;
    bool mIsCurrentImportCategoriesKeyIsOk = 0;
    bool mIsNewKeyIsOk = 0;
    bool mIsValidateNewKeyIsOk = 0;
    Chiffrage *encryptor;
};

#endif // IMPORTFORM_H
