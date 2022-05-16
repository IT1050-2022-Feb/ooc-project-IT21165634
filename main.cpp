#include <iostream>
#include "user.h"
#include "registeredUser.h"
#include "Customers.h"
#include "shop.h"
#include "adStaff.h"
#include "product.h"
#include "Suppliers.h"
#include "Order.h"
#include "PaymentDetails.h"
#include "Report.h"
#define SIZE 21

int main()
{
	user* guest = new Customers(); // Creating object in Customers
	registeredUser* reCus = new Customers();// Creating object in Customers
	registeredUser* reShop = new shop(); // Creating object in shop
	registeredUser* Staff = new adStaff();// Creating object in adStaff

	shop* shp = new shop(); // Creating object in shop
	
	Customers* cus = new Customers(); // Creating object in Customers
	product* pro1 = new product(); // Creating object in product
	adStaff* staff = new adStaff(); // Creating object in adStaff
	
	Suppliers* sup = new Suppliers();// Creating object in Suppliers

	Order* cusOrd = new Order(); // Creating object in Order
	PaymentDetails* pay = new PaymentDetails(); // Creating object in PaymentDetails
	Cart* cCart = new Cart();  // Creating object in Cart

	Report* reportAll = new Report(); // Creating object in Report


	// call functions
	guest->registration();
	guest->dispalydatails();


	cout << endl;
	cout << "\t-Customer-\n";
	reCus->login();
	reCus->displaydtails();
	cout << endl;

	cout << "\t-Shop-\n";
	reShop->login();
	reShop->displaydtails();
	cout << endl;

	cout << "\t-Staff-\n";
	Staff->login();
	Staff->displaydtails();
	cout << endl;

	shp->manageProduct();
	shp->buyProducts(pro1, sup);

	cout << endl;

	sup->supplyProducts(shp);

	cout << endl;

	staff->manageProduct(pro1);

	cout << endl;

	cus->checkProductAvailability();
	pro1->filterProducts();
	cus->addBuyProduct(pro1);
	cus->displayBuyDatails();

	cout << endl;

	cus->creatCart();
	cCart->displaydetails();
	cusOrd->addCart(cCart);

	cout << endl;
	
	
	cusOrd->displayOrderdatils();
	pay->dispalyPaydetails();

	cout << endl;
	
	reportAll->OrderDetailsReport();
	reportAll->PaymentDetailsReport();

	// delete dynamic objects
	delete guest; 
	delete reCus; 
	delete reShop; 
	delete Staff; 
	delete shp; 
	delete cus; 
	delete pro1; 
	delete staff; 
	delete sup; 
	delete cusOrd; 
	delete pay; 
	delete cCart; 
	delete reportAll; 

	return 0;


}