#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc.hpp>
#include <QDebug>
#include <iostream>
#include <fstream>

using namespace cv;

MainWindow::MainWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mainwindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow(){
    delete ui;
}
void MainWindow::readImage(){
    originalImg =cv::imread("C:/Users/Karl/Desktop/HS_CG/cg_ex4/duck.png");
    workingCopyImg = originalImg;
    paint(workingCopyImg);
}

int MainWindow::paint(Mat img){
    namedWindow("Image Window");
    imshow("Image Window",img);
    waitKey(0);
    return 0;
}

//-------------buttons listeners
void MainWindow::on_xDerivativeButton_clicked(){
    qDebug() << "clicked xDerivative";
    Mat x_der;
    Sobel(workingCopyImg, x_der, CV_16S, 1,0);
    double xMin, xMax;
    minMaxLoc(x_der, &xMin, &xMax);
    Mat result;
    x_der.convertTo(result, CV_8U, 255.0/(xMax - xMin), -xMin * 255.0/(xMax - xMin));
    paint(result);

}
//---
void MainWindow::on_yDerivativeButton_clicked(){
    qDebug() << "clicked yDerivative";
    Mat y_der;
    Sobel(workingCopyImg, y_der, CV_16S, 0,1);
    double yMin, yMax;
    minMaxLoc(y_der, &yMin, &yMax);
    Mat result;
    y_der.convertTo(result, CV_8U, 255.0/(yMax - yMin), -yMin * 255.0/(yMax - yMin));
    paint(result);
}
//---
void MainWindow::on_gradientButton_clicked(){
    qDebug() << "clicked gradientButton";
    Mat gradMadni, abs_gradMagni;
    cv::Sobel(workingCopyImg, gradMadni, CV_32F, 1, 0, 3, 1.0, 0, BORDER_DEFAULT);
    convertScaleAbs(gradMadni, abs_gradMagni);
    paint(abs_gradMagni);

}
//---
void MainWindow::on_histButton_clicked(){
    qDebug() << "clicked histButton";
//    ofstream myfile;
//    myfile.open ("C:/Users/Karl/Desktop/HS_CG/cg_ex4/histogram.txt");
//    for(int i = 0; i < originalImg.rows; i++){
//        for(int j = 0; j < originalImg.cols; j++){
//            Vec3b bgrPixel = originalImg.at<Vec3b>(i, j);
//            //qDebug() << bgrPixel.val[0];

//        }
//    }
}
//---
void MainWindow::on_resetButton_clicked(){
    qDebug() << "clicked resetButton";
    //workingCopyImg = originalImg;
    paint(originalImg);
}
//---
void MainWindow::on_blurButton_clicked(){
    qDebug() << "clicked blurButton";
    int iterations = ui->blurLevelBox->value();
    for(int i=0;i<iterations;i++){
        GaussianBlur(workingCopyImg, workingCopyImg, Size(3,3), 0, 0, BORDER_DEFAULT );
    }
    paint(workingCopyImg);
}
//---
void MainWindow::on_tresholdingButton_clicked(){
    qDebug() << "clicked tresholdingButton";
    QString  s;

    s = ui->tresholdingField->text();
    int value = s.toInt();
//    Mat tresImg = originalImg;
//    if(value !=0 && value !=NULL){
//        qDebug() <<"->" <<value;
//        for(int i = 0; i < workingCopyImg.rows; i++){
//            for(int j = 0; j < workingCopyImg.cols; j++){
//                Vec3b pixel = workingCopyImg.at<Vec3b>(i, j);
//                //qDebug() <<"->" <<pixel.val[0];
//                if(pixel.val[0]>value){
//                    pixel.val[0]=255;
//                    pixel.val[1]=255;
//                    pixel.val[2]=255;
//                    workingCopyImg.at<Vec3b>(i, j) = pixel;
//                    //qDebug() <<"->" <<pixel.val[0];
//                }else{
//                    pixel.val[0]=0;
//                    pixel.val[1]=0;
//                    pixel.val[2]=0;
//                    workingCopyImg.at<Vec3b>(i, j) = pixel;
//                }
//            }
//        }
//    }
    threshold( workingCopyImg, workingCopyImg, value, 255 ,0 );
    paint(workingCopyImg);
}
//---
void MainWindow::on_bbwErosionButton_clicked(){
    qDebug() << "clicked bbwErosionButton";
    Mat dilatedImg;
    Mat element = getStructuringElement(MORPH_RECT,Size(7,7),Point(3, 3));
    dilate(workingCopyImg, dilatedImg, element );
    paint(dilatedImg);
}
//---
void MainWindow::on_wbbErosionButton_clicked(){
    qDebug() << "clicked wbbErosionButton";
    Mat erodedImg;
    Mat element = getStructuringElement(MORPH_RECT, Size(7,7),Point(3,3));
    erode(workingCopyImg, erodedImg, element);
    paint(erodedImg);

}
