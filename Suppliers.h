#pragma once
#include <string>
#include "shop.h"
using namespace std;
#define SIZE5 15
class shop;


class Suppliers
{
private:
	int suppID;
	string suppName;
	shop* sell[SIZE5];

public:
	Suppliers();
	Suppliers(int id, string name);
	void supplyProducts(shop* sh);

	~Suppliers();
};

