#include"geometrien.h"

void drucke(Kreis circle)
{
	cout << circle.mitte.x << endl;
	cout << circle.mitte.y << endl;
	cout << circle.radius << endl;;
}
float umfang(Kreis circle)
{
	float s;          //umfang
	float PI = 3.1415926f;
	s = 2 * PI * circle.radius;
	cout << s << endl;
	return s;
}
void verschiebe(Kreis circle, int dx, int dy)
{
	cin >> dx;
	cin >> dy;
	cout << "mitte punkt x:" << circle.mitte.x + dx << endl;
	cout << "mitte punkt y:" << circle.mitte.y + dy << endl;
}