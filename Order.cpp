#include "Order.h"
#include "PaymentDetails.h"
#include <iostream>
using namespace std;

Order::Order()
{
	int orderID = 000;
	string orderName= "";

	pay[0] = new PaymentDetails();
	pay[1] = new PaymentDetails();
}

Order::Order(int id, string name)
{
	orderID =id;
	orderName= name;
}


void Order::displayOrderdatils()
{
	cout << "Display order details" << endl;
}


void Order::addCart(Cart* cID)
{
	cout << "Customer add cart to order" << endl;
	cartNo = cID;
}

Order::~Order()
{
	for (int i = 0; i < 2; i++) {
		delete  pay[i];
	}

	delete cartNo;
}
