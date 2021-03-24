#include"geometrien.h"
void drucke(Kreis circle)
{
	cout << "Daten des Kreis" << endl;
	cout << "circle.mitte.x:" << circle.mitte.x << endl;
	cout << "circle.mitte.y:" << circle.mitte.y << endl;
	cout << "circle.radius:" << circle.radius << endl;;
}
void drucke(Rechtecke r)
{
	cout << "Daten der Rechtecke" << endl;
	cout << "r.p1.x:" << r.p1.x << endl;
	cout << "r.p1.y:" << r.p1.y << endl;
	cout << "r.p2.x:" << r.p2.x << endl;
	cout << "r.p2.y:" << r.p2.y << endl;
	cout << "r.p3.x:" << r.p3.x << endl;
	cout << "r.p3.y:" << r.p3.y << endl;
	cout << "r.p4.x:" << r.p4.x << endl;
	cout << "r.p4.y:" << r.p4.y << endl;
}
float umfang(Kreis circle)
{
	float s;          //umfang
	float PI = 3.1415926f;
	s = 2 * PI * circle.radius;
	return s;
}
float umfang(Rechtecke r)
{
	float s;          //umfang
	s = 2 * ((r.p1.y - r.p4.y) + (r.p3.x - r.p4.x));
	return s;
}

void verschiebe(Kreis* circle, int dx, int dy)
{

	circle->mitte.x += dx;
	circle->mitte.y += dy;
}
void verschiebe(Rechtecke* r, int dx, int dy)
{

	r->p1.x += dx;
	r->p1.y += dy;
	r->p2.x += dx;
	r->p2.y += dy;
	r->p3.x += dx;
	r->p3.y += dy;
	r->p4.x += dx;
	r->p4.y += dy;
}