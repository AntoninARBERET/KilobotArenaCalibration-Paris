/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "clicksignalqlabel.h"
#include "dragzoomqlabel.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *previewTabs;
    QWidget *cameraimages;
    QLabel *im1;
    QLabel *im2;
    QLabel *im4;
    QLabel *im3;
    QFrame *line;
    QPushButton *load_images;
    QPushButton *cap_images;
    QPushButton *save_images;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QWidget *roi;
    QLabel *im2_roi;
    QLabel *im4_roi;
    QLabel *im1_roi;
    QLabel *im3_roi;
    QFrame *line_2;
    QPushButton *extract_features;
    QSlider *fd_thresh_slider;
    QLabel *fd_thresh_label;
    QLabel *label_2;
    QLabel *label_3;
    QSlider *matcher_conf_slider;
    QLabel *match_conf_label;
    QWidget *stitched;
    clickSignalQLabel *result;
    QFrame *line_3;
    QPushButton *stitch_images;
    QPushButton *reset_corners;
    QWidget *squared;
    dragZoomQLabel *result_final;
    QFrame *line_4;
    QPushButton *square_arena;
    QPushButton *save_calib;
    QLabel *error_label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(885, 705);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        previewTabs = new QTabWidget(centralWidget);
        previewTabs->setObjectName(QStringLiteral("previewTabs"));
        previewTabs->setGeometry(QRect(10, 10, 871, 600));
        previewTabs->setTabPosition(QTabWidget::West);
        previewTabs->setTabShape(QTabWidget::Triangular);
        cameraimages = new QWidget();
        cameraimages->setObjectName(QStringLiteral("cameraimages"));
        im1 = new QLabel(cameraimages);
        im1->setObjectName(QStringLiteral("im1"));
        im1->setGeometry(QRect(0, 0, 300, 300));
        im2 = new QLabel(cameraimages);
        im2->setObjectName(QStringLiteral("im2"));
        im2->setGeometry(QRect(300, 0, 300, 300));
        im4 = new QLabel(cameraimages);
        im4->setObjectName(QStringLiteral("im4"));
        im4->setGeometry(QRect(300, 300, 300, 300));
        im3 = new QLabel(cameraimages);
        im3->setObjectName(QStringLiteral("im3"));
        im3->setGeometry(QRect(0, 300, 300, 300));
        line = new QFrame(cameraimages);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(600, 10, 16, 571));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        load_images = new QPushButton(cameraimages);
        load_images->setObjectName(QStringLiteral("load_images"));
        load_images->setGeometry(QRect(620, 10, 211, 32));
        cap_images = new QPushButton(cameraimages);
        cap_images->setObjectName(QStringLiteral("cap_images"));
        cap_images->setGeometry(QRect(620, 50, 211, 32));
        save_images = new QPushButton(cameraimages);
        save_images->setObjectName(QStringLiteral("save_images"));
        save_images->setGeometry(QRect(620, 90, 211, 32));
        lineEdit = new QLineEdit(cameraimages);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(620, 150, 211, 31));
        label_4 = new QLabel(cameraimages);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(620, 130, 191, 20));
        previewTabs->addTab(cameraimages, QString());
        roi = new QWidget();
        roi->setObjectName(QStringLiteral("roi"));
        im2_roi = new QLabel(roi);
        im2_roi->setObjectName(QStringLiteral("im2_roi"));
        im2_roi->setGeometry(QRect(300, 0, 300, 300));
        im4_roi = new QLabel(roi);
        im4_roi->setObjectName(QStringLiteral("im4_roi"));
        im4_roi->setGeometry(QRect(300, 300, 300, 300));
        im1_roi = new QLabel(roi);
        im1_roi->setObjectName(QStringLiteral("im1_roi"));
        im1_roi->setGeometry(QRect(0, 0, 300, 300));
        im3_roi = new QLabel(roi);
        im3_roi->setObjectName(QStringLiteral("im3_roi"));
        im3_roi->setGeometry(QRect(0, 300, 300, 300));
        line_2 = new QFrame(roi);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(600, 10, 16, 571));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        extract_features = new QPushButton(roi);
        extract_features->setObjectName(QStringLiteral("extract_features"));
        extract_features->setGeometry(QRect(620, 120, 211, 32));
        fd_thresh_slider = new QSlider(roi);
        fd_thresh_slider->setObjectName(QStringLiteral("fd_thresh_slider"));
        fd_thresh_slider->setGeometry(QRect(629, 40, 171, 22));
        fd_thresh_slider->setMinimum(5);
        fd_thresh_slider->setMaximum(100);
        fd_thresh_slider->setSingleStep(1);
        fd_thresh_slider->setValue(10);
        fd_thresh_slider->setOrientation(Qt::Horizontal);
        fd_thresh_label = new QLabel(roi);
        fd_thresh_label->setObjectName(QStringLiteral("fd_thresh_label"));
        fd_thresh_label->setGeometry(QRect(810, 40, 31, 16));
        label_2 = new QLabel(roi);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(630, 20, 191, 20));
        label_3 = new QLabel(roi);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(630, 70, 191, 20));
        matcher_conf_slider = new QSlider(roi);
        matcher_conf_slider->setObjectName(QStringLiteral("matcher_conf_slider"));
        matcher_conf_slider->setGeometry(QRect(630, 90, 171, 22));
        matcher_conf_slider->setMinimum(20);
        matcher_conf_slider->setMaximum(100);
        matcher_conf_slider->setSingleStep(1);
        matcher_conf_slider->setValue(60);
        matcher_conf_slider->setOrientation(Qt::Horizontal);
        match_conf_label = new QLabel(roi);
        match_conf_label->setObjectName(QStringLiteral("match_conf_label"));
        match_conf_label->setGeometry(QRect(810, 90, 31, 16));
        previewTabs->addTab(roi, QString());
        stitched = new QWidget();
        stitched->setObjectName(QStringLiteral("stitched"));
        result = new clickSignalQLabel(stitched);
        result->setObjectName(QStringLiteral("result"));
        result->setGeometry(QRect(0, 0, 600, 600));
        line_3 = new QFrame(stitched);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(600, 10, 16, 571));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        stitch_images = new QPushButton(stitched);
        stitch_images->setObjectName(QStringLiteral("stitch_images"));
        stitch_images->setGeometry(QRect(620, 10, 211, 32));
        reset_corners = new QPushButton(stitched);
        reset_corners->setObjectName(QStringLiteral("reset_corners"));
        reset_corners->setGeometry(QRect(620, 50, 211, 32));
        previewTabs->addTab(stitched, QString());
        squared = new QWidget();
        squared->setObjectName(QStringLiteral("squared"));
        result_final = new dragZoomQLabel(squared);
        result_final->setObjectName(QStringLiteral("result_final"));
        result_final->setGeometry(QRect(0, 0, 600, 600));
        line_4 = new QFrame(squared);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(600, 10, 16, 571));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        square_arena = new QPushButton(squared);
        square_arena->setObjectName(QStringLiteral("square_arena"));
        square_arena->setGeometry(QRect(620, 10, 211, 32));
        save_calib = new QPushButton(squared);
        save_calib->setObjectName(QStringLiteral("save_calib"));
        save_calib->setGeometry(QRect(620, 50, 211, 32));
        previewTabs->addTab(squared, QString());
        error_label = new QLabel(centralWidget);
        error_label->setObjectName(QStringLiteral("error_label"));
        error_label->setGeometry(QRect(30, 615, 851, 31));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        error_label->setFont(font);
        error_label->setTextFormat(Qt::PlainText);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 885, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(fd_thresh_slider, SIGNAL(sliderMoved(int)), fd_thresh_label, SLOT(setNum(int)));

        previewTabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        im1->setText(QString());
        im2->setText(QString());
        im4->setText(QString());
        im3->setText(QString());
        load_images->setText(QApplication::translate("MainWindow", "Load Calibration Images", 0));
        cap_images->setText(QApplication::translate("MainWindow", "Capture Calibration Images", 0));
        save_images->setText(QApplication::translate("MainWindow", "Save Calibration Images", 0));
        lineEdit->setInputMask(QString());
        lineEdit->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "Images name prefix:", 0));
        previewTabs->setTabText(previewTabs->indexOf(cameraimages), QApplication::translate("MainWindow", "Camera images", 0));
        im2_roi->setText(QString());
        im4_roi->setText(QString());
        im1_roi->setText(QString());
        im3_roi->setText(QString());
        extract_features->setText(QApplication::translate("MainWindow", "Extract Features", 0));
        fd_thresh_label->setText(QApplication::translate("MainWindow", "10", 0));
        label_2->setText(QApplication::translate("MainWindow", "Feature detector threshold", 0));
        label_3->setText(QApplication::translate("MainWindow", "Matcher confidence limit", 0));
        match_conf_label->setText(QApplication::translate("MainWindow", "0.6", 0));
        previewTabs->setTabText(previewTabs->indexOf(roi), QApplication::translate("MainWindow", "Extract features", 0));
        result->setText(QString());
        stitch_images->setText(QApplication::translate("MainWindow", "Stitch images", 0));
        reset_corners->setText(QApplication::translate("MainWindow", "Reset corners", 0));
        previewTabs->setTabText(previewTabs->indexOf(stitched), QApplication::translate("MainWindow", "Stitched image", 0));
        result_final->setText(QString());
        square_arena->setText(QApplication::translate("MainWindow", "Square arena", 0));
        save_calib->setText(QApplication::translate("MainWindow", "Save calibration", 0));
        previewTabs->setTabText(previewTabs->indexOf(squared), QApplication::translate("MainWindow", "Squared", 0));
        error_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
