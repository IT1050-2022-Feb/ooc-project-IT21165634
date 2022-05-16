#include "shop.h"
#include "product.h"


shop::shop() {
    pID[0] = new product();
    pID[1] = new product();
}


shop::shop(string re_name, string pw, int uID, string usName, string  number, string em, string add)
    :registeredUser(re_name, pw, uID, usName, number, em, add) {


}

void shop::manageProduct()
{
    cout << "Shops update product details " << endl;
    
}

void shop::buyProducts(product* buyID, Suppliers* sup)
{
    cout << "Shops buy product from suppliers" << endl;
}



shop::~shop() {

    for (int i = 0;i < SIZE1;i++) {
        delete pID[i];
    }

    for (int i = 0; i < SIZE6; i++) {
        delete supp[i];
    }
}
