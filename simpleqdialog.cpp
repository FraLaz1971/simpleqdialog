/**
* Qt4.1 Simple dialog example
*
*	original author: Jan Koci
*	http://kengine.sourceforge.net/tutorial/
* 06.06.13 - First version
* 
* updated by Francesco lazzarotto in June 2020
* https://github.com/FraLaz1971
* 2020-06-16 - updated version
*/

#include "simpleqdialog.h"

CSimpleDialog::CSimpleDialog(QWidget *parent): QDialog(parent)
{
	setupUi(this);
	// Set label text
	m_pLabel->setText("dialog initialized!");
	// Set signal and slot for "OK Button"
	connect(m_pOkButton, SIGNAL(clicked()), this, SLOT(OkButtonClicked()));
}

void CSimpleDialog::OkButtonClicked()
{
	m_pLabel->setText("OK girl: Button clicked!");
}
