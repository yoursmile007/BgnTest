#ifndef BGNTEST_H
#define BGNTEST_H

#include <QtWidgets/QMainWindow>
#include "ui_bgntest.h"

class BgnTest : public QMainWindow
{
	Q_OBJECT

public:
	BgnTest(QWidget *parent = 0);
	~BgnTest();

private:
	Ui::BgnTestClass ui;
};

#endif // BGNTEST_H
