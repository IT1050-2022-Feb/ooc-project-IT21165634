#include "Customers.h"

Customers::Customers() {

	noOfProducts = 0;
	cCart[0] = new Cart();
	cCart[1] = new Cart();

	//cOrder[0] = new Order();
	//cOrder[1] = new Order();
}

Customers::Customers(string re_name, string pw, int uID, string usName, string  number, string em, string add, int noOfpro)
	:registeredUser(re_name, pw, uID, usName, number, em, add) {
	noOfProducts = noOfpro;
}

void Customers::addBuyProduct(product* pro)
{
	cout << "Customers buy products" << endl;
	if (noOfProducts < SIZE2)
	{
		products[noOfProducts] = pro;
		noOfProducts++;
	}
}

void Customers::displayBuyDatails()
{
	cout << "Display buy details" << endl;
}

void Customers::checkProductAvailability()
{
	cout << "Customers Check product availability" << endl;
}


void Customers::creatCart()
{
	cout << "Customer creat a cart" << endl;
}


Customers::~Customers() {
	
	for (int i = 0; i < SIZE2; i++) {
		delete  products[i];
	}

	for (int i = 0; i < 2; i++) {
		delete  cCart[i];
	}

	for (int i = 0; i < 2; i++) {
		delete  cOrder[i];
	}
}