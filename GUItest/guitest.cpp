#include "guitest.h"

GUItest::GUItest(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);

	//initializing internal parameters
	usr_name = "";
	diag_src_fnStr = "";
	diag_trg_fnStr = "";
	ntn_src_fnStr = "";
	ntn_trg_fnStr = "";
	fin_ntn_fnStr = "";
	fin_diag_fnStr = "";
	src_fmtType = myNULL;
	tgt_fmtType = myNULL;
}

GUItest::~GUItest()
{
	//Diagram2read.close();
}

void GUItest::grab_usrName() {
    usr_name = ui.usrName_txtEdit->text();
	qDebug() << "user name is: " << usr_name << " just raw";	
} // grab_usrName


void GUItest::grab_diag_src_fileName() {
    diag_src_fnStr = ui.diag_src_txtEdit->text();
	qDebug() << "diagram source or input filename is: " << diag_src_fnStr << "...";

} // grab_diag_src_fileName


/*
void GUItest::grab_diag_trg_fileName()  {
	diag_trg_fnStr = ui.diag_trg_txtEdit->text(); 
	qDebug() << "diagram target or input filename is: " << diag_trg_fnStr << "...";
} // grab_diag_trg_fileName
*/

void GUItest::grab_ntn_src_fileName()   {
	ntn_src_fnStr = ui.ntn_src_txtEdit->text();
	qDebug() << "notation source or input filename is: " << ntn_src_fnStr << "...";
} // grab_ntn_src_fileName


void GUItest::grab_ntn_trg_fileName()   {
	ntn_trg_fnStr = ui.ntn_trg_txtEdit->text();
	qDebug() << "ntn target or input filename is: " << ntn_trg_fnStr << "...";
} // grab_ntn_trg_fileName


void GUItest::grab_fin_ntn_fileName()   {
	fin_ntn_fnStr = ui.fin_ntn_txtEdit->text();
	qDebug() << "final ntn filename is: " << fin_ntn_fnStr << "...";
} // grab_fin_ntn_fileName


void GUItest::grab_fin_diag_fileName()   {
	fin_diag_fnStr = ui.fin_diag_txtEdit->text();
	qDebug() << "final diagram filename is: " << fin_diag_fnStr << "...";
} // grab_fin_diag_fileName




void GUItest::grab_sourceFormatType (int ft) {
	src_fmtType = grab_FormatType (ft);
	qDebug() << "source format type is: " << ft << "...";
} // grab_sourceFormatType


void GUItest::grab_targetFormatType (int ft) {
	tgt_fmtType = grab_FormatType (ft);
	qDebug() << "target format type is: " << ft << "...";

} // grab_targetFormatType



//stores the format type the user wants
//format type is a enum declared in this .h file
//myNULL, DOT, TrivialGF, GML, GraphML, GXL, XGMML, DGML
FormatType GUItest::grab_FormatType(int ft) {
	FormatType fmt = myNULL;
	switch (ft) {
	case 0: fmt = myNULL;
		break;
	case 1: fmt = DOT;
		break;
	case 2: fmt = TrivialGF;
		break;
	case 3: fmt = GML;
		break;
	case 4: fmt = GraphML;
		break;
	case 5: fmt = GXL;
		break;
	case 6: fmt = XGMML;
		break;
	case 7: fmt = DGML;
		break;
	default: qDebug("ERROR: unsupported diagram notation type");
	} //format type case
	
		qDebug() << "generic routine format type is: " << ft << "...";

	return fmt;
} // grab_FormatType

void GUItest::change_tab(void) {
		qDebug() << "change tab " << "...";
	//int pageindex = ui.tabWidget->indexOf(ui.t2tab);
	//ui.tabWidget->setCurrentIndex(pageindex);
} //change_tab