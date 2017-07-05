/********************************************************************************
** Form generated from reading UI file 'maindialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINDIALOG_H
#define UI_MAINDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MainDialog
{
public:
    QVBoxLayout *mainVerticalLayout;
    QHBoxLayout *titleHorizontalLayout;
    QLabel *logo;
    QSpacerItem *horizontalSpacer;
    QGridLayout *controlsGridLayout;
    QLineEdit *imageEdit;
    QLabel *deviceLabel;
    QLabel *imageLabel;
    QComboBox *deviceList;
    QPushButton *imageSelectButton;
    QPushButton *deviceRefreshButton;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QProgressBar *progressBar;
    QSpacerItem *progressBarSpacer;
    QPushButton *clearButton;
    QPushButton *writeButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *MainDialog)
    {
        if (MainDialog->objectName().isEmpty())
            MainDialog->setObjectName(QString::fromUtf8("MainDialog"));
        MainDialog->resize(550, 155);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainDialog->sizePolicy().hasHeightForWidth());
        MainDialog->setSizePolicy(sizePolicy);
        MainDialog->setMinimumSize(QSize(0, 0));
        MainDialog->setMaximumSize(QSize(16777215, 16777215));
        MainDialog->setAcceptDrops(true);
        MainDialog->setWindowTitle(QString::fromUtf8("ROSA Image Writer"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/icon-rosa.svg"), QSize(), QIcon::Normal, QIcon::Off);
        MainDialog->setWindowIcon(icon);
        MainDialog->setWindowFlags(Qt::WindowCloseButtonHint);
        MainDialog->setSizeGripEnabled(true);
        mainVerticalLayout = new QVBoxLayout(MainDialog);
        mainVerticalLayout->setSpacing(6);
        mainVerticalLayout->setContentsMargins(11, 11, 11, 11);
        mainVerticalLayout->setObjectName(QString::fromUtf8("mainVerticalLayout"));
        mainVerticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        titleHorizontalLayout = new QHBoxLayout();
        titleHorizontalLayout->setSpacing(6);
        titleHorizontalLayout->setObjectName(QString::fromUtf8("titleHorizontalLayout"));
        titleHorizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        logo = new QLabel(MainDialog);
        logo->setObjectName(QString::fromUtf8("logo"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(logo->sizePolicy().hasHeightForWidth());
        logo->setSizePolicy(sizePolicy1);
        logo->setPixmap(QPixmap(QString::fromUtf8(":/res/logo-rosa.png")));
        logo->setMargin(0);

        titleHorizontalLayout->addWidget(logo);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        titleHorizontalLayout->addItem(horizontalSpacer);


        mainVerticalLayout->addLayout(titleHorizontalLayout);

        controlsGridLayout = new QGridLayout();
        controlsGridLayout->setSpacing(6);
        controlsGridLayout->setObjectName(QString::fromUtf8("controlsGridLayout"));
        imageEdit = new QLineEdit(MainDialog);
        imageEdit->setObjectName(QString::fromUtf8("imageEdit"));
        imageEdit->setAcceptDrops(false);
        imageEdit->setDragEnabled(true);
        imageEdit->setReadOnly(true);

        controlsGridLayout->addWidget(imageEdit, 0, 1, 1, 1);

        deviceLabel = new QLabel(MainDialog);
        deviceLabel->setObjectName(QString::fromUtf8("deviceLabel"));
        deviceLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        controlsGridLayout->addWidget(deviceLabel, 1, 0, 1, 1);

        imageLabel = new QLabel(MainDialog);
        imageLabel->setObjectName(QString::fromUtf8("imageLabel"));
        sizePolicy1.setHeightForWidth(imageLabel->sizePolicy().hasHeightForWidth());
        imageLabel->setSizePolicy(sizePolicy1);
        imageLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        controlsGridLayout->addWidget(imageLabel, 0, 0, 1, 1);

        deviceList = new QComboBox(MainDialog);
        deviceList->setObjectName(QString::fromUtf8("deviceList"));
        deviceList->setDuplicatesEnabled(true);

        controlsGridLayout->addWidget(deviceList, 1, 1, 1, 1);

        imageSelectButton = new QPushButton(MainDialog);
        imageSelectButton->setObjectName(QString::fromUtf8("imageSelectButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/res/icon-open.ico"), QSize(), QIcon::Normal, QIcon::Off);
        imageSelectButton->setIcon(icon1);

        controlsGridLayout->addWidget(imageSelectButton, 0, 2, 1, 1);

        deviceRefreshButton = new QPushButton(MainDialog);
        deviceRefreshButton->setObjectName(QString::fromUtf8("deviceRefreshButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/res/icon-refresh.ico"), QSize(), QIcon::Normal, QIcon::Off);
        deviceRefreshButton->setIcon(icon2);

        controlsGridLayout->addWidget(deviceRefreshButton, 1, 2, 1, 1);


        mainVerticalLayout->addLayout(controlsGridLayout);

        verticalSpacer = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        mainVerticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        progressBar = new QProgressBar(MainDialog);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(0);

        horizontalLayout->addWidget(progressBar);

        progressBarSpacer = new QSpacerItem(0, 10, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(progressBarSpacer);

        clearButton = new QPushButton(MainDialog);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        clearButton->setEnabled(false);
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(clearButton->sizePolicy().hasHeightForWidth());
        clearButton->setSizePolicy(sizePolicy2);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        clearButton->setFont(font);

        horizontalLayout->addWidget(clearButton);

        writeButton = new QPushButton(MainDialog);
        writeButton->setObjectName(QString::fromUtf8("writeButton"));
        writeButton->setEnabled(false);
        sizePolicy2.setHeightForWidth(writeButton->sizePolicy().hasHeightForWidth());
        writeButton->setSizePolicy(sizePolicy2);
        writeButton->setFont(font);

        horizontalLayout->addWidget(writeButton);

        cancelButton = new QPushButton(MainDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        sizePolicy2.setHeightForWidth(cancelButton->sizePolicy().hasHeightForWidth());
        cancelButton->setSizePolicy(sizePolicy2);
        cancelButton->setFont(font);

        horizontalLayout->addWidget(cancelButton);


        mainVerticalLayout->addLayout(horizontalLayout);

#ifndef QT_NO_SHORTCUT
        deviceLabel->setBuddy(deviceList);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(imageEdit, imageSelectButton);
        QWidget::setTabOrder(imageSelectButton, deviceList);

        retranslateUi(MainDialog);
        QObject::connect(imageSelectButton, SIGNAL(clicked()), MainDialog, SLOT(openImageFile()));
        QObject::connect(writeButton, SIGNAL(clicked()), MainDialog, SLOT(writeImageToDevice()));
        QObject::connect(deviceRefreshButton, SIGNAL(clicked()), MainDialog, SLOT(scheduleEnumFlashDevices()));
        QObject::connect(clearButton, SIGNAL(clicked()), MainDialog, SLOT(clearDevice()));

        QMetaObject::connectSlotsByName(MainDialog);
    } // setupUi

    void retranslateUi(QDialog *MainDialog)
    {
        logo->setText(QString());
        deviceLabel->setText(QApplication::translate("MainDialog", "&USB Device:", 0, QApplication::UnicodeUTF8));
        imageLabel->setText(QApplication::translate("MainDialog", "Image:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        imageSelectButton->setToolTip(QApplication::translate("MainDialog", "Open image file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        imageSelectButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        deviceRefreshButton->setToolTip(QApplication::translate("MainDialog", "Refresh the list", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        deviceRefreshButton->setText(QString());
        progressBar->setFormat(QApplication::translate("MainDialog", "%v / %m MB", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        clearButton->setToolTip(QApplication::translate("MainDialog", "Delete partitions and make all space available for storing data", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        clearButton->setText(QApplication::translate("MainDialog", "Clea&r", 0, QApplication::UnicodeUTF8));
        writeButton->setText(QApplication::translate("MainDialog", "&Write", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("MainDialog", "&Cancel", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(MainDialog);
    } // retranslateUi

};

namespace Ui {
    class MainDialog: public Ui_MainDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINDIALOG_H
