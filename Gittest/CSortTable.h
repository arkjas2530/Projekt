#include <iostream>
#include "CTable.h"

class CSortTable:public CTable
{
private:
	char sign;
	/*
	Losuje liczby do tablicy
	Arg: n - wielkoœæ tablicy
	*/
	void menuPseudoChoice(int _n);
	/*
	Pokazuje menu glowne
	*/
	void show_menu();
	/*
	Algorytm do wprowadzania elentów do tablicy z klawiatury
	Arg: n - wielkoœæ tablicy
	*/
	void menuUserChoice(int _n);
	void menu();
	/*
	Switch, g³owne menu
	*/
	void choice();
	
public:
	CSortTable();

};
