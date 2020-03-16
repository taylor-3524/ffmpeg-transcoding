/********************************************************************************
** Form generated from reading UI file 'ffmpeg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FFMPEG_H
#define UI_FFMPEG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ffmpegClass
{
public:
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *openFloder_btn;
    QLineEdit *Path_text;
    QTextBrowser *cmd_text;
    QPushButton *copy_btn;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ffmpegClass)
    {
        if (ffmpegClass->objectName().isEmpty())
            ffmpegClass->setObjectName(QStringLiteral("ffmpegClass"));
        ffmpegClass->resize(600, 400);
        centralWidget = new QWidget(ffmpegClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 20, 551, 31));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        openFloder_btn = new QPushButton(gridLayoutWidget);
        openFloder_btn->setObjectName(QStringLiteral("openFloder_btn"));

        gridLayout->addWidget(openFloder_btn, 0, 0, 1, 1);

        Path_text = new QLineEdit(gridLayoutWidget);
        Path_text->setObjectName(QStringLiteral("Path_text"));

        gridLayout->addWidget(Path_text, 0, 1, 1, 1);

        cmd_text = new QTextBrowser(centralWidget);
        cmd_text->setObjectName(QStringLiteral("cmd_text"));
        cmd_text->setGeometry(QRect(20, 60, 551, 231));
        copy_btn = new QPushButton(centralWidget);
        copy_btn->setObjectName(QStringLiteral("copy_btn"));
        copy_btn->setGeometry(QRect(20, 310, 551, 51));
        ffmpegClass->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(ffmpegClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ffmpegClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ffmpegClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ffmpegClass->setStatusBar(statusBar);

        retranslateUi(ffmpegClass);

        QMetaObject::connectSlotsByName(ffmpegClass);
    } // setupUi

    void retranslateUi(QMainWindow *ffmpegClass)
    {
        ffmpegClass->setWindowTitle(QApplication::translate("ffmpegClass", "ffmpeg", Q_NULLPTR));
        openFloder_btn->setText(QApplication::translate("ffmpegClass", "\351\200\211\346\213\251\346\226\207\344\273\266\345\244\271", Q_NULLPTR));
        copy_btn->setText(QApplication::translate("ffmpegClass", "\345\244\215\345\210\266", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ffmpegClass: public Ui_ffmpegClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FFMPEG_H
