#include<iostream>
using namespace std;
#include"geometrien.h"

int main()
{
	// erstelle eine Variable vom Verbundtyp Kreis

	Kreis aCircle;
	int dx = 0;
	int dy = 0;
	aCircle.mitte.x = 0;
	aCircle.mitte.y = 0;
	aCircle.radius = 0;
	// setze Werte
	setPos(&aCircle, aCircle.mitte.x, aCircle.mitte.y, aCircle.radius);
	// gebe Werte aus
	drucke(aCircle);
	umfang(aCircle);
	verschiebe(aCircle, dx, dy);
	cout <<""<<endl;

	Rechteck r;
	r.h = 0;
	r.b = 0;
	r.rpoint1.x = 0;
	r.rpoint1.y = 0;
	// setze Werte
    setPos( & r, r.rpoint1.x, r.rpoint1.y, r.h, r.b);
	drucke(r);
	cout << "" << endl;

	Dreieck d;
	d.dpoint1.x = 0;
	d.dpoint1.y = 0;
	d.dpoint2.x = 0;
	d.dpoint2.y = 0;
	d.h = 0;
	// setze Werte
	setPos(&d, d.dpoint1.x, d.dpoint1.y, d.dpoint2.x, d.dpoint2.y, d.h);
	drucke(d);

}