#pragma once
#include <string>
#include "product.h"
using namespace std;
#define SIZE7 100
class product;

class Cart
{
private:
	int cartID;
	string name;
	int noOfIteams;
	product* proNo[SIZE7];

public:
	Cart();
	Cart(int ID, string cName, int noPro);
	void displaydetails();
	void addProducts(product * pro);
	~Cart();
};