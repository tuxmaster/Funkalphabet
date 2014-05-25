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

#include <QtCore>
#include <QtSql>

#include "Datenmodell.h"

Datenmodell::Datenmodell(QObject *eltern) :QSqlQueryModel(eltern)
{
	QTimer::singleShot(0,this,SLOT(DB_Laden()));
}
void Datenmodell::NormGeaendert(Norm norm)
{
	QString Abfrage;
	switch(norm)
	{
		case DIN:
				Abfrage=ABFRAGEDIN;
			break;
		case ITU:
				Abfrage=ABFRAGEITU;
			break;
	}
	AbfrageStarten(Abfrage);
}
void Datenmodell::DB_Laden()
{
	QSqlDatabase DB=QSqlDatabase::addDatabase("QSQLITE",DBVERBINDUNG);
	DB.setDatabaseName(QString("%1%2").arg(DBPFAD).arg(DBDATEI));
	if(!DB.open())
	{
		FehlerAufgetreten(DB.lastError().text());
		return;
	}
	AbfrageStarten(ABFRAGEDIN);
	Q_EMIT Bereit();
}
void Datenmodell::FehlerAufgetreten(QString fehler)
{
	Q_EMIT Fehler(tr("Datenbankfehler:\r\n%1").arg(fehler));
}
void Datenmodell::AbfrageStarten(QString welche)
{
	QSqlDatabase DB=QSqlDatabase::database(DBVERBINDUNG,false);
	setQuery(welche,DB);
	if(lastError().isValid())
	{
		FehlerAufgetreten(lastError().text());
		return;
	}
	setHeaderData(0,Qt::Horizontal,tr("Zeichen"));
	setHeaderData(1,Qt::Horizontal,tr("Wort"));
}
QVariant Datenmodell::data(const QModelIndex &wofuer, int rolle) const
{
	//Ich übernehme nur die Textausrichtung für die erste Spalte
	if((rolle ==Qt::TextAlignmentRole) && (wofuer.column() ==0))
		return Qt::AlignCenter;
	return QSqlQueryModel::data(wofuer,rolle);
}
