// Aufgabe 2 –Strukturen, Zeigern und Unterprogrammaufrufen.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//



#include <iostream>
using namespace std;

// definiere Strukturen
struct Verschiebe
{
	int dx;
	int dy;
};
struct Punkt
{
	int x;
	int y;
};
struct Kreis
{
	
	int radius;
	float s;
    Punkt mitte;
	Verschiebe ort;
};

// Prototypen fuer Funktionen
void drucke(Kreis* circle);
float umfang(Kreis* circle);
void verschiebe(Kreis* circle);

// Hauptprogramm
int main()
{
	// erstelle eine Variable vom Verbundtyp Kreis
	Kreis aCircle;
	// setze Werte
	aCircle.mitte.x = 0;
	aCircle.mitte.y = 0;
	aCircle.radius = 10;
	aCircle.ort.dx = 0;
	aCircle.ort.dy = 0;
	aCircle.s = 0;

 // gebe Werte aus
	umfang(&aCircle);                                  //Berechnung des Umfang
	drucke(&aCircle);                                  //drucken Anfangswert
    verschiebe(&aCircle);
	drucke(&aCircle);

}	               
void drucke(Kreis *circle)
{
	cout << "mitte.x="<<circle->mitte.x  << endl;
	cout << "mitte.y="<<circle->mitte.y  << endl;
	cout << "radius=" << circle->radius << endl;
	cout << "umfang=" << circle->s << endl;
	
}
float umfang(Kreis *circle)
{
	
	float PI = 3.1415926f;
	circle->s = 2 *PI * circle->radius;
	
	return circle->s;
	
}
void verschiebe(Kreis* circle)
{

	cout << "bitte horizotale Verschiebung eintippen" << endl;
	cin >> circle->ort.dx;
	cout << "bitte horizotale Verschiebung eintippen" << endl;
	cin >> circle->ort.dy;
	circle->mitte.x = +circle->ort.dx;
	circle->mitte.y = +circle->ort.dy;
}
