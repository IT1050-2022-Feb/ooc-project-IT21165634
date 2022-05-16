#pragma once
#include "registeredUser.h"
#include "product.h"
#define SIZE4 25


class adStaff :
    public registeredUser
{
private:
	product* managePto[SIZE4];

public:
	adStaff();
	adStaff(string re_name, string pw, int uID, string usName, string  number, string em, string add);
	void manageProduct(product* mpro);
	~adStaff();
};

