#include<iostream>
using namespace std;
struct Punkt
{
	int x;
	int y;
};
struct Kreis
{
	Punkt mitte;   //kreispunkt
	int radius;
};
struct Dreieck
{
	Punkt dpoint1; //1.Anfangspunkt
	Punkt dpoint2; //2.Anfangspunkt
	int h;        //Hohe des Dreieck
};
struct Rechteck
{
	int h;
	int b;
	Punkt rpoint1;    // Anfangspunkt
};
void drucke(Kreis circle);
void drucke(Rechteck r);
void drucke(Dreieck d);
float umfang(Kreis circle);
void verschiebe(Kreis circle, int dx, int dy);
void setPos(Kreis* k, int x, int y, int r);
void setPos(Rechteck* r, int x, int y, int h, int b);
void setPos(Dreieck* d, int x1, int y1, int x2, int y2,int h);
