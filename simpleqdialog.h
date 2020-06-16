/**
* Qt4.1 Simple dialog example
*
*	author: Jan Koci
*	http://kengine.sourceforge.net/tutorial/
* 06.06.13 - First version
* 
* updated by Francesco lazzarotto in June 2020
* https://github.com/FraLaz1971
* 2020-06-16 - updated version
*/

#pragma once

#include "ui_simpleqdialog.h"

class CSimpleDialog : public QDialog, private Ui::CSimpleDialog
{
		Q_OBJECT
	
	private slots:

		void OkButtonClicked();
	public:
		CSimpleDialog(QWidget *parent = 0);
		~CSimpleDialog(){}
};
