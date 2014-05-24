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

#include <QtSql>
#if QT_VERSION >= QT_VERSION_CHECK(5,0,0)
	#include <QMessageBox>
#endif
#include <QtGui>

#include "DlgHauptfenster.h"
#include "Hilfsfunktionen.h"

DlgHauptfenster::DlgHauptfenster(QWidget *eltern) :	QMainWindow(eltern)
{
	setupUi(this);
	Hilfsfunktionen::FensterZentrieren(this);
	// Wenn kein SQlite da ist, braucht man nicht weitermachen
	if(!QSqlDatabase::isDriverAvailable("QSQLITE"))
	{
		Fehler(trUtf8("Das Qt SQLite Modul ist nicht verfügbar. Ohne dieses ist ein Start nicht möglich."));
		return;
	}
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
void DlgHauptfenster::Fehler(QString meldung)
{
	QMessageBox::critical(this,tr("Fehler"),meldung);
	exit(1);
}
