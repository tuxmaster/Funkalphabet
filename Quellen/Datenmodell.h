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

#ifndef DATENMODELL_H
#define DATENMODELL_H

#include <QSqlQueryModel>
#include "Vorgaben.h"

class Datenmodell : public QSqlQueryModel
{
		Q_OBJECT
	public:
		explicit		Datenmodell(QObject *eltern = Q_NULLPTR);
		void			DB_Laden();
		QVariant		data(const QModelIndex &wofuer, int rolle) const Q_DECL_OVERRIDE;

	public Q_SLOTS:
		void			NormGeaendert(Norm norm);

	Q_SIGNALS:
		void			Fehler(QString meldung);

	private:
		void			FehlerAufgetreten(QString fehler);
		void			AbfrageStarten(QString welche);
};

#endif // DATENMODELL_H
