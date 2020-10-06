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
    if(ui->playButton->text() == "Play") {
        player->play();
        ui->playButton->setText("Pause");
    } else {
        player->pause();
        ui->playButton->setText("Play");
    }

}

void MainWindow::on_stopButton_clicked()
{
    player->stop();
}

void MainWindow::on_pauseButton_clicked() {

}

void MainWindow::on_stopButton_2_clicked()
{
    if (ui->stopButton_2->text() == "Mute") {
        player->setMuted(true);
        ui->stopButton_2->setText("Unmute");
    } else {
        player->setMuted(false);
        ui->stopButton_2->setText("Mute");
    }
}

void MainWindow::on_volumeSlider_sliderMoved(int position)
{
    player->setVolume(position);
}
