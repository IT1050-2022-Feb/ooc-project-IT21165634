#include "Suppliers.h"

Suppliers::Suppliers()
{
	int suppID= 000;
	string suppName= "";
}

Suppliers::Suppliers(int id, string name)
{
	suppID= id;
	suppName= name;
}

void Suppliers::supplyProducts(shop* sh)
{
	cout << "Suppliers sell products to the shop" << endl;
}

Suppliers::~Suppliers()
{
	for (int i = 0; i < SIZE5; i++) {
		delete sell[i];
	}
}
