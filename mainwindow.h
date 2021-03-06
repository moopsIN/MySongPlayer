#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_playButton_clicked();

    void on_pauseButton_clicked();

    void on_stopButton_clicked();

    void on_stopButton_2_clicked();

    void on_volumeSlider_sliderMoved(int position);

    void on_seekBar_sliderMoved(int position);

    void updateSeekBar(qint64);

private:
    Ui::MainWindow *ui;
    QMediaPlayer *player;
};
#endif // MAINWINDOW_H
