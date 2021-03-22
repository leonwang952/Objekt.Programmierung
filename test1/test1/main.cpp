#include<iostream>

using namespace std;

#include"geometrien.h"

int main()
{
	// erstelle eine Variable vom Verbundtyp Kreis
    Kreis k;
	// erstelle eine Variable vom Verbundtyp Rechteck
	Rechtecke r;
	// setze Werte der kreis
	k.mitte.x = 0;
	k.mitte.y = 0;
	k.radius = 10;
	// setze Werte der Rechteck
	r.p1.x = 0.0;
	r.p1.y = 10.0;
	r.p2.x = 10.0;
	r.p2.y = 10.0;
	r.p3.x = 10.0;
	r.p3.y = 0.0;
	r.p4.x = 0.0;
	r.p4.y = 0.0;
	// gebe Werte aus
	drucke(k);
	drucke(r);
	cout << "umfang des Kreis:" << umfang(k)<< endl;
	cout << "umfang des Rechteches:" << umfang(r) << endl;
	verschiebe(&k, 5, 5);
	verschiebe(&r, 5, 5);
	drucke(k);
	drucke(r);
}
