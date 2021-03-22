//#include <iostream>
//using namespace std;
//// definiere Strukturen
//struct Punkt
//{
//	int x;
//	int y;
//};
//struct Kreis
//{
//	Punkt mitte;
//	int radius;
//};
//
//// Prototypen fuer Funktionen
//void drucke(Kreis);
//float umfang(Kreis);
//void verschiebe(Kreis , int , int );
//
//// Hauptprogramm
//int main()
//{
//	// erstelle eine Variable vom Verbundtyp Kreis
//
//	Kreis aCircle;
//	int dx=0; 
//	int dy=0;
//	// setze Werte
//	aCircle.mitte.x = 0;
//	aCircle.mitte.y = 0;
//	aCircle.radius = 10;
//	// gebe Werte aus
//	drucke(aCircle);
//	umfang(aCircle);
//	verschiebe(aCircle, dx, dy);
//}
//// gebe Werte aus
//void drucke(Kreis circle)
//{
//	cout << circle.mitte.x << endl;
//	cout << circle.mitte.y << endl;
//	cout << circle.radius << endl;;
//}
//float umfang(Kreis circle)
//{
//	float s;          //umfang
//	float PI = 3.1415926f;
//	s = 2 * PI * circle.radius;
//	cout << s << endl;
//	return s;
//}
//void verschiebe(Kreis circle, int dx, int dy)
//{
//	cin >> dx;
//	cin >> dy;
//	cout << "mitte punkt x:" << circle.mitte.x + dx << endl;
//	cout << "mitte punkt y:" << circle.mitte.y + dy << endl;
//}