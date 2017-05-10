QT+= core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET=ocv1
CONFIG+=console
CONFIG-=app_bundle

TEMPLATE=app
INCLUDEPATH+=C:/Lib/opencv-release/include
LIBS+=-LC:/Lib/opencv-release/lib -lopencv_core320 \
                            -lopencv_imgcodecs320 \
                            -lopencv_highgui320  \
                            -lopencv_imgproc320 \
                            -lOpengl32
SOURCES+=main.cpp \
    mainwindow.cpp
FORMS    += mainwindow.ui \
    mainwindow.ui

HEADERS += \
    mainwindow.h
