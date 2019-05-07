#-------------------------------------------------
#
# Project created by QtCreator 2016-10-04T15:07:46
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = KilobotArenaSetup
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    calibratearena.cpp \
    clicksignalqlabel.cpp \
    dragzoomqlabel.cpp

HEADERS  += mainwindow.h \
    calibratearena.h \
    clicksignalqlabel.h \
    dragzoomqlabel.h

FORMS    += mainwindow.ui

QMAKE_CXXFLAGS += -std=c++11
CONFIG += c++11

linux {

# OpenCV library setup for linux


INCLUDEPATH += /opt/local/include/
LIBS += -L/opt/local/lib \
        -lopencv_core \
        -lopencv_imgproc \
        -lopencv_features2d\
        -lopencv_highgui\
        -lopencv_calib3d\
        -lopencv_objdetect\
        -lopencv_photo\
        -lopencv_stitching\
        -lopencv_flann\
        -lopencv_ml \
        -lopencv_objdetect  \
        -lopencv_photo \
        -lopencv_stitching \
        -lopencv_superres \
        -lopencv_video \
        -lopencv_videostab \
        -lopencv_videoio \
        -lopencv_imgcodecs \
        -lz

}

macx {

# Change libstdc++ to C++2011 for OpenCV
CONFIG += c++11

# OpenCV library setup for OSX
INCLUDEPATH += /usr/local/include
LIBS += -L/usr/local/lib \
     -lopencv_core \
     -lopencv_imgproc \
     -lopencv_features2d\
     -lopencv_highgui\
     -lopencv_contrib\
     -lopencv_calib3d\
     -lopencv_objdetect\
     -lopencv_photo\
     -lopencv_stitching\
     -lopencv_flann\
     -lopencv_nonfree\
     -lz

# OpenCV 3rd party libraries
LIBS += /usr/local/share/OpenCV/3rdparty/lib/liblibjpeg.a
LIBS += /usr/local/share/OpenCV/3rdparty/lib/liblibpng.a
LIBS += /usr/local/share/OpenCV/3rdparty/lib/liblibtiff.a
LIBS += /usr/local/share/OpenCV/3rdparty/lib/liblibjasper.a
LIBS += /usr/local/share/OpenCV/3rdparty/lib/libIlmImf.a

# Required for OpenCV
LIBS += -framework AppKit

}
