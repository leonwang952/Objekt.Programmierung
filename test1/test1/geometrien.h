#include<iostream>

using namespace std;
struct Punkt
{
	int x;
	int y;
	float r;
	float phi;
};
struct Kreis
{
	Punkt mitte;
	int radius;
};
struct Rechtecke
{
	Punkt p1;
	Punkt p2;
	Punkt p3;
	Punkt p4;
};
void drucke    (Kreis circle);
void drucke    (Rechtecke r);
float umfang   (Kreis circle);
float umfang   (Rechtecke r);
void verschiebe(Kreis* circle, int dx, int dy);
void verschiebe(Rechtecke* r, int dx, int dy);
void setXY(Punkt* k, int x, int y);
void getXY(Punkt*k, int*x, int*y);
void setXY(Rechtecke* R);
void getXY(Rechtecke* R);