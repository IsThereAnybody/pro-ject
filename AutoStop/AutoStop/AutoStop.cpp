#include <iostream>
#include <ctime>
#include <cmath>
#include <cstdlib>
#include <string>
#include "Naglowki.h"
#include <vector>
#include <Windows.h>

using namespace std;

int main()
{
	srand(time(NULL));
	
	Country Bulgaria("Bulgaria", 6, 0);
	Country Portugalia("Portugalia", 1, 0);
	Country Polska("Polska", 5, 2);
	Country Slowacja("Slowacja", 5, 2);
	Country Czechy("Czechy", 5, 2);
	Country Hiszpania("Hiszpania", 2, 0);
	Country Francja("Francja", 3, 1);
	Country Niemcy("Niemcy", 4, 2);
	Country Holandia("Holandia", 3, 2);
	Country Belgia("Belgia", 3, 2);
	Country Szwajcaria("Szwajcaria", 4, 1);
	Country Austria("Austria", 5, 1);
	Country Brytania("Brytania", 3, 3);
	Country Wlochy("Wlochy", 4, 0);
	Country Liechtenstain("Liechtenstain", 4, 1);
	Country Monako("Monako", 3, 0);
	Country Szwecja("Szwecja", 5, 3);
	Country Norwegia("Norwegia", 4, 4);
	Country Finlandia("Finlandia", 6, 4);
	Country Estonia("Estonia", 5, 2);
	Country Lotwa("Lotwa", 6, 3);
	Country Litwa("Litwa", 6, 3);
	Country Bialorus("Bialorus", 6, 3);
	Country Ukraina("Ukraina", 6, 2);
	Country Wegry("Wegry", 5, 1);
	Country Slowenia("Slowenia", 5, 0);
	Country Chorwacja("Chorwacja", 5, 0);
	Country Macedonia("Macedonia", 6, 0);
	Country Serbia("Serbia", 6, 1);
	Country Czarnogora("Czarnogora", 6, 0);
	Country Rumunia("Rumunia", 6, 1);
	Country Moldawia("Moldawia", 6, 1);
	Country Albania("Albania", 6, 0);
	Country Grecja("Grecja", 6, 0);
	Country Turcja("Turcja", 7, 0);
	Country BiH("Bosnia i Hercegowina", 5, 0);

	//Portugalia//
	City Lizbona("Lizbona", 38, -9, Portugalia);
	City Porto("Porto", 41, -8, Portugalia);

	//Polska//
	City Krakow("Krakow", 50, 20, Polska);
	City Szczecin("Szczecin", 53, 14, Polska);
	City Rzeszow("Rzeszow", 50, 22, Polska);
	City Poznan("Poznan", 52, 17, Polska);
	City Wroclaw("Wroclaw", 51, 17, Polska);
	City Warszawa("Warszawa", 52, 21, Polska);
	City Lublin("Lublin", 51, 22, Polska);
	City Bialystok("Bialystok", 53, 23, Polska);
	City Gdansk("Gdansk", 54, 18, Polska);

	//Slowacja//
	City Bratyslawa("Bratyslawa", 48, 17, Slowacja);

	//Czechy//
	City Praga("Praga", 50, 14, Czechy);

	//Hiszpania//
	City Andora("Andora", 41, 1, Hiszpania);
	City Barcelona("Barcelona", 41, 2, Hiszpania);
	City Saragossa("Saragossa", 41, -1, Hiszpania);
	City Madryt("Madryt", 40, -3, Hiszpania);
	City Bilbao("Bilbao", 43, -3, Hiszpania);
	City Walencja("Walencja", 39, 0, Hiszpania);
	City Murcja("Murcja", 38, -1, Hiszpania);
	City Malaga("Malaga", 36, -4, Hiszpania);
	City Sewilla("Sewilla", 37, -6, Hiszpania);
	City Gibraltar("Gibraltar", 36, -5, Hiszpania);

	//Francja//
	City Lyon("Lyon", 45, 4, Francja);
	City Paryz("Paryz", 49, 2, Francja);
	City Nantes("Nantes", 47, -1, Francja);
	City Bordeaux("Bordeaux", 45, 0, Francja);
	City Tuluza("Tuluza", 43, 1, Francja);
	City Montpellier("Montpellier", 43, 4, Francja);
	City Marsylia("Marsylia", 43, 5, Francja);
	City Nicea("Nicea", 43, 7, Francja);

	//Niemcy//
	City Hamburg("Hamburg", 53, 10, Niemcy);
	City Monachium("Monachium", 48, 11, Niemcy);
	City Stuttgart("Stuttgart", 49, 9, Niemcy);
	City Frankfurt("Frankfurt", 50, 8, Niemcy);
	City Kolonia("Kolonia", 51, 7, Niemcy);

	//Holandia//
	City Rotterdam("Rotterdam", 52, 4, Holandia);
	City Amsterdam("Amsterdam", 52, 5, Holandia);

	//Belgia//
	City Bruksela("Bruksela", 50, 4, Belgia);
	City Antwerpia("Antwerpia", 51, 4, Belgia);

	//Szwajcaria//
	City Zurych("Zurych", 47, 8, Szwajcaria);
	City Berno("Berno", 47, 7, Szwajcaria);
	City Genewa("Genewa", 46, 6, Szwajcaria);

	//Austria//
	City Wieden("Wieden", 48, 16, Austria);
	City Graz("Graz", 47, 15, Austria);
	City Innsbruck("Innsbruck", 47, 11, Austria);

	//Brytania//
	City Londyn("Londyn", 51, 0, Brytania);
	City Liverpool("Liverpool", 53, -3, Brytania);
	City Manchester("Manchester", 53, -2, Brytania);
	City Glasgow("Glasgow", 55, -4, Brytania);
	City Edynburg("Edynburg", 56, -3, Brytania);
	City Belfast("Belfast", 54, -6, Brytania);
	City Dublin("Dublin", 53, -6, Brytania);
	City Cardiff("Cardiff", 51, -3, Brytania);

	//Wlochy//
	City Turyn("Turyn", 45, 8, Wlochy);
	City Mediolan("Mediolan", 45, 10, Wlochy);
	City Genua("Genua", 44, 9, Wlochy);
	City Bolonia("Bolonia", 44, 11, Wlochy);
	City SanMarino("San Marino", 44, 12, Wlochy);
	City Florencja("Florencja", 43, 11, Wlochy);
	City Rzym("Rzym", 42, 12, Wlochy);
	City Neapol("Neapol", 41, 14, Wlochy);
	City Bari("Bari", 41, 17, Wlochy);
	City Sycylia("Sycylia", 37, 14, Wlochy);

	//Liechtenstein//
	City Vaduz("Vaduz", 47, 9, Liechtenstain);

	//Monako//
	City Monaco("Monako", 43, 7, Monako);

	//Szwecja//
	City Malmo("Malmo", 55, 13, Szwecja);
	City Sztokholm("Sztokholm", 59, 15, Szwecja);

	//Norwegia//
	City Oslo("Oslo", 60, 10, Norwegia);
	City Bergen("Bergen", 60, 5, Norwegia);
	City Trondheim("Trondheim", 63, 10, Norwegia);
	City Narwik("Narwik", 68, 10, Norwegia);

	//Finlandia//
	City Helsinki("Helsinki", 60, 25, Finlandia);

	//Estonia//
	City Tallin("Tallin", 59, 25, Estonia);

	//Lotwa//
	City Ryga("Ryga", 57, 24, Lotwa);

	//Litwa//
	City Wilno("Wilno", 54, 25, Litwa);
	City Kowno("Kowno", 55, 24, Litwa);

	//Bialorus//
	City Minsk("Minsk", 54, 27, Bialorus);


	//Ukraina//
	City Lwow("Lwow", 49, 24, Ukraina);
	City Kijow("Kijow", 50, 30, Ukraina);
	City Odessa("Odessa", 46, 30, Ukraina);
	City Sewastopol("Sewastopol", 46, 33, Ukraina);
	City Donieck("Donieck", 48, 37, Ukraina);
	City Charków("Charków", 56, 36, Ukraina);

	//Wegry//
	City Budapeszt("Budapeszt", 47, 19, Wegry);
	City Balaton("Balaton", 47, 18, Wegry);

	//Slowenia//
	City Maribor("Maribor", 46, 15, Slowenia);
	City Lublana("Lublana", 46, 14, Slowenia);

	//Chorwacja//
	City Zagrzeb("Zagrzeb", 46, 16, Chorwacja);
	City Karlovac("Karlovac", 45, 15, Chorwacja);
	City Rijeka("Rijeka", 45, 14, Chorwacja);
	City Pula("Pula", 44, 14, Chorwacja);
	City Zadar("Zadar", 44, 15, Chorwacja);
	City Sziberik("Sziberik", 43, 15, Chorwacja);
	City Split("Split", 43, 16, Chorwacja);
	City Fazana("Fazana", 44, 13, Chorwacja);
	City Pakostane("Pakostane", 44, 16, Chorwacja);
	City Dubrownik("Dubrownik", 42, 18, Chorwacja);

	//Macedonia//
	City Skopje("Skopje", 42, 21, Macedonia);

	//Serbia//
	City Belgrad("Belgrad", 45, 20, Serbia);
	City Prisztina("Prisztina", 42, 21, Serbia);

	//Czarnogora//
	City Podgorica("Podgorica", 42, 19, Czarnogora);

	//Moldawia//
	City Kiszyniow("Kiszyniow", 47, 28, Moldawia);

	//Rumunia// 
	City Bukareszt("Bukareszt", 44, 26, Rumunia);
	City KluzNapoka("Kluz-Napoka", 47, 23, Rumunia);

	//Albania//
	City Tirana("Tirana", 41, 20, Albania);

	//Grecja//
	City Korfu("Korfu", 39, 19, Grecja);
	City Saloniki("Saloniki", 40, 23, Grecja);
	City Ateny("Ateny", 38, 23, Grecja);
	City Korynt("Korynt", 37, 23, Grecja);
	City Sparta("Sparta", 37, 22, Grecja);
	City Kreta("Kreta", 35, 24, Grecja);

	//Turcja//
	City Stambul("Stambul", 41, 28, Turcja);

	//Bulgaria//
	City Sofia("Sofia", 42, 23, Bulgaria);

	//BiH//
	City Sarajewo("Sarajewo", 43, 18, BiH);
	City BanjaLuka("Banja Luka", 44, 17, BiH);

	vector <Country> B;
	B.push_back(Polska);
	B.push_back(Portugalia);
	B.push_back(Czechy);
	B.push_back(Slowacja);
	B.push_back(Francja);
	B.push_back(Niemcy);
	B.push_back(Hiszpania);
	B.push_back(Holandia);
	B.push_back(Belgia);
	B.push_back(Szwajcaria);
	B.push_back(Austria);
	B.push_back(Brytania);
	B.push_back(Wlochy);
	B.push_back(Liechtenstain);
	B.push_back(Monako);
	B.push_back(Szwecja);
	B.push_back(Norwegia);
	B.push_back(Finlandia);
	B.push_back(Estonia);
	B.push_back(Lotwa);
	B.push_back(Litwa);
	B.push_back(Bialorus);
	B.push_back(Ukraina);
	B.push_back(Wegry);
	B.push_back(Slowenia);
	B.push_back(Chorwacja);
	B.push_back(Macedonia);
	B.push_back(Serbia);
	B.push_back(Czarnogora);
	B.push_back(Rumunia);
	B.push_back(Moldawia);
	B.push_back(Albania);
	B.push_back(Grecja);
	B.push_back(Turcja);
	B.push_back(BiH);
	B.push_back(Bulgaria);

	

	
	string name;
	cout << "Witaj nieznajomy. Nawet nie wiem jak na imie masz.. ?" << endl;
	cin >> name;
	Stoper A(name);
	cout << "Witaj " << A.getName() << "! Co chcesz robic?" << endl<<endl;
	while (true)
	{
		cout << "Miasto: "<< A.getCityName()<< "     Kraj: "<<A.getCountryName()<<"     Kasa: "  << A.returnMoney() << "     Zdrowie: " << A.returnHealth() << "     Wytrzymalosc: " << A.returnStamina() << endl;
		cout << "---------------------------------------------------------------------------" << endl;
		cout << "1. Lapanie stopa" << endl << "2. Jedzenie" << endl << "3. Spanie" << endl << "4. Powrot do domu" << endl;
		cout << "---------------------------------------------------------------------------" << endl;
		int choice;
		int stoperChoice;
		cin >> choice;

		{
			switch (choice)
			{
			case 1:
			{
				cout << "Lapac stopa" << endl;
				cout << "Gdzie chcesz zaczac lapac?" << endl<<"1. Stacja benzynowa"<<endl<<"2. Przystanek autobusowy"<<endl<<"3. Autostrada"<<endl;
				cin >> stoperChoice;
				while (stoperChoice <= 0 || stoperChoice >3)
				{
					cout << "Nie ta liczba!"; cin >> stoperChoice;
				} 
				vector <Country> NowePanstwa;
				vector <City> NoweMiasta;
				int count = 0;
				int choose;
				int x = 0;
				for (int i = 0; i < B.size(); i++)
				{
					double h = (((A.getPositionAy()) - (B[i].getPositionA())) + ((A.getPositionBy() - (B[i].getPositionB())))); 
					if (h<3)
					{
						NowePanstwa.push_back(B[i]); 
						x++; 
					}
				}
				for (int i = 0; i < x; i++)
				{
					for (int j = 0; j < NowePanstwa[i].city.size(); j++)
					{
						double z = sqrt(((A.getPositionA()) - (NowePanstwa[i].city[j].getPositionA()))*((A.getPositionA()) - (NowePanstwa[i].city[j].getPositionA()))) + sqrt(((A.getPositionB()) - (NowePanstwa[i].city[j].getPositionB()))*((A.getPositionB()) - (NowePanstwa[i].city[j].getPositionB()))); cout << "Takie z: " << z << endl;
					    if (z < 7 && z > 0)
						{
							NoweMiasta.push_back(NowePanstwa[i].city[j]); count++;
						}
					}
				}
				cout << "Ktore miasto chcesz wybrac?" << endl;
				for (int i = 0; i < count; i++)
				{
					cout << i + 1 << ". " << NoweMiasta[i].getName() << " ("<<NoweMiasta[i].getNameCountry()<<")"<<endl;
				}
				cin >> choose;
				while (choose<1 || choose>count) { cout << "Nie ta liczba!. Podaj prawidlowa!: "; cin >> choose; }
				A.hitch(NoweMiasta[choose - 1], stoperChoice);
				A.checkHealth(); A.checkStamina(); A.checkMoney();
				break;
			}
			case 2: A.eat(); A.checkHealth(); A.checkStamina(); A.checkMoney(); break;
			case 3: A.sleep(); A.checkHealth(); A.checkMoney(); break;
			case 4: A.goHome(); return 0;
			default: cout << "Nie ta liczba"; break;
			}
		}
		getchar(); getchar();
		system("cls");
	}
	
	return 0;
}


