#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ffmpeg.h"

class ffmpeg : public QMainWindow
{
	Q_OBJECT

public slots:
	void openFloder_btn_Clicked();
	void copy_btn_Clicked();

public:
	ffmpeg(QWidget *parent = Q_NULLPTR);

private:
	Ui::ffmpegClass ui;
};
