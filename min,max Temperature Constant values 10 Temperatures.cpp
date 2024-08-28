#include <iostream>

using namespace std;		//Namensraum

int main()	//Hauptfunktion
{
    const int SIZE = 10;	//Konstante Variable erstellen
    double temperatures[SIZE];	//Die konstante Variable in dem Array abrufen
    
	cout<<"--------------------------------------------------------------------------------------------------------\n";
	cout<< "                            Wilkommen bei dem Temperaturrechner\n";
	cout<<"--------------------------------------------------------------------------------------------------------\n";
	cout<< "Ich kann Ihnen anhand Ihrer 10 Temperaturen die Maximale, Minimale und die Durchschnittstemperatur berechnen.\n";
	cout <<"\n";
	cout<<"				Bitte nur Zahleneingaben Taetigen!					";
	cout <<"\n";
    cout << " Geben Sie nun 10 Temperaturen ein:\n";		//Eingabeaufforderung für die 10 Temperaturwerte
    cout <<"\n";
    
    //for schleife für die Ausgabe der Aktuellen Temperatur, die wievielte man gerade eingibt
    for (int i = 0; i < SIZE; i++)	
    {
        cout << "Temperatur " << i + 1 << ": ";
        cin >> temperatures[i];
    }

    double sum = 0.0;	//Die Summe = 0 Setzen
    double minTemp = temperatures[0];  //vorläufiges Minimum definieren
    double maxTemp = temperatures[0];  //vorläufiges Maximum definieren
	//Summe der Temperaturen bestimmen
	    for (int i = 0; i < SIZE; i++)
	    {
	        sum += temperatures[i];
		//Minimum Temperatur bestimmen
	        if (temperatures[i] < minTemp)
	        {
	            minTemp = temperatures[i];
	        }
		//Maximum Temperatur bestimmen
	        if (temperatures[i] > maxTemp)
	        {
	            maxTemp = temperatures[i];
	        }
	    }

    double averageTemp = sum / SIZE;

    cout << "Durchschnittstemperatur: " << averageTemp << endl;
    cout << "Minimale Temperatur: " << minTemp << endl;
    cout << "Maximale Temperatur: " << maxTemp << endl;
    cout<<"\n";
    cout<< "Danke fuer Ihren Besuch!\n";
    cout<<"Auf Wiedersehen.\n";

    return 0;
}

