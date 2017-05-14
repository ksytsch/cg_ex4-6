#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QDebug>
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc.hpp>

namespace Ui {
class mainwindow;
}

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void readImage();
    int paint(cv::Mat img);

private slots:
    void on_xDerivativeButton_clicked();
    void on_yDerivativeButton_clicked();
    void on_gradientButton_clicked();
    void on_histButton_clicked();
    void on_resetButton_clicked();
    void on_blurButton_clicked();
    void on_tresholdingButton_clicked();
    void on_bbwErosionButton_clicked();
    void on_wbbErosionButton_clicked();



private:
    Ui::mainwindow *ui;
    cv::Mat originalImg;
    cv::Mat workingCopyImg;


};

#endif // MAINWINDOW_H
