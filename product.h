#pragma once
#include <string>
#include "Customers.h"
using namespace std;
class Customers;

class product
{
private:
	int proID;
	string proName;
	float price;
	string proDesc;
	string proCaty;

	Customers* cus;




public:
	product();
	product(int ID, string pName, float price, string proDesc, string proCaty);

	void updateProductDetails();
	void filterProducts();
	void checkProductAvailability();
	~product();




};

