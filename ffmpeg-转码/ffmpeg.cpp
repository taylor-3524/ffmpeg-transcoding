#include "ffmpeg.h"
#include <QClipboard>
#pragma execution_character_set("UTF-8")		//��ֹ����
#include<QFile>
#include"qfiledialog.h"
#include <QDebug>
#include <qtextcodec.h>
ffmpeg::ffmpeg(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.openFloder_btn, SIGNAL(clicked()), this, SLOT(openFloder_btn_Clicked()));
	connect(ui.copy_btn, SIGNAL(clicked()), this, SLOT(copy_btn_Clicked()));
}

void ffmpeg::openFloder_btn_Clicked() {

	QString filePath;     //�ļ���·��
	filePath = QFileDialog::getExistingDirectory(this, "ѡ��Ŀ¼", "./", QFileDialog::ShowDirsOnly);
	ui.Path_text->setText(filePath);

	//��ʼ��ȡ�ļ����µ������ļ�
	QDir *dir = new QDir(filePath);
	QStringList filter;
	QList<QFileInfo> *fileInfo = new QList<QFileInfo>(dir->entryInfoList(filter));

	ui.cmd_text->setText("");      //������

	for (int i = 2; i < fileInfo->count(); i++) {
		QString fileName = fileInfo->at(i).fileName();
		QChar *tmp = fileName.data();
		QString ss = QString(tmp);
		
		if (ss.indexOf(".mp4") == -1) {
			QString unss = ss.mid(0, ss.indexOf("."));
			ss = "ffmpeg -i \".\\" + ss + "\" -vcodec h264 -threads 4 \".\\" + unss + ".mp4\"";
			qDebug()<<ss;
			ui.cmd_text->append((ss));

		}
	}

}


void ffmpeg::copy_btn_Clicked() {
	//�������а�ָ��
	QString link = ui.cmd_text->toPlainText();
	QClipboard *board = QApplication::clipboard();
	board->setText(link);
	ui.cmd_text->append("�Ѹ��Ƶ�������");
}
