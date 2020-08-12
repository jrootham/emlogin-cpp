/*
 *		Mainline for EMail Login app
 */

#include <QApplication>
#include "view.h"

int main(int argc, char const *argv[])
{
	QApplication 	app(argc, argv);
	EMLoginDialogue	dialogue(&app);

    dialogue.resize(240, 200);
    dialogue.show();

	return app.exec();
}