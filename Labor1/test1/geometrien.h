#include<iostream>
using namespace std;
struct Punkt
{
	int x;
	int y;
};
struct Kreis
{
	Punkt mitte;
	int radius;
};
void drucke    (Kreis circle);
float umfang   (Kreis circle);
void verschiebe(Kreis circle, int dx, int dy);
