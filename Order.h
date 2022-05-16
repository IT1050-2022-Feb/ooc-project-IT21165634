#pragma once
#include <string>
#include "PaymentDetails.h"
#include "Cart.h"
using namespace std;

class Cart;

class Order
{
private:
	int orderID;
	string orderName;
	PaymentDetails* pay[2];
	Cart* cartNo;


public:
	Order();
	Order(int id, string name);
	void displayOrderdatils();
	void addCart(Cart* cID);
	~Order();

};

