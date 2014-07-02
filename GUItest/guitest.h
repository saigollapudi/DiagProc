#pragma once
#ifndef GUITEST_H
#define GUITEST_H

#include <QtGui/QMainWindow>
#include "ui_guitest.h"
#include <iostream>
#include <qdebug.h>
#include <fstream>
#include <sstream>
#include <string>

//#include <Qstring>
//#include <Qfile>
//#include <QTextStream>


//these are some popular graph exchange formats & graph notations
enum FormatType {myNULL, DOT, TrivialGF, GML, GraphML, GXL, XGMML, DGML};


class GUItest : public QMainWindow
{
	Q_OBJECT

public:
	GUItest(QWidget *parent = 0, Qt::WFlags flags = 0);
	~GUItest();

private:
	Ui::GUItestClass ui;

	//parameters to store the user settings 
	QString diag_src_fnStr, diag_trg_fnStr, ntn_src_fnStr, ntn_trg_fnStr, fin_ntn_fnStr, fin_diag_fnStr;
	QString usr_name;
	FormatType src_fmtType, tgt_fmtType;

	//internal routines
	FormatType grab_FormatType(int);

	private slots:
		void grab_usrName();
		void grab_diag_src_fileName();
		//void grab_diag_trg_fileName();
		void grab_ntn_src_fileName();
		void grab_ntn_trg_fileName();
		void grab_fin_ntn_fileName();
		void grab_fin_diag_fileName();
		void grab_sourceFormatType (int);
		void grab_targetFormatType (int);
		void change_tab(void);

};

#endif // GUITEST_H
