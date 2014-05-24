/*
	Copyright (C) 2014 Frank Büttner frank-buettner@gmx.net

	This program is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program.  If not, see <http://www.gnu.org/licenses/>
*/

#include "DlgHauptfenster.h"
#include "Hilfsfunktionen.h"

DlgHauptfenster::DlgHauptfenster(QWidget *eltern) :	QMainWindow(eltern)
{
	setupUi(this);
	Hilfsfunktionen::FensterZentrieren(this);
}

void DlgHauptfenster::changeEvent(QEvent *ereignis)
{
	QMainWindow::changeEvent(ereignis);
	switch (ereignis->type())
	{
		case QEvent::LanguageChange:
				retranslateUi(this);
				break;
		default:
			break;
	}
}
