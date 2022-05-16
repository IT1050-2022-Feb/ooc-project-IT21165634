#pragma once
#include "PaymentDetails.h"
#include "Order.h"
#define SIZE8 10
#define SIZE9 10

class PaymentDetails;
class Order;

class Report
{
private:
	PaymentDetails* pay[SIZE8];
	Order* order[SIZE9];

public:
	Report();
	Report(PaymentDetails* payRep, Order* orderRep);
	void PaymentDetailsReport();
	void OrderDetailsReport();
	~Report();
};

