#include "product.h"
#include <iostream>
using namespace std;

product::product() {

	int proID = 00000;
	string proName = "";
	float price = 00.00;
	string proDesc = "";
	string proCaty = "";
}

product::product(int ID, string pName, float price, string proDesc, string proCaty) {
	proID = ID;
	proName = pName;
	price = price;
	proDesc = proDesc;
	proCaty = proCaty;

}

void product::updateProductDetails()
{
	cout << "Update product details" << endl;
}

void product::filterProducts()
{
	cout << "Filter products" << endl;
}

void product::checkProductAvailability()
{
	cout << "Check product availability" << endl;
}

product::~product()
{
	delete cus;
}
