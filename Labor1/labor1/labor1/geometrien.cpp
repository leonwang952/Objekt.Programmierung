#include"geometrien.h"

void drucke(Kreis circle)
{
	cout <<"circle.mitte.x=" <<circle.mitte.x << endl;
	cout <<"circle.mitte.y=" << circle.mitte.y << endl;
	cout <<"circle.radius=" << circle.radius << endl;
}
float umfang(Kreis circle)
{
	float s;          //umfang
	float PI = 3.1415926f;
	s = 2 * PI * circle.radius;
	cout <<"Umfang des Kreis="<< s << endl;
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