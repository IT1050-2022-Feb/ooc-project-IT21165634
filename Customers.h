#pragma once
#include "registeredUser.h"
#include "product.h"
#include "Cart.h"
#include "Order.h"
constexpr auto SIZE2 = 100;

class product;
class Cart;
class Order;


class Customers :
    public registeredUser
{
private:
	int noOfProducts;
	product* products[SIZE2];
	Cart* cCart[2];
	Order* cOrder[2];

	

public:
	Customers();
	Customers(string re_name, string pw, int uID, string usName, string  number, string em, string add,int noOfpro);
	void addBuyProduct(product *pro);
	void displayBuyDatails();
	void checkProductAvailability();
	void creatCart();
	~Customers();
};

