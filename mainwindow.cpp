#include "mainwindow.h"
#include "ui_mainwindow.h"
#define MAX_X 800
#define MAX_Y 600

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(MAX_X+50,MAX_Y+70);
    scene = new QGraphicsScene;
    ui->graphicsView->setScene(scene);
    pixmap = new QGraphicsPixmapItem(
                   QPixmap("qrc:/C:/Users/opilane/Documents/Gakty/Resources/Resources/img/galaxy_starfield.png"));

    //pixmap background("Resources/img/galaxy_starfield.png");
    //QBrush background(QPixmap("qrc:/C:/Users/opilane/Documents/Gakty/Resources/Resources/img/galaxy_starfield.png"));

    QBrush background(QPixmap(":/img/Resources/img/galaxy_starfield.png"));

    scene->setBackgroundBrush(background);



    //scene->addItem(pixmap);
    //pixmap=setBackgroundRole("<img src =/C:/Users/opilane/Documents/Gakty/Resources/Resources/img/galaxy_starfield.png>")
    //QBrush background(":/Resources/img/galaxy_starfield.png");
drawAxes();
drawOrbit();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::drawAxes()

{
    QPen whiteBoldPen(Qt::white);
        whiteBoldPen.setStyle(Qt::DotLine);
        whiteBoldPen.setWidth(2);
            int half_X = MAX_X/2;
           int half_Y = MAX_Y/2;

           scene->addLine(0,0,half_X,0,whiteBoldPen);
           scene->addLine(0,0,0,half_Y,whiteBoldPen);
           scene->addLine(0,0,-half_X,0,whiteBoldPen);
           scene->addLine(0,0,0,-half_Y,whiteBoldPen);
           scene->addRect(-half_X, -half_Y, MAX_X, MAX_Y,whiteBoldPen);
           pixmap = new QGraphicsPixmapItem(
                          QPixmap(":/img/Resources/img/sun.png"));
           //QBrush sun(QPixmap(":/img/Resources/img/sun.png"));
           pixmap->setOffset(-100,-100);



           scene->addItem(pixmap);


}

void MainWindow::drawOrbit()
{
    QPen whiteBoldPen(Qt::white);
        whiteBoldPen.setStyle(Qt::DotLine);
        whiteBoldPen.setWidth(2);
        int r =0;
        int x=100;
        int y=290;
        int half_X = MAX_X/2;
        int half_Y = MAX_Y/2;


        //scene->addEllipse(,whiteBoldPen);

}
