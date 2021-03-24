#include<iostream>
#include<math.h>
using namespace std;
#include"geometrien.h"

int main()
{
	// erstelle eine Variable vom Verbundtyp Kreis
    Kreis k;
	// erstelle eine Variable vom Verbundtyp Rechteck
	Rechtecke R;
	k.mitte.x = 0;
	k.mitte.y = 0;
	// setze Werte der kreis
	k.radius = 10;
	// setze Werte der Rechteck
	R.p1.x = 0.0;
	R.p1.y = 10.0;
	R.p2.x = 10.0;
	R.p2.y = 10.0;
	R.p3.x = 10.0;
	R.p3.y = 0.0;
	R.p4.x = 0.0;
	R.p4.y = 0.0;
	// gebe Umfang des Kreises und des Rechtecks aus
    cout << "umfang des Kreis:" << umfang(k) << endl;
	cout << "umfang des Rechteches:" << umfang(R) << endl;
	//Umstellung der Punkt Struktur auf Polarkoordinaten
	setXY(&k.mitte, k.mitte.x, k.mitte.y);
	getXY(&k.mitte, &k.mitte.x, &k.mitte.y);
	setXY(&R);
	getXY(&R);
	// gebe Werte des Kreises und des Rechtecks aus
	drucke(k);
	drucke(R);
	// verschiebe Kreis und Rechteck
	cout << "" << endl;
	cout << "nach dem Verschiebe" << endl;
    verschiebe(&k, 5, 5);
	verschiebe(&R, 5, 5);
	// gebe Werte des Kreises und des Rechtecks nach dem Verschiebe aus
	setXY(&k.mitte, k.mitte.x, k.mitte.y);
	getXY(&k.mitte, &k.mitte.x, &k.mitte.y);
	setXY(&R);
	getXY(&R);
	drucke(k);
	drucke(R);
}
