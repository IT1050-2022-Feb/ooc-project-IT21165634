#pragma once
#include "registeredUser.h"
#include "Suppliers.h"
#include "product.h"
constexpr auto SIZE1 = 2;
#define SIZE6 15
class Suppliers;

class shop :
    public registeredUser
{
private:
	product* pID[SIZE1];
	Suppliers* supp[SIZE6];

public:
	shop();
	shop(string re_name, string pw, int uID, string usName, string  number, string em, string add);
	void manageProduct();
	void buyProducts(product* buyID, Suppliers* sup);


	~shop();
};

