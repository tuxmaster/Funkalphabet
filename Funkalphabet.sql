PRAGMA foreign_keys=OFF;
BEGIN TRANSACTION;
CREATE TABLE Funkalphabet( Buchstabe text UNIQUE PRIMARY KEY, DIN text, Nato text);
INSERT INTO "Funkalphabet" VALUES('A','Anton','Alfa');
INSERT INTO "Funkalphabet" VALUES('Ä','Ärger','Alfa-Echo');
INSERT INTO "Funkalphabet" VALUES('B','Berta','Bravo');
INSERT INTO "Funkalphabet" VALUES('C','Cäsar','Charlie');
INSERT INTO "Funkalphabet" VALUES('Ch','Charlotte','Charlie-Hotel');
INSERT INTO "Funkalphabet" VALUES('D','Dora','Delta');
INSERT INTO "Funkalphabet" VALUES('E','Emil','Echo');
INSERT INTO "Funkalphabet" VALUES('F','Friedrich','Foxtrot');
INSERT INTO "Funkalphabet" VALUES('G','Gustav','Golf');
INSERT INTO "Funkalphabet" VALUES('H','Heinrich','Hotel');
INSERT INTO "Funkalphabet" VALUES('I','Ida','India');
INSERT INTO "Funkalphabet" VALUES('J','Julius','Juliett');
INSERT INTO "Funkalphabet" VALUES('K','Kaufmann','Kilo');
INSERT INTO "Funkalphabet" VALUES('L','Ludwig','Lima');
INSERT INTO "Funkalphabet" VALUES('M','Martha','Mike');
INSERT INTO "Funkalphabet" VALUES('N','Nordpol','November');
INSERT INTO "Funkalphabet" VALUES('O','Otto','Oscar');
INSERT INTO "Funkalphabet" VALUES('Ö','Ökonom','Oscar-Echo');
INSERT INTO "Funkalphabet" VALUES('P','Paula','Papa');
INSERT INTO "Funkalphabet" VALUES('Q','Quelle','Quebec');
INSERT INTO "Funkalphabet" VALUES('R','Richard','Romeo');
INSERT INTO "Funkalphabet" VALUES('S','Samuel','Sierra');
INSERT INTO "Funkalphabet" VALUES('Sch','Schule','');
INSERT INTO "Funkalphabet" VALUES('ß','Eszett','Sierra-Sierra');
INSERT INTO "Funkalphabet" VALUES('T','Theodor','Tango');
INSERT INTO "Funkalphabet" VALUES('U','Ulrich','Uniform');
INSERT INTO "Funkalphabet" VALUES('Ü','Übermut','Uniform-Echo');
INSERT INTO "Funkalphabet" VALUES('V','Viktor','Victor');
INSERT INTO "Funkalphabet" VALUES('W','Wilhlem','Whiskey');
INSERT INTO "Funkalphabet" VALUES('X','Xanthippe','X-Ray');
INSERT INTO "Funkalphabet" VALUES('Y','Ypsilon','Yankee');
INSERT INTO "Funkalphabet" VALUES('Z','Zacharias','Zulu');
COMMIT;

