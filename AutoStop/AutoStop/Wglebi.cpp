#include <iostream>
#include <ctime>
#include <cmath>
#include <cstdlib>
#include <string>
#include "Naglowki.h"
#include <vector>
#include <Windows.h>

using namespace std;

Country::Country() { name = "pusty"; C.x = 0; C.y = 0; }
Country::Country(string n, double a, double b){ name = n; C.x = a; C.y = b;}
int Country::returnNr() { int n = count; return n; }
double Country::getPositionA() { double a = C.x; return a; }
double Country::getPositionB() { double b = C.y; return b; }

string Country::getName() { string n = name; return n; }

///////////////////////////////////////////////////////////////////////////////

City::City() { name = "No City"; A.x = 0; A.y = 0; nameCountry = "No Country"; }
City::City(string n, double a, double b, Country &obj) { name = n; A.x = a; A.y = b;  B.x = obj.getPositionA(); B.y = obj.getPositionB(); nameCountry = obj.getName(); obj.city.push_back(*this);}
double City::getPositionA() { double a = A.x; return a; }
double City::getPositionB() { double b = A.y; return b; }
string City::getName() { string n = name; return n; }
string City::getNameCountry() { string n = nameCountry; return n; };
double City::getPositionAx() { double a = B.x; return a; }
double City::getPositionBx() { double b = B.y; return b; }

///////////////////////////////////////////////////////////////////////////////

Stoper::Stoper() { name = "empty"; health = 0; money = 0; A = new Position; A->x = 0; A->y = 0;  B = new Position; B->x = 0; B->y = 0;  catches = 0;}
Stoper::Stoper(string n) { name = n; health = 100; stamina = 100; money = 200; A = new Position; A->x = 51; A->y = 17; nr = 2;  B = new Position; B->x = 5; B->y = 2; cityName = "Wroclaw"; countryName = "Polska";  catches = 0; }
void Stoper::hitch(City &Obj, int stoper)
{
	string choice;
	bool t;
	double z = sqrt(((A->x) - (Obj.getPositionA()))*((A->x) - (Obj.getPositionA()))) + sqrt(((A->y) - (Obj.getPositionB()))*((A->y) - (Obj.getPositionB())));
	double a = 40;
	if (z == 5) { z = 30; }
	if (z == 6) { z = 39; }
	if (z <= 4 && stoper == 3) { z += 25; }
	if (z <= 4 && stoper == 2) { z += 10; }
	int g, h = 1 + rand() % 40;
	
	int y = a - z;
	int *T = new int[y];
	do
	{
		int licznik = 0;
		
			do
			{
				g = 1 + rand() % 40; 
				t = true;
				for (int i = 0; i < licznik; i++)
					if (T[i] == g)
					{
						t = false;
						break;
					}

				if (t) T[licznik++] = g;
			} while (licznik <= a-z);

			for (int i = 0; i < a-z; i++)
			{
				cout << T[i]<<endl;
				if (h == T[i])
				{
					cityName = Obj.getName();
					countryName = Obj.getNameCountry();
					A->x = Obj.getPositionA();
					A->y = Obj.getPositionB();
					B->x = Obj.getPositionAx();
					B->y = Obj.getPositionBx();
					catches++;
					health -= 10; cout << "Zlapales stopa!" << endl;
					if (h % 13 == 0) { cout << "Kierowca nie pusci Cie z niczym. Wygladasz tak zle, ze daje Ci 50 zl"<<endl; money += 50; }
					if (h % 11 == 0) { cout << "Wygladasz tak mizernie, ze kierowca dal Ci cos przekasic"<<endl; health += 10; if (health > 100) { health = 100; } }
					if (h % 23 == 0) { cout << "Kierowca Cie okradl! Tracisz 50 zl" << endl; money -= 50; checkMoney(); }
					cout<<"Miasto " << Obj.getName() << " wita!" << endl;
					return;
				}
			}
		
		stamina -= 10; health -= 10; 
		checkHealth();
		checkStamina();
		checkMoney();

		cout << "Nie zlapales stopa. Probujesz znowu? (Wytrzymalosc: "<<returnStamina()<<", Zdrowie: "<<returnHealth()<<")" << endl;
		cin >> choice;

	} while (choice != "nie");
}
void Stoper::sleep()
{
	if (stamina > 90) { cout << "Nie spij bo Cie okradna!!"<<endl; money -= 50; }
	else
	{
		cout << "Dobranoc!"; stamina = 100; health -= 10;
	}
}
void Stoper::eat()
{
	if (health > 90) { cout << "Rzyganko!"<<endl; money -= 20; stamina -= 20; }
	else { cout << "Smacznego!"; money -= 20; health += 10; }
}
void Stoper::goHome()
{ 
	cout << "Home, sweet home... " << endl << "Liczba odwiedzonych miast: " << catches<<endl; 
}
void Stoper::checkMoney()
{
	if (money <= 0)
	{
		int h = 1 + rand() % 5;
		cout << "Skonczyl Ci sie hajs. Dzwonisz do mamy po kieszonkowe.." << endl;
		Sleep(3000);
		if (h % 5 == 0) { cout << "Udalo sie! Otrzymujesz 200 zl" << endl; money += 200; }
		else { cout << "Niestety mama sie zdenerwowala. Kupila Ci bilet powrotny.. "; exit(0); }
	}
}
void Stoper::checkStamina(){ if (stamina <= 0) { cout << "Nie wyrobiles psychicznie i pobiles czlowieka! Ladujesz w wiezieniu, ponoc mama Cie jutro odbierze" << endl; exit(0); } }
void Stoper::checkHealth(){ if (health <= 0) { cout << "Zemdlales podczas lapania! Trafiasz do szpitala." << endl; exit(0); } }
double Stoper::getPositionA() { double a = A->x; return a; }
double Stoper::getPositionB() { double b = A->y; return b; }
double Stoper::getPositionAy() { double a = B->x; return a; }
double Stoper::getPositionBy() { double b = B->y; return b; }
string Stoper::getName() { string n = name; return n; }
string Stoper::getCityName() { string n = cityName; return n; }
string Stoper::getCountryName() { string n = countryName; return n; }
int Stoper::returnMoney() { int n = money; return n; }
int Stoper::returnStamina() { int n = stamina; return n; }
int Stoper::returnHealth() { int n = health; return n; }
int Stoper::returnNr() { int n = nr; return n; }

///////////////////////////////////////////////////////////////////////////////////////////

