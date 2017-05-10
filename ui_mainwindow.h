/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainwindow
{
public:
    QPushButton *xDerivativeButton;
    QPushButton *yDerivativeButton;
    QPushButton *gradientButton;
    QSpinBox *blurLevelBox;
    QPushButton *blurButton;
    QLabel *label;
    QFrame *line;
    QFrame *line_2;
    QLabel *label_2;
    QLineEdit *tresholdingField;
    QPushButton *tresholdingButton;
    QFrame *line_3;
    QPushButton *histButton;
    QPushButton *resetButton;
    QPushButton *wbbErosionButton;
    QPushButton *bbwErosionButton;

    void setupUi(QWidget *mainwindow)
    {
        if (mainwindow->objectName().isEmpty())
            mainwindow->setObjectName(QStringLiteral("mainwindow"));
        mainwindow->resize(394, 390);
        xDerivativeButton = new QPushButton(mainwindow);
        xDerivativeButton->setObjectName(QStringLiteral("xDerivativeButton"));
        xDerivativeButton->setGeometry(QRect(20, 20, 93, 28));
        yDerivativeButton = new QPushButton(mainwindow);
        yDerivativeButton->setObjectName(QStringLiteral("yDerivativeButton"));
        yDerivativeButton->setGeometry(QRect(140, 20, 93, 28));
        gradientButton = new QPushButton(mainwindow);
        gradientButton->setObjectName(QStringLiteral("gradientButton"));
        gradientButton->setGeometry(QRect(260, 20, 93, 28));
        blurLevelBox = new QSpinBox(mainwindow);
        blurLevelBox->setObjectName(QStringLiteral("blurLevelBox"));
        blurLevelBox->setGeometry(QRect(81, 170, 51, 22));
        blurLevelBox->setMinimum(1);
        blurLevelBox->setMaximum(99);
        blurLevelBox->setValue(10);
        blurButton = new QPushButton(mainwindow);
        blurButton->setObjectName(QStringLiteral("blurButton"));
        blurButton->setGeometry(QRect(140, 170, 93, 28));
        label = new QLabel(mainwindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 140, 261, 16));
        line = new QFrame(mainwindow);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 120, 361, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(mainwindow);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(10, 210, 361, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(mainwindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 230, 311, 16));
        tresholdingField = new QLineEdit(mainwindow);
        tresholdingField->setObjectName(QStringLiteral("tresholdingField"));
        tresholdingField->setGeometry(QRect(40, 260, 91, 22));
        tresholdingButton = new QPushButton(mainwindow);
        tresholdingButton->setObjectName(QStringLiteral("tresholdingButton"));
        tresholdingButton->setGeometry(QRect(140, 260, 111, 28));
        line_3 = new QFrame(mainwindow);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(10, 300, 361, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        histButton = new QPushButton(mainwindow);
        histButton->setObjectName(QStringLiteral("histButton"));
        histButton->setGeometry(QRect(20, 70, 93, 28));
        resetButton = new QPushButton(mainwindow);
        resetButton->setObjectName(QStringLiteral("resetButton"));
        resetButton->setGeometry(QRect(260, 70, 93, 28));
        wbbErosionButton = new QPushButton(mainwindow);
        wbbErosionButton->setObjectName(QStringLiteral("wbbErosionButton"));
        wbbErosionButton->setGeometry(QRect(40, 330, 121, 28));
        bbwErosionButton = new QPushButton(mainwindow);
        bbwErosionButton->setObjectName(QStringLiteral("bbwErosionButton"));
        bbwErosionButton->setGeometry(QRect(212, 330, 111, 28));

        retranslateUi(mainwindow);

        QMetaObject::connectSlotsByName(mainwindow);
    } // setupUi

    void retranslateUi(QWidget *mainwindow)
    {
        mainwindow->setWindowTitle(QApplication::translate("mainwindow", "Form", 0));
        xDerivativeButton->setText(QApplication::translate("mainwindow", "x-Derivative", 0));
        yDerivativeButton->setText(QApplication::translate("mainwindow", "y-Derivative", 0));
        gradientButton->setText(QApplication::translate("mainwindow", "Gradient", 0));
        blurButton->setText(QApplication::translate("mainwindow", "Apply blur", 0));
        label->setText(QApplication::translate("mainwindow", "Blurring: select number of iterations below", 0));
        label_2->setText(QApplication::translate("mainwindow", "Tresholding: select pixel value ", 0));
        tresholdingButton->setText(QApplication::translate("mainwindow", "Apply tresholding", 0));
        histButton->setText(QApplication::translate("mainwindow", "Histogram", 0));
        resetButton->setText(QApplication::translate("mainwindow", "Reset", 0));
        wbbErosionButton->setText(QApplication::translate("mainwindow", "W-b-B Erosion", 0));
        bbwErosionButton->setText(QApplication::translate("mainwindow", "B-b-W Erosion", 0));
    } // retranslateUi

};

namespace Ui {
    class mainwindow: public Ui_mainwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
