#include "guitest.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	GUItest w;
	w.show();

	return a.exec();
}

