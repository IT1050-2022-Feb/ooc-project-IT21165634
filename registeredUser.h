#pragma once
#include "user.h"

class registeredUser :
    public user
{
protected:
	string user_name;
	string password;

public:
	registeredUser();
	registeredUser(string re_name, string pw, int uID, string usName, string  number, string em, string add);
	void login();
	void logout();
	void displaydtails();
	~registeredUser();
};

