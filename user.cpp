#include "user.h"
#include <iostream>
#include <string>
using namespace std;


user::user() {
	int userID = 0;
	string Name = "";
	string phoneNumber = "";
	string email = "";
	string address = "";
}

user::user(int uID, string usName, string  number, string em, string add) {
	userID = uID;
	Name = usName;
	phoneNumber = number;
	email = em;
	address = add;
}

void user::dispalydatails() {
	cout << "Display details of user" << endl;
}

void user::registration() {
	cout << "User register to the system" << endl;
}

user::~user() {
	//destructor is runing
}
