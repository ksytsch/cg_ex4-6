#include "mainwindow.h"
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc.hpp>
#include <QApplication>

using namespace cv;
//y-gradient
//    Mat y_der, abs_y_der;
//    Sobel(image, y_der, CV_16S, 0, 1, 3, 1.0, 0, BORDER_DEFAULT);
//    convertScaleAbs(y_der, abs_y_der);
int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    w.readImage();

//    //read image
//    Mat image=cv::imread("C:/Users/Karl/Desktop/HS_CG/cg_ex4/duck.png");
//    //create window
//    namedWindow("Image Window");
//    //apply blur - smoothing image
//    for(int i=0;i<20;i++){
//        GaussianBlur( image, image, Size(3,3), 0, 0, BORDER_DEFAULT );

//    }


//    //x
//    Mat x_der;
//    Sobel(image, x_der, CV_16S, 1,0);
//    double xMin, xMax;
//    minMaxLoc(x_der, &xMin, &xMax);
//    Mat xPaint;
//    x_der.convertTo(xPaint, CV_8U, 255.0/(xMax - xMin), -xMin * 255.0/(xMax - xMin));

//    //y
//    Mat y_der;
//    Sobel(image, y_der, CV_16S, 0,1);
//    double yMin, yMax;
//    minMaxLoc(y_der, &yMin, &yMax);
//    Mat yPaint;
//    y_der.convertTo(yPaint, CV_8U, 255.0/(yMax - yMin), -yMin * 255.0/(yMax - yMin));

//    //gradient magnitude
//    Mat gradMadni, abs_gradMagni;
//    cv::Sobel(image, gradMadni, CV_32F, 1, 0, 3, 1.0, 0, BORDER_DEFAULT);
//    convertScaleAbs(gradMadni, abs_gradMagni);

//    imshow("Image Window",image);
//    waitKey(0);
//    return 0;

}
