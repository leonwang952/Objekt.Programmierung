#include<iostream>
using namespace std;
#include"geometrien.h"

int main()
{
	// erstelle eine Variable vom Verbundtyp Kreis

	Kreis aCircle;
	int dx = 0;
	int dy = 0;
	// setze Werte
	aCircle.mitte.x = 0;
	aCircle.mitte.y = 0;
	aCircle.radius = 10;
	// gebe Werte aus
	drucke(aCircle);
	umfang(aCircle);
	verschiebe(aCircle, dx, dy);
}
