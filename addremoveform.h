#ifndef ADDREMOVEFORM_H
#define ADDREMOVEFORM_H
#include "chiffrage.h"

#include <QWidget>
#include <QList>
#include <QCoreApplication>

using namespace std;

namespace Ui {
class AddRemoveForm;
}

class AddRemoveForm : public QWidget
{
    Q_OBJECT

public:
    explicit AddRemoveForm(QList<QString> categoriesNames, QList<QString> groupBoxNames, QString currentCategory, QString key, QWidget *parent = nullptr);
    ~AddRemoveForm();

private slots:
    void on_addGroupBox_toggled(bool arg1);

    void on_removeGroupBox_toggled(bool arg1);

    void on_categoryAddGroupBox_toggled(bool arg1);

    void on_accountAddGroupBox_toggled(bool arg1);

    void on_categoryRemoveGroupBox_toggled(bool arg1);

    void on_accountRemoveGroupBox_toggled(bool arg1);

    void on_validateCategoryRemovePushButton_clicked();

    void on_sureCategoryRemoveCheckBox_toggled(bool checked);

    void on_sureAccountRemoveCheckBox_toggled(bool checked);

    void on_validateAccountRemovePushButton_clicked();

    void on_categoryNameAddLineEdit_textChanged(const QString &arg1);

    void on_validateCategoryAddPushButton_clicked();

    void on_validateAccountAddPushButton_clicked();

    void on_generatePasswordPushButton_clicked();

    void on_iconCategoryAddPushButton_clicked();

private:
    Ui::AddRemoveForm *ui;
    string path = QCoreApplication::applicationDirPath().toStdString() + "/categories.txt";
    QString m_currentCategory;
    Chiffrage *dTwo;
    string nullEncrypted;
    QString categoryIconFilePath = "Icon";
};

#endif // ADDREMOVEFORM_H
