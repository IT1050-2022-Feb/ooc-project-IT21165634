#include "Cart.h"

Cart::Cart()
{
	int cartID = 000;
	string name= "";
	int noOfIteams = 0;
}

Cart::Cart(int ID, string cName, int noPro)
{
	cartID = ID;
	name= cName;
	noOfIteams = noPro;
}

void Cart::displaydetails()
{
	cout << "Display cart details" << endl;
}

void Cart::addProducts(product* pro)
{

	if (noOfIteams < SIZE7)
	{
		proNo[noOfIteams] = pro;
	}
	
}

Cart::~Cart()
{
	for (int i = 0; i < SIZE7; i++) {
		delete  proNo[i];
	}
}
