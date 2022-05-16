#include "PaymentDetails.h"
#include <iostream>
using namespace std;

PaymentDetails::PaymentDetails()
{
	int payID;
	string payMoth;
	string dateTime;
}

PaymentDetails::PaymentDetails(int ID, string pay, string date)
{
	payID = ID;
	payMoth= pay;
	dateTime= date;

}

void PaymentDetails::dispalyPaydetails()
{
	cout << "Display customers payment details" << endl;
}

PaymentDetails::~PaymentDetails()
{
	//destuctor is running
}
