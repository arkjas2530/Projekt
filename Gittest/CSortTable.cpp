#include "CSortTable.h"
#include <cstdlib>
#include <random>

using std::cout;
using std::endl;
using std::cin;


CSortTable::CSortTable()
{
	for (;;)
	{
		show_menu();
		choice();
		cout << "Nacisnij Enter aby kontynuowac..." << endl;
		system("pause");
		system("cls");
	}
}

void CSortTable::choice()
{
	int n;
	cin >> sign;
	switch (sign)
	{
	case '1':
		cout << "Podaj iloœæ elementów do tablicy: " << endl;
		cin >> n;
		table = creatTable(n);
		sizeBoard = n;

		menuUserChoice(n);
		break;

	case '2':
		cout << "Podaj ilosc elementow do losowania: " << endl;
		cin >> n;
		table = creatTable(n);
		sizeBoard = n;
		menuPseudoChoice(n);
		break;
	case '3':
		menu();
		// TWORZENIE TABELKI Z DANYMI
		break;
	case'0':
		exit(0);
	default:
		cout << "Brak wyboru w menu.Sprobuj ponownie " << endl;

	}
}


void CSortTable::menuPseudoChoice(int _n)
{
	int a, b;
	// Zabezpieczenie generatora, da sie to jakos zrobiæ na TRY CATCH ??? ~AREK
	cout << "Podaj zakres z ktorego maja byc generowane liczby" << endl;
	cin >> a >> b;
	while (a >= b)
	{
		cout << "Poczatek zakresu jest wiekszy lub rowny koncu. Sprobuj jeszcze raz" << endl;
		cin >> a >> b;
	}
	// Stworzenie generatora liczb pseudolosowych u¿ywaj¹cego algorytmu mt19937
	std::random_device rd;
	std::mt19937 mt(rd());
	std::uniform_int_distribution<int> generate(a, b);

	// Przypisanie nowo wygenerowanej liczby pseudolosowej:
	for (int i = 0; i < _n;i++)
	{
		table[i] = generate(mt);
		cout << table[i] << " ";
	}
}
void CSortTable::menuUserChoice(int _n)
{
	for (int i = 0; i < _n;i++)
	{
		cout << "Podaj " << i + 1 << " element tablicy" << endl;
		cin >> table[i];
	}
	//nie wiem czy zostawiæ obczajcie to ! ~AREK
	//system("cls");
}
void CSortTable::menu()
{

}


void CSortTable::show_menu()
{
	cout << "Menu Glowne" << endl;
	cout << "1. Realizacja algorytmow przy pomocy recznie uzupelnionej tablicy" << endl;
	cout << "2. Realizacja algorytmow przy pomocy tablicy uzupelnionej liczbami losowymi" << endl;
	cout << "3. Tworzenie tabeli" << endl;
	cout << "0. Opuszczenie programu" << endl;
}

