#include <iostream>
#include <string>

using namespace std;

//die Prototypen f�r die Funktionen

void dreher(string);
void asciikode(string);
void caesar(string);
void gartenzaun(string);

//die Funktion zum Umdrehen

void dreher(string kette)
{
	//die L�nge der urspr�nglichen Zeichenkette ermitteln
	int laenge;
	laenge = kette.length();
	//length liefert die echte L�nge
	//Daher muss 1 abgezogen werden
	laenge = laenge - 1;

	cout << "Verschluesselung durch Umdrehen" << endl;

	//die Zeichen von hinten nach vorne ausgeben

	for (int zaehler = laenge; zaehler >= 0; zaehler--)
	{
		cout << kette[zaehler];

	}
	cout << endl << endl;

}

//die Funktion zur nuermischen Verschl�sselung �ber die Ausgabe des ASCII-Wertes

void asciikode(string kette)
{
	//die L�nge der urspr�nglichen Zeichenkette ermitteln

	int laenge;
	laenge = kette.length();

	cout << "Verschluesselung durch ASCII-Ausgabe" << endl;

	// f�r jedes Zeichen den Ascii Wert ausgeben

	for (int index = 0; index < laenge; index++)
	{
		cout << static_cast<int>(kette[index]) << ' ';

	}

	cout << endl << endl;

}

// die Funktion zru C�sar-Verschl�sselung

void caesar(string kette)
{
	int laenge, verschiebung;

	laenge = kette.length();

	cout << "Caesar-Verschluesselung" << endl;

	// den Verschiebewer einlesen

	cout << "Bitte den Verschiebewert eingeben: ";
	cin >> verschiebung;

	// jedes Zeichen um den angegebnen Wert verschieben

	for (int zaehler = 0; zaehler < laenge; zaehler++)
	{
		cout << static_cast<char>(kette[zaehler] + verschiebung);

	}

	cout << endl << endl;

}

// die Funktion zur Gartenzaunverschl�sselung

void gartenzaun(string kette)
{
	string kodiert, teil1, teil2;

	int laenge;
	laenge = kette.length();

	//die Zeichen verteilen

	for (int zaehler = 0; zaehler < laenge; zaehler++)
	{
		//Zeichen mit einem geraden Index kommen in die
		//Zeichenkette teil1

		//die Z�hlung beginnt bei 0

		if (zaehler % 2 == 0)
		{
			teil1.push_back(kette[zaehler]);
			//bei einem ungeraden Index werden die Zeichn in
			//der Zeichenkette teil2 abgelegt
		}
		else teil2.push_back(kette[zaehler]);

	}
	//die beiden Zeichenketten wieder zusammenbauen

	kodiert = teil1 + teil2;

	// und ausgeben

	cout << "Gartenzaunverschluesselung" << endl;
	cout << "Die obere Haelfte ist " << teil1 << endl;
	cout << "Die untere Haelfte ist " << teil2 << endl;
	cout << "Das komplette Wort ist " << kodiert << endl;
	cout << endl << endl;


}

int main()
{
	string eingabe;

	cout << "Bitte geben Sie eine Zeichenkette ein: ";
	getline(cin, eingabe);

	cout << "Die urspruengliche Zeichenkette ist: " << eingabe << endl << endl;

	// die Verschluesselung durchf�hren

	dreher(eingabe);
	asciikode(eingabe);
	caesar(eingabe);
	gartenzaun(eingabe);

	return 0;


}
