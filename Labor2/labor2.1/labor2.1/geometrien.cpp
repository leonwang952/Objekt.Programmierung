#include"geometrien.h"

void drucke(Kreis circle)
{
	cout << "circle.mitte.x=" << circle.mitte.x << endl;
	cout << "circle.mitte.y=" << circle.mitte.y << endl;
	cout << "circle.radius=" << circle.radius << endl;
}
float umfang(Kreis circle)
{
	float s;          //umfang
	float PI = 3.1415926f;
	s = 2 * PI * circle.radius;
	cout << "Umfang des Kreis=" << s << endl;
	return s;
}
void verschiebe(Kreis circle, int dx, int dy)
{
	cout << "bitten Sie dx eintippen" << endl;
	cin >> dx;
	cout << "bitten Sie dy eintippen" << endl;
	cin >> dy;
	cout << "mitte punkt x=" << circle.mitte.x + dx << endl;
	cout << "mitte punkt y=" << circle.mitte.y + dy << endl;
}
void setPos(Kreis* k, int x, int y, int r)
{
	cout << "bitten Sie k.mitte.x eintippen" << endl;
	cin>>k->mitte.x ;
	cout << "bitten Sie k.mitte.y eintippen" << endl;
	cin>>k->mitte.y ;
	cout << "bitten Sie k.radius eintippen" << endl;
	cin>>k->radius  ;
}
void setPos(Rechteck* r, int x, int y, int h, int b)
{
	cout << "bitten Sie Rechteck Hohe eintippen" << endl;
	cin>>r->h;
	cout << "bitten Sie Rechteck Breit" << endl;
	cin>>r->b ;
	cout << "bitten Sie Anfangspunkt X des Rechchteck eintippen" << endl;
	cin>>r->rpoint1.x;
	cout << "bitten Sie Anfangspunkt y des Rechchteck eintippen" << endl;
	cin>>r->rpoint1.y ;
}
void drucke(Rechteck r)
{
	cout << "Rechteck Hohe h=" << r.h << endl;
	cout << "Rechteck Breit b=" << r.b << endl;
	cout << "Anfangspunkt X des Rechchteck="<< r.rpoint1.x << endl;
	cout << "Anfangspunkt y des Rechchteck" << r.rpoint1.y << endl;
}
void setPos(Dreieck* d, int x1, int y1, int x2, int y2, int h)
{
	cout << "bitten Sie 1.Anfangspunkt X eintippen" << endl;
	cin >> d->dpoint1.x;
	cout << "bitten Sie 1.Anfangspunkt y eintippen"  << endl;
	cin >> d->dpoint1.y;
	cout << "bitten Sie 2.Anfangspunkt X eintippen"  << endl;
	cin >> d->dpoint2.x;
	cout << "bitten Sie 2.Anfangspunkt y eintippen" << endl;
	cin >> d->dpoint2.y;
	cout << "bitten Sie Dreieck Hohe eintippen" << endl;
	cin >> d->h;
}
void drucke(Dreieck d)
{
	cout << "1.Anfangspunkt X=" << d.dpoint1.x << endl;
	cout << "1.Anfangspunkt y=" << d.dpoint1.y << endl;
	cout << "2.Anfangspunkt X=" << d.dpoint2.x << endl;
	cout << "2.Anfangspunkt y=" << d.dpoint2.y << endl;
	cout << "Dreieck Hohe=" << d.h << endl;
}