/**
* Qt4.1 Simple dialog example
*
*	author: Jan Koci
*	http://kengine.sourceforge.net/tutorial/
*
* 06.06.13 - First version
* updated by Francesco lazzarotto in June 2020
* https://github.com/FraLaz1971
* 2020-06-16 - updated version
*/

#include "ui_simpleqdialog.h"
#include "simpleqdialog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	QDialog *window = new CSimpleDialog;
	window->show();
	return app.exec();
}
