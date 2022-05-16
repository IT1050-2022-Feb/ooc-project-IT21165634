#include "adStaff.h"

adStaff::adStaff() {
    //constcter is runing
}


adStaff::adStaff(string re_name, string pw, int uID, string usName, string  number, string em, string add)
    :registeredUser(re_name, pw, uID, usName, number, em, add) {

}

void adStaff::manageProduct(product* mpro)
{
    cout << "Administrator manage products " << endl;
}

adStaff::~adStaff() {
    
    for (int i = 0; i < SIZE4; i++) {
        delete  managePto[i];
    }
}
