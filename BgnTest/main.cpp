#include "bgntest.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	BgnTest w;
	w.show();
	return a.exec();
}
