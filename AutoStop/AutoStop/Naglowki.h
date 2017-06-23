#include <iostream>
#include <ctime>
#include <cmath>
#include <cstdlib>
#include <string>
#include <vector>
#include <Windows.h>

using namespace std; 

struct Position
{
	double x, y;
};

class City;

class Country
{
	int nr;
	int count;
	string name;
	Position C;

public:
	Country();
	Country(string n, double a, double b);
	vector <City> city;
	int returnNr();
	double getPositionA();
	double getPositionB();
	string getName();
};

class City
{
	Position A;
	Position B;
	string name;
	string nameCountry;

public:
	
	City();
	City(string n, double a, double b, Country &obj);
	double getPositionA();
	double getPositionB();
	double getPositionAx();
	double getPositionBx();
	string getName();
	string getNameCountry();
};

class Stoper 
{
	Position *A;
	Position *B;
	string name;
	string cityName;
	string countryName;
	int stamina;
	int health;
	int money;
	int nr;
	int catches;
	
public:
	Stoper();
	Stoper(string n);
	void hitch(City &Obj, int stoper);
	void sleep();
	void eat();
	void goHome();
	void checkMoney();
	void checkStamina();
	void checkHealth();
	double getPositionA();
	double getPositionB();
	double getPositionAy();
	double getPositionBy();
	string getName();
	string getCityName();
	string getCountryName();
	int returnMoney();
	int returnStamina();
	int returnHealth();
	int returnNr();
};




