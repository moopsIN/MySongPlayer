#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMediaPlayer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("D:/Moops/Tutorials/Qt/MySongPlayer/MySongPlayer/music.mp3"));
    player->setVolume(60);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_playButton_clicked()
{
    player->play();
}

void MainWindow::on_pauseButton_clicked()
{
    player->pause();
}

void MainWindow::on_stopButton_clicked()
{
    player->stop();
}
