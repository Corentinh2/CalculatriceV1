/********************************************************************************
** Form generated from reading UI file 'calculatrice.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATRICE_H
#define UI_CALCULATRICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculatrice
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *pushButton0;
    QPushButton *pushButtonSoustraire;
    QPushButton *pushButtonEffacer;
    QPushButton *pushButton9;
    QPushButton *pushButtonMultiplier;
    QPushButton *pushButton7;
    QPushButton *pushButton8;
    QPushButton *pushButton3;
    QPushButton *pushButtonAdditionner;
    QPushButton *pushButton5;
    QPushButton *pushButton1;
    QPushButton *pushButtonDiviser;
    QLineEdit *lineEditAfficheur;
    QPushButton *pushButton6;
    QPushButton *pushButtonEgal;
    QPushButton *pushButton2;
    QPushButton *pushButton4;

    void setupUi(QWidget *Calculatrice)
    {
        if (Calculatrice->objectName().isEmpty())
            Calculatrice->setObjectName("Calculatrice");
        Calculatrice->resize(600, 400);
        QFont font;
        font.setPointSize(15);
        Calculatrice->setFont(font);
        verticalLayout = new QVBoxLayout(Calculatrice);
        verticalLayout->setObjectName("verticalLayout");
        widget = new QWidget(Calculatrice);
        widget->setObjectName("widget");
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        pushButton0 = new QPushButton(widget);
        pushButton0->setObjectName("pushButton0");
        pushButton0->setMinimumSize(QSize(50, 50));

        gridLayout->addWidget(pushButton0, 5, 1, 1, 1);

        pushButtonSoustraire = new QPushButton(widget);
        pushButtonSoustraire->setObjectName("pushButtonSoustraire");
        pushButtonSoustraire->setMinimumSize(QSize(50, 50));

        gridLayout->addWidget(pushButtonSoustraire, 3, 3, 1, 1);

        pushButtonEffacer = new QPushButton(widget);
        pushButtonEffacer->setObjectName("pushButtonEffacer");
        pushButtonEffacer->setMinimumSize(QSize(50, 50));

        gridLayout->addWidget(pushButtonEffacer, 5, 0, 1, 1);

        pushButton9 = new QPushButton(widget);
        pushButton9->setObjectName("pushButton9");
        pushButton9->setMinimumSize(QSize(50, 50));

        gridLayout->addWidget(pushButton9, 1, 2, 1, 1);

        pushButtonMultiplier = new QPushButton(widget);
        pushButtonMultiplier->setObjectName("pushButtonMultiplier");
        pushButtonMultiplier->setMinimumSize(QSize(50, 50));

        gridLayout->addWidget(pushButtonMultiplier, 4, 3, 1, 1);

        pushButton7 = new QPushButton(widget);
        pushButton7->setObjectName("pushButton7");
        pushButton7->setMinimumSize(QSize(50, 50));

        gridLayout->addWidget(pushButton7, 1, 0, 1, 1);

        pushButton8 = new QPushButton(widget);
        pushButton8->setObjectName("pushButton8");
        pushButton8->setMinimumSize(QSize(50, 50));

        gridLayout->addWidget(pushButton8, 1, 1, 1, 1);

        pushButton3 = new QPushButton(widget);
        pushButton3->setObjectName("pushButton3");
        pushButton3->setMinimumSize(QSize(50, 50));

        gridLayout->addWidget(pushButton3, 4, 2, 1, 1);

        pushButtonAdditionner = new QPushButton(widget);
        pushButtonAdditionner->setObjectName("pushButtonAdditionner");
        pushButtonAdditionner->setMinimumSize(QSize(50, 50));

        gridLayout->addWidget(pushButtonAdditionner, 1, 3, 1, 1);

        pushButton5 = new QPushButton(widget);
        pushButton5->setObjectName("pushButton5");
        pushButton5->setMinimumSize(QSize(50, 50));

        gridLayout->addWidget(pushButton5, 3, 1, 1, 1);

        pushButton1 = new QPushButton(widget);
        pushButton1->setObjectName("pushButton1");
        pushButton1->setMinimumSize(QSize(50, 50));

        gridLayout->addWidget(pushButton1, 4, 0, 1, 1);

        pushButtonDiviser = new QPushButton(widget);
        pushButtonDiviser->setObjectName("pushButtonDiviser");
        pushButtonDiviser->setMinimumSize(QSize(50, 50));

        gridLayout->addWidget(pushButtonDiviser, 5, 3, 1, 1);

        lineEditAfficheur = new QLineEdit(widget);
        lineEditAfficheur->setObjectName("lineEditAfficheur");
        lineEditAfficheur->setMinimumSize(QSize(0, 50));
        lineEditAfficheur->setStyleSheet(QString::fromUtf8("background-color: rgb(143, 240, 164);"));
        lineEditAfficheur->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        lineEditAfficheur->setReadOnly(true);

        gridLayout->addWidget(lineEditAfficheur, 0, 0, 1, 4);

        pushButton6 = new QPushButton(widget);
        pushButton6->setObjectName("pushButton6");
        pushButton6->setMinimumSize(QSize(50, 50));

        gridLayout->addWidget(pushButton6, 3, 2, 1, 1);

        pushButtonEgal = new QPushButton(widget);
        pushButtonEgal->setObjectName("pushButtonEgal");
        pushButtonEgal->setMinimumSize(QSize(50, 50));

        gridLayout->addWidget(pushButtonEgal, 5, 2, 1, 1);

        pushButton2 = new QPushButton(widget);
        pushButton2->setObjectName("pushButton2");
        pushButton2->setMinimumSize(QSize(50, 50));

        gridLayout->addWidget(pushButton2, 4, 1, 1, 1);

        pushButton4 = new QPushButton(widget);
        pushButton4->setObjectName("pushButton4");
        pushButton4->setMinimumSize(QSize(50, 50));

        gridLayout->addWidget(pushButton4, 3, 0, 1, 1);


        verticalLayout->addWidget(widget);


        retranslateUi(Calculatrice);

        QMetaObject::connectSlotsByName(Calculatrice);
    } // setupUi

    void retranslateUi(QWidget *Calculatrice)
    {
        Calculatrice->setWindowTitle(QCoreApplication::translate("Calculatrice", "Calculatrice", nullptr));
        pushButton0->setText(QCoreApplication::translate("Calculatrice", "0", nullptr));
        pushButtonSoustraire->setText(QCoreApplication::translate("Calculatrice", "-", nullptr));
        pushButtonEffacer->setText(QCoreApplication::translate("Calculatrice", "C", nullptr));
        pushButton9->setText(QCoreApplication::translate("Calculatrice", "9", nullptr));
        pushButtonMultiplier->setText(QCoreApplication::translate("Calculatrice", "*", nullptr));
        pushButton7->setText(QCoreApplication::translate("Calculatrice", "7", nullptr));
        pushButton8->setText(QCoreApplication::translate("Calculatrice", "8", nullptr));
        pushButton3->setText(QCoreApplication::translate("Calculatrice", "3", nullptr));
        pushButtonAdditionner->setText(QCoreApplication::translate("Calculatrice", "+", nullptr));
        pushButton5->setText(QCoreApplication::translate("Calculatrice", "5", nullptr));
        pushButton1->setText(QCoreApplication::translate("Calculatrice", "1", nullptr));
        pushButtonDiviser->setText(QCoreApplication::translate("Calculatrice", "/", nullptr));
        pushButton6->setText(QCoreApplication::translate("Calculatrice", "6", nullptr));
        pushButtonEgal->setText(QCoreApplication::translate("Calculatrice", "=", nullptr));
        pushButton2->setText(QCoreApplication::translate("Calculatrice", "2", nullptr));
        pushButton4->setText(QCoreApplication::translate("Calculatrice", "4", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculatrice: public Ui_Calculatrice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATRICE_H
