/*
 *	commonView
 */

#ifndef COMMONVIEW_H_INCLUDED
#define COMMONVIEW_H_INCLUDED

#include <QDialog>
#include <QLabel>
#include <QWidget>
#include <QPushButton>

class CommonDialogue QDialog
{
protected:
	CommonDialogue();
	~CommonDialogue();
	
	void horizontal(QWidget *widget);
	void horizontalPair(QWidget *widget1, QWidget *widget2);
};

class ButtonDialogue CommonDialogue
{
public:
	ButtonDialogue();
	~ButtonDialogue();

protected:
	QPushButton *makeButton(QString *text);
};

class DataDialogue CommonDialogue
{
public:
	DataDialogue();
	~DataDialogue();
	
protected:
	void makeOkCancel();	
};

class PlainLabel QLabel
{
public:
	PlainLabel();
	~PlainLabel();	
};


#endif
