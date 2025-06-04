/********************************************************************************
** Form generated from reading UI file 'SoftPhone.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOFTPHONE_H
#define UI_SOFTPHONE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>
#include "Plotter.h"

QT_BEGIN_NAMESPACE

class Ui_SoftPhone
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *lbl_settxfreq;
    QLabel *lbl_soundcardname;
    CPlotter *Plotter;
    QLabel *lbl_sipserver;
    QPushButton *pushButton_Vm;
    QLabel *lbl_sippassword;
    QPushButton *pushButton_mastersoundcard;
    QLineEdit *lineEdit_sipserver;
    QPushButton *pushButton_Sq;
    QLineEdit *lineEdit_rxsetfreq;
    QTextBrowser *textBrowser_terminal;
    QPushButton *pushButton_register;
    QLineEdit *lineEdit_sipusername;
    QPushButton *pushButton_sendPacket;
    QLineEdit *lineEdit_sippassword;
    QCheckBox *checkBox_tcp;
    QLabel *lbl_soundcard_title;
    QLineEdit *lineEdit_udp;
    QCheckBox *checkBox_showPackets;
    QPushButton *pushButton_Rx;
    QLabel *lbl_port;
    QLabel *lbl_bss_title1_7;
    QCheckBox *checkBox_udp;
    QPushButton *pushButton_setFreq;
    QPushButton *pushButton_Vp;
    QLineEdit *lineEdit_mastersoundcard;
    QCheckBox *checkBox_Auto;
    QPushButton *pushButton_Tx;
    QLineEdit *lineEdit_txsetfreq;
    QLabel *lbl_setrxfreq;
    QPushButton *pushButton_call;
    QLabel *lbl_bss_title1_2;
    QLabel *lbl_sipuser;
    QPushButton *pushButton_exit;
    QLCDNumber *lcdNumber_Volume;
    QLabel *lbl_bss_title1;
    QLabel *lbl_ptt_status;
    QLCDNumber *lcdNumber_RxBss;
    QCheckBox *checkBox_pttset;
    QLCDNumber *lcdNumber_RxFreq;
    QLCDNumber *lcdNumber_TxFreq;
    QLineEdit *lineEdit_sipuritx;
    QLineEdit *lineEdit_sipurirx;
    QLCDNumber *lcdNumber_time;
    QLineEdit *lineEdit_sipcall;

    void setupUi(QMainWindow *SoftPhone)
    {
        if (SoftPhone->objectName().isEmpty())
            SoftPhone->setObjectName("SoftPhone");
        SoftPhone->resize(917, 628);
        QIcon icon;
        icon.addFile(QString::fromUtf8("icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        SoftPhone->setWindowIcon(icon);
        centralWidget = new QWidget(SoftPhone);
        centralWidget->setObjectName("centralWidget");
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        lbl_settxfreq = new QLabel(centralWidget);
        lbl_settxfreq->setObjectName("lbl_settxfreq");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lbl_settxfreq->sizePolicy().hasHeightForWidth());
        lbl_settxfreq->setSizePolicy(sizePolicy);
        lbl_settxfreq->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    color: rgb(255,255,255);    \n"
"    background-color:rgb(32,32,32);       \n"
"}"));
        lbl_settxfreq->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbl_settxfreq, 13, 0, 1, 1);

        lbl_soundcardname = new QLabel(centralWidget);
        lbl_soundcardname->setObjectName("lbl_soundcardname");
        sizePolicy.setHeightForWidth(lbl_soundcardname->sizePolicy().hasHeightForWidth());
        lbl_soundcardname->setSizePolicy(sizePolicy);
        lbl_soundcardname->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(lbl_soundcardname, 5, 0, 1, 6);

        Plotter = new CPlotter(centralWidget);
        Plotter->setObjectName("Plotter");
        sizePolicy.setHeightForWidth(Plotter->sizePolicy().hasHeightForWidth());
        Plotter->setSizePolicy(sizePolicy);
        Plotter->setMinimumSize(QSize(0, 0));
        Plotter->setMaximumSize(QSize(16777215, 16777215));
        Plotter->setFrameShape(QFrame::StyledPanel);
        Plotter->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(Plotter, 14, 0, 1, 6);

        lbl_sipserver = new QLabel(centralWidget);
        lbl_sipserver->setObjectName("lbl_sipserver");
        sizePolicy.setHeightForWidth(lbl_sipserver->sizePolicy().hasHeightForWidth());
        lbl_sipserver->setSizePolicy(sizePolicy);
        lbl_sipserver->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    color: rgb(255,255,255);    \n"
"    background-color:rgb(32,32,32);       \n"
"}"));
        lbl_sipserver->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbl_sipserver, 0, 0, 1, 1);

        pushButton_Vm = new QPushButton(centralWidget);
        pushButton_Vm->setObjectName("pushButton_Vm");
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_Vm->sizePolicy().hasHeightForWidth());
        pushButton_Vm->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_Vm, 2, 3, 1, 1);

        lbl_sippassword = new QLabel(centralWidget);
        lbl_sippassword->setObjectName("lbl_sippassword");
        sizePolicy.setHeightForWidth(lbl_sippassword->sizePolicy().hasHeightForWidth());
        lbl_sippassword->setSizePolicy(sizePolicy);
        lbl_sippassword->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    color: rgb(255,255,255);    \n"
"    background-color:rgb(32,32,32);       \n"
"}"));
        lbl_sippassword->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbl_sippassword, 2, 0, 1, 1);

        pushButton_mastersoundcard = new QPushButton(centralWidget);
        pushButton_mastersoundcard->setObjectName("pushButton_mastersoundcard");
        sizePolicy1.setHeightForWidth(pushButton_mastersoundcard->sizePolicy().hasHeightForWidth());
        pushButton_mastersoundcard->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_mastersoundcard, 6, 0, 1, 1);

        lineEdit_sipserver = new QLineEdit(centralWidget);
        lineEdit_sipserver->setObjectName("lineEdit_sipserver");
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEdit_sipserver->sizePolicy().hasHeightForWidth());
        lineEdit_sipserver->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(lineEdit_sipserver, 0, 1, 1, 1);

        pushButton_Sq = new QPushButton(centralWidget);
        pushButton_Sq->setObjectName("pushButton_Sq");
        sizePolicy1.setHeightForWidth(pushButton_Sq->sizePolicy().hasHeightForWidth());
        pushButton_Sq->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_Sq, 12, 5, 1, 1);

        lineEdit_rxsetfreq = new QLineEdit(centralWidget);
        lineEdit_rxsetfreq->setObjectName("lineEdit_rxsetfreq");
        sizePolicy2.setHeightForWidth(lineEdit_rxsetfreq->sizePolicy().hasHeightForWidth());
        lineEdit_rxsetfreq->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(lineEdit_rxsetfreq, 12, 1, 1, 1);

        textBrowser_terminal = new QTextBrowser(centralWidget);
        textBrowser_terminal->setObjectName("textBrowser_terminal");
        sizePolicy2.setHeightForWidth(textBrowser_terminal->sizePolicy().hasHeightForWidth());
        textBrowser_terminal->setSizePolicy(sizePolicy2);
        textBrowser_terminal->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(textBrowser_terminal, 0, 6, 15, 1);

        pushButton_register = new QPushButton(centralWidget);
        pushButton_register->setObjectName("pushButton_register");
        sizePolicy1.setHeightForWidth(pushButton_register->sizePolicy().hasHeightForWidth());
        pushButton_register->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_register, 0, 4, 1, 2);

        lineEdit_sipusername = new QLineEdit(centralWidget);
        lineEdit_sipusername->setObjectName("lineEdit_sipusername");
        sizePolicy2.setHeightForWidth(lineEdit_sipusername->sizePolicy().hasHeightForWidth());
        lineEdit_sipusername->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(lineEdit_sipusername, 1, 1, 1, 1);

        pushButton_sendPacket = new QPushButton(centralWidget);
        pushButton_sendPacket->setObjectName("pushButton_sendPacket");
        sizePolicy1.setHeightForWidth(pushButton_sendPacket->sizePolicy().hasHeightForWidth());
        pushButton_sendPacket->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_sendPacket, 7, 0, 1, 1);

        lineEdit_sippassword = new QLineEdit(centralWidget);
        lineEdit_sippassword->setObjectName("lineEdit_sippassword");
        sizePolicy2.setHeightForWidth(lineEdit_sippassword->sizePolicy().hasHeightForWidth());
        lineEdit_sippassword->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(lineEdit_sippassword, 2, 1, 1, 1);

        checkBox_tcp = new QCheckBox(centralWidget);
        checkBox_tcp->setObjectName("checkBox_tcp");
        sizePolicy1.setHeightForWidth(checkBox_tcp->sizePolicy().hasHeightForWidth());
        checkBox_tcp->setSizePolicy(sizePolicy1);
        checkBox_tcp->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    color: rgb(255,255,255);    \n"
"    background-color:rgb(32,32,32);       \n"
"}"));

        gridLayout->addWidget(checkBox_tcp, 7, 3, 1, 1);

        lbl_soundcard_title = new QLabel(centralWidget);
        lbl_soundcard_title->setObjectName("lbl_soundcard_title");
        sizePolicy.setHeightForWidth(lbl_soundcard_title->sizePolicy().hasHeightForWidth());
        lbl_soundcard_title->setSizePolicy(sizePolicy);
        lbl_soundcard_title->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    color: rgb(255,255,255);    \n"
"    background-color:rgb(32,32,32);       \n"
"}"));
        lbl_soundcard_title->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbl_soundcard_title, 4, 0, 1, 6);

        lineEdit_udp = new QLineEdit(centralWidget);
        lineEdit_udp->setObjectName("lineEdit_udp");
        sizePolicy2.setHeightForWidth(lineEdit_udp->sizePolicy().hasHeightForWidth());
        lineEdit_udp->setSizePolicy(sizePolicy2);
        lineEdit_udp->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(lineEdit_udp, 7, 1, 1, 1);

        checkBox_showPackets = new QCheckBox(centralWidget);
        checkBox_showPackets->setObjectName("checkBox_showPackets");
        sizePolicy1.setHeightForWidth(checkBox_showPackets->sizePolicy().hasHeightForWidth());
        checkBox_showPackets->setSizePolicy(sizePolicy1);
        checkBox_showPackets->setContextMenuPolicy(Qt::DefaultContextMenu);
        checkBox_showPackets->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    color: rgb(255,255,255);    \n"
"    background-color:rgb(32,32,32);       \n"
"}\n"
""));

        gridLayout->addWidget(checkBox_showPackets, 7, 5, 1, 1);

        pushButton_Rx = new QPushButton(centralWidget);
        pushButton_Rx->setObjectName("pushButton_Rx");
        sizePolicy1.setHeightForWidth(pushButton_Rx->sizePolicy().hasHeightForWidth());
        pushButton_Rx->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_Rx, 8, 0, 1, 1);

        lbl_port = new QLabel(centralWidget);
        lbl_port->setObjectName("lbl_port");
        sizePolicy.setHeightForWidth(lbl_port->sizePolicy().hasHeightForWidth());
        lbl_port->setSizePolicy(sizePolicy);
        lbl_port->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(lbl_port, 3, 4, 1, 2);

        lbl_bss_title1_7 = new QLabel(centralWidget);
        lbl_bss_title1_7->setObjectName("lbl_bss_title1_7");
        sizePolicy.setHeightForWidth(lbl_bss_title1_7->sizePolicy().hasHeightForWidth());
        lbl_bss_title1_7->setSizePolicy(sizePolicy);
        lbl_bss_title1_7->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    color: rgb(255,255,255);    \n"
"    background-color:rgb(32,32,32);       \n"
"}"));
        lbl_bss_title1_7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbl_bss_title1_7, 3, 0, 1, 1);

        checkBox_udp = new QCheckBox(centralWidget);
        checkBox_udp->setObjectName("checkBox_udp");
        sizePolicy1.setHeightForWidth(checkBox_udp->sizePolicy().hasHeightForWidth());
        checkBox_udp->setSizePolicy(sizePolicy1);
        checkBox_udp->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    color: rgb(255,255,255);    \n"
"    background-color:rgb(32,32,32);       \n"
"}"));
        checkBox_udp->setChecked(true);

        gridLayout->addWidget(checkBox_udp, 7, 4, 1, 1);

        pushButton_setFreq = new QPushButton(centralWidget);
        pushButton_setFreq->setObjectName("pushButton_setFreq");
        pushButton_setFreq->setEnabled(true);
        sizePolicy1.setHeightForWidth(pushButton_setFreq->sizePolicy().hasHeightForWidth());
        pushButton_setFreq->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_setFreq, 11, 0, 1, 1);

        pushButton_Vp = new QPushButton(centralWidget);
        pushButton_Vp->setObjectName("pushButton_Vp");
        sizePolicy1.setHeightForWidth(pushButton_Vp->sizePolicy().hasHeightForWidth());
        pushButton_Vp->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_Vp, 1, 3, 1, 1);

        lineEdit_mastersoundcard = new QLineEdit(centralWidget);
        lineEdit_mastersoundcard->setObjectName("lineEdit_mastersoundcard");
        sizePolicy2.setHeightForWidth(lineEdit_mastersoundcard->sizePolicy().hasHeightForWidth());
        lineEdit_mastersoundcard->setSizePolicy(sizePolicy2);
        lineEdit_mastersoundcard->setMaximumSize(QSize(30, 16777215));

        gridLayout->addWidget(lineEdit_mastersoundcard, 6, 1, 1, 1);

        checkBox_Auto = new QCheckBox(centralWidget);
        checkBox_Auto->setObjectName("checkBox_Auto");
        sizePolicy1.setHeightForWidth(checkBox_Auto->sizePolicy().hasHeightForWidth());
        checkBox_Auto->setSizePolicy(sizePolicy1);
        checkBox_Auto->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    color: rgb(255,255,255);    \n"
"    background-color:rgb(32,32,32);       \n"
"}"));

        gridLayout->addWidget(checkBox_Auto, 11, 1, 1, 1);

        pushButton_Tx = new QPushButton(centralWidget);
        pushButton_Tx->setObjectName("pushButton_Tx");
        sizePolicy1.setHeightForWidth(pushButton_Tx->sizePolicy().hasHeightForWidth());
        pushButton_Tx->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_Tx, 9, 0, 1, 1);

        lineEdit_txsetfreq = new QLineEdit(centralWidget);
        lineEdit_txsetfreq->setObjectName("lineEdit_txsetfreq");
        sizePolicy2.setHeightForWidth(lineEdit_txsetfreq->sizePolicy().hasHeightForWidth());
        lineEdit_txsetfreq->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(lineEdit_txsetfreq, 13, 1, 1, 1);

        lbl_setrxfreq = new QLabel(centralWidget);
        lbl_setrxfreq->setObjectName("lbl_setrxfreq");
        sizePolicy.setHeightForWidth(lbl_setrxfreq->sizePolicy().hasHeightForWidth());
        lbl_setrxfreq->setSizePolicy(sizePolicy);
        lbl_setrxfreq->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    color: rgb(255,255,255);    \n"
"    background-color:rgb(32,32,32);       \n"
"}"));
        lbl_setrxfreq->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbl_setrxfreq, 12, 0, 1, 1);

        pushButton_call = new QPushButton(centralWidget);
        pushButton_call->setObjectName("pushButton_call");
        sizePolicy1.setHeightForWidth(pushButton_call->sizePolicy().hasHeightForWidth());
        pushButton_call->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_call, 2, 4, 1, 2);

        lbl_bss_title1_2 = new QLabel(centralWidget);
        lbl_bss_title1_2->setObjectName("lbl_bss_title1_2");
        sizePolicy.setHeightForWidth(lbl_bss_title1_2->sizePolicy().hasHeightForWidth());
        lbl_bss_title1_2->setSizePolicy(sizePolicy);
        lbl_bss_title1_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    color: rgb(255,255,255);    \n"
"    background-color:rgb(32,32,32);       \n"
"}"));
        lbl_bss_title1_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbl_bss_title1_2, 0, 3, 1, 1);

        lbl_sipuser = new QLabel(centralWidget);
        lbl_sipuser->setObjectName("lbl_sipuser");
        sizePolicy.setHeightForWidth(lbl_sipuser->sizePolicy().hasHeightForWidth());
        lbl_sipuser->setSizePolicy(sizePolicy);
        lbl_sipuser->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    color: rgb(255,255,255);    \n"
"    background-color:rgb(32,32,32);       \n"
"}"));
        lbl_sipuser->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbl_sipuser, 1, 0, 1, 1);

        pushButton_exit = new QPushButton(centralWidget);
        pushButton_exit->setObjectName("pushButton_exit");
        sizePolicy1.setHeightForWidth(pushButton_exit->sizePolicy().hasHeightForWidth());
        pushButton_exit->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_exit, 1, 4, 1, 2);

        lcdNumber_Volume = new QLCDNumber(centralWidget);
        lcdNumber_Volume->setObjectName("lcdNumber_Volume");
        sizePolicy1.setHeightForWidth(lcdNumber_Volume->sizePolicy().hasHeightForWidth());
        lcdNumber_Volume->setSizePolicy(sizePolicy1);
        lcdNumber_Volume->setDigitCount(6);

        gridLayout->addWidget(lcdNumber_Volume, 3, 3, 1, 1);

        lbl_bss_title1 = new QLabel(centralWidget);
        lbl_bss_title1->setObjectName("lbl_bss_title1");
        sizePolicy.setHeightForWidth(lbl_bss_title1->sizePolicy().hasHeightForWidth());
        lbl_bss_title1->setSizePolicy(sizePolicy);
        lbl_bss_title1->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    color: rgb(255,255,255);    \n"
"    background-color:rgb(32,32,32);       \n"
"}"));
        lbl_bss_title1->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbl_bss_title1, 12, 2, 1, 1);

        lbl_ptt_status = new QLabel(centralWidget);
        lbl_ptt_status->setObjectName("lbl_ptt_status");
        sizePolicy.setHeightForWidth(lbl_ptt_status->sizePolicy().hasHeightForWidth());
        lbl_ptt_status->setSizePolicy(sizePolicy);
        lbl_ptt_status->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    color: rgb(255,255,255);    \n"
"    background-color:rgb(32,32,32);       \n"
"}"));
        lbl_ptt_status->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbl_ptt_status, 13, 2, 1, 1);

        lcdNumber_RxBss = new QLCDNumber(centralWidget);
        lcdNumber_RxBss->setObjectName("lcdNumber_RxBss");
        sizePolicy1.setHeightForWidth(lcdNumber_RxBss->sizePolicy().hasHeightForWidth());
        lcdNumber_RxBss->setSizePolicy(sizePolicy1);
        lcdNumber_RxBss->setDigitCount(6);

        gridLayout->addWidget(lcdNumber_RxBss, 12, 3, 1, 1);

        checkBox_pttset = new QCheckBox(centralWidget);
        checkBox_pttset->setObjectName("checkBox_pttset");
        sizePolicy1.setHeightForWidth(checkBox_pttset->sizePolicy().hasHeightForWidth());
        checkBox_pttset->setSizePolicy(sizePolicy1);
        checkBox_pttset->setContextMenuPolicy(Qt::DefaultContextMenu);
        checkBox_pttset->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    color: rgb(255,255,255);    \n"
"    background-color:rgb(32,32,32);       \n"
"}\n"
""));

        gridLayout->addWidget(checkBox_pttset, 13, 3, 1, 1);

        lcdNumber_RxFreq = new QLCDNumber(centralWidget);
        lcdNumber_RxFreq->setObjectName("lcdNumber_RxFreq");
        sizePolicy1.setHeightForWidth(lcdNumber_RxFreq->sizePolicy().hasHeightForWidth());
        lcdNumber_RxFreq->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(lcdNumber_RxFreq, 8, 4, 1, 2);

        lcdNumber_TxFreq = new QLCDNumber(centralWidget);
        lcdNumber_TxFreq->setObjectName("lcdNumber_TxFreq");
        sizePolicy1.setHeightForWidth(lcdNumber_TxFreq->sizePolicy().hasHeightForWidth());
        lcdNumber_TxFreq->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(lcdNumber_TxFreq, 9, 4, 1, 2);

        lineEdit_sipuritx = new QLineEdit(centralWidget);
        lineEdit_sipuritx->setObjectName("lineEdit_sipuritx");
        sizePolicy2.setHeightForWidth(lineEdit_sipuritx->sizePolicy().hasHeightForWidth());
        lineEdit_sipuritx->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(lineEdit_sipuritx, 9, 1, 1, 3);

        lineEdit_sipurirx = new QLineEdit(centralWidget);
        lineEdit_sipurirx->setObjectName("lineEdit_sipurirx");
        sizePolicy2.setHeightForWidth(lineEdit_sipurirx->sizePolicy().hasHeightForWidth());
        lineEdit_sipurirx->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(lineEdit_sipurirx, 8, 1, 1, 3);

        lcdNumber_time = new QLCDNumber(centralWidget);
        lcdNumber_time->setObjectName("lcdNumber_time");
        sizePolicy1.setHeightForWidth(lcdNumber_time->sizePolicy().hasHeightForWidth());
        lcdNumber_time->setSizePolicy(sizePolicy1);
        lcdNumber_time->setDigitCount(6);

        gridLayout->addWidget(lcdNumber_time, 11, 4, 1, 2);

        lineEdit_sipcall = new QLineEdit(centralWidget);
        lineEdit_sipcall->setObjectName("lineEdit_sipcall");
        sizePolicy2.setHeightForWidth(lineEdit_sipcall->sizePolicy().hasHeightForWidth());
        lineEdit_sipcall->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(lineEdit_sipcall, 3, 1, 1, 2);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        SoftPhone->setCentralWidget(centralWidget);

        retranslateUi(SoftPhone);

        QMetaObject::connectSlotsByName(SoftPhone);
    } // setupUi

    void retranslateUi(QMainWindow *SoftPhone)
    {
        SoftPhone->setWindowTitle(QCoreApplication::translate("SoftPhone", "SoftPhone", nullptr));
        lbl_settxfreq->setText(QCoreApplication::translate("SoftPhone", "Tx Freq:", nullptr));
        lbl_soundcardname->setText(QString());
        lbl_sipserver->setText(QCoreApplication::translate("SoftPhone", "Server Ip:", nullptr));
        pushButton_Vm->setText(QCoreApplication::translate("SoftPhone", "-", nullptr));
        lbl_sippassword->setText(QCoreApplication::translate("SoftPhone", "Password:", nullptr));
        pushButton_mastersoundcard->setText(QCoreApplication::translate("SoftPhone", "Set Master  Card", nullptr));
        pushButton_Sq->setText(QCoreApplication::translate("SoftPhone", "Squelch", nullptr));
        pushButton_register->setText(QCoreApplication::translate("SoftPhone", "Register", nullptr));
        pushButton_sendPacket->setText(QCoreApplication::translate("SoftPhone", " Send Packet", nullptr));
        checkBox_tcp->setText(QCoreApplication::translate("SoftPhone", "TCP", nullptr));
        lbl_soundcard_title->setText(QCoreApplication::translate("SoftPhone", "Master Sound Card", nullptr));
        lineEdit_udp->setText(QCoreApplication::translate("SoftPhone", "udp string", nullptr));
        checkBox_showPackets->setText(QCoreApplication::translate("SoftPhone", "Send Packets", nullptr));
        pushButton_Rx->setText(QCoreApplication::translate("SoftPhone", "Rx Call", nullptr));
        lbl_port->setText(QCoreApplication::translate("SoftPhone", "Port: 0", nullptr));
        lbl_bss_title1_7->setText(QCoreApplication::translate("SoftPhone", "Call Number:", nullptr));
        checkBox_udp->setText(QCoreApplication::translate("SoftPhone", "UDP", nullptr));
        pushButton_setFreq->setText(QCoreApplication::translate("SoftPhone", "Set Freq", nullptr));
        pushButton_Vp->setText(QCoreApplication::translate("SoftPhone", "+", nullptr));
        lineEdit_mastersoundcard->setText(QCoreApplication::translate("SoftPhone", "0", nullptr));
        checkBox_Auto->setText(QCoreApplication::translate("SoftPhone", "Auto Call", nullptr));
        pushButton_Tx->setText(QCoreApplication::translate("SoftPhone", "Tx Call", nullptr));
        lbl_setrxfreq->setText(QCoreApplication::translate("SoftPhone", "Rx Freq:", nullptr));
        pushButton_call->setText(QCoreApplication::translate("SoftPhone", "Call", nullptr));
        lbl_bss_title1_2->setText(QCoreApplication::translate("SoftPhone", "Volume", nullptr));
        lbl_sipuser->setText(QCoreApplication::translate("SoftPhone", "Username:", nullptr));
        pushButton_exit->setText(QCoreApplication::translate("SoftPhone", "Exit", nullptr));
        lbl_bss_title1->setText(QCoreApplication::translate("SoftPhone", "Bss", nullptr));
        lbl_ptt_status->setText(QCoreApplication::translate("SoftPhone", "Ptt Off", nullptr));
        checkBox_pttset->setText(QCoreApplication::translate("SoftPhone", "PTT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SoftPhone: public Ui_SoftPhone {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOFTPHONE_H
