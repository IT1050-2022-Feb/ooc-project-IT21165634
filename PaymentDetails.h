#pragma once
#include <string>
using namespace std;

class PaymentDetails
{
private:
	int payID;
	string payMoth;
	string dateTime;

public:
	PaymentDetails();
	PaymentDetails(int ID, string pay, string date);
	void dispalyPaydetails();
	~PaymentDetails();
};

