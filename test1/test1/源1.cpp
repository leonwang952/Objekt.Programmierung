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
//// Hauptprogramm
//int main()
//{
//	// erstelle eine Variable vom Verbundtyp Kreis
//	
//	Kreis aCircle;
//	// setze Werte
//	aCircle.mitte.x = 0;
//	aCircle.mitte.y = 0;
//	aCircle.radius = 10;
//	// gebe Werte aus
//	drucke(aCircle);
//	umfang(aCircle);
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