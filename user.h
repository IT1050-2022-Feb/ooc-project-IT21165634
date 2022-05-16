#pragma once
#include <iostream>
#include <string>
using namespace std;


class user
{
protected:
	int userID;
	string Name;
	string phoneNumber;
	string email;
	string address;


public:
	user();
	user(int uID, string usName, string  number, string em, string add);
	virtual void dispalydatails();
	void registration();

	~user();

};

