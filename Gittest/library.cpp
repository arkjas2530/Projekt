#include "library.h"

int *Libery::creatTable(int _n)
{
	int *board = nullptr;
	try
	{
		board = new int[_n];
	}
	catch(std::bad_alloc &e)
	{
		std::cout << &e << std::endl;
	}

	return board;
}
