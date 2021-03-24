#include"geometrien.h"
void drucke(Kreis circle)
{
	cout <<"Daten des Kreis" << endl;
	cout <<"circle.mitte.x:"<<circle.mitte.x << endl;
	cout <<"circle.mitte.y:"<< circle.mitte.y << endl;
	cout <<"circle.radius:"<<circle.radius << endl;;
}
void drucke (Rechtecke r)
{
	cout << "Daten der Rechtecke" << endl;
	cout <<"r.p1.x:"<<r.p1.x << endl;
	cout <<"r.p1.y:"<<r.p1.y << endl;
	cout <<"r.p2.x:"<< r.p2.x << endl;
	cout <<"r.p2.y:"<< r.p2.y << endl;
	cout <<"r.p3.x:"<< r.p3.x << endl;
	cout <<"r.p3.y:"<< r.p3.y << endl;
	cout <<"r.p4.x:"<< r.p4.x << endl;
	cout <<"r.p4.y:"<< r.p4.y << endl;
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
	s = 2 * (sqrt(pow(r.p1.x-r.p2.x,2)+pow(r.p1.y-r.p2.y,2)));
	return s;
}
void verschiebe(Kreis * circle, int dx, int dy)
{
	
	circle->mitte.x +=dx;
	circle->mitte.y += dy ;
}
void verschiebe(Rechtecke * r, int dx, int dy)
{
	
	r->p1.x += dx;
	r->p1.y += dy ;
	r->p2.x += dx;
	r->p2.y += dy;
	r->p3.x += dx;
	r->p3.y += dy;
	r->p4.x += dx;
	r->p4.y += dy;
}
void setXY(Punkt*km, int x, int y)
{
	km->r = sqrt(pow(x, 2) + pow(y, 2));
	km->phi = atan(static_cast<float>(y) / x);
}
void getXY(Punkt* km,int* x,int* y)
{
	cout << "Kreis" << endl;
	cout << "      x=  " << *x << endl;
	cout << "      y=  " << *y << endl;
	cout << "polar r=  " << km->r << endl;
	cout << "polar phi=" << km->phi << endl;
	cout << "" << endl;
}
void setXY(Rechtecke* R)
{
	R->p1.r = sqrt(pow(R->p1.x, 2) + pow(R->p1.y, 2));
	R->p1.phi = atan(static_cast<float>(R->p1.y) /R->p1.x);
	R->p2.r = sqrt(pow(R->p2.x, 2) + pow(R->p2.y, 2));
	R->p2.phi = atan(static_cast<float>(R->p2.y) / R->p2.x);
	R->p3.r = sqrt(pow(R->p3.x, 2) + pow(R->p3.y, 2));
	R->p3.phi = atan(static_cast<float>(R->p3.y) / R->p3.x);
	R->p4.r = sqrt(pow(R->p4.x, 2) + pow(R->p4.y, 2));
	R->p4.phi = atan(static_cast<float>(R->p4.y) / R->p4.x);

}
void getXY(Rechtecke* R)
{
	cout << "Rechteck" << endl;
	cout << "      p1.x=  " << R->p1.x << endl;
	cout << "      p1.y=  " << R->p1.y << endl;
	cout << "polar p1.r=  " << R->p1.r << endl;
	cout << "polar p1.phi=" << R->p1.phi << endl;
	cout << "      p2.x=  " << R->p2.x << endl;
	cout << "      p2.y=  " << R->p2.y << endl;
	cout << "polar p2.r=  " << R->p2.r << endl;
	cout << "polar p2.phi=" << R->p2.phi << endl;
	cout << "      p3.x=  " << R->p3.x << endl;
	cout << "      p3.y=  " << R->p3.y << endl;
	cout << "polar p3.r=  " << R->p3.r << endl;
	cout << "polar p3.phi=" << R->p3.phi << endl;
	cout << "      p4.x=  " << R->p4.x << endl;
	cout << "      p4.y=  " << R->p4.y << endl;
	cout << "polar p4.r=  " << R->p4.r << endl;
	cout << "polar p4.phi=" << R->p4.phi << endl;
    cout << "" << endl;
}