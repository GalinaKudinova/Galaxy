#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QDebug>

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>

#include <QGraphicsItemGroup>

#include <QTimer>
#include <QtMath>

#include <QPixmap>
#include <QBrush>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void drawAxes();
    void drawOrbit();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
     QTimer *timer;
     QGraphicsPixmapItem *pixmap;
     QPixmap *background;

};

#endif // MAINWINDOW_H
