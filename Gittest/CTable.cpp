#include "CTable.h"

CTable::CTable()
{
	table = nullptr;
}

CTable::~CTable()
{
	delete[] table;
}

int CTable::size()
{
	return sizeBoard;
}
