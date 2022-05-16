#include "registeredUser.h"


registeredUser::registeredUser() {
	string user_name = "";
	string password = "";
}


registeredUser::registeredUser(string re_name, string pw, int uID, string usName, string  number, string em, string add)
	:user(uID, usName, number, em, add)
{

	user_name = re_name;
	password = pw;
}

void registeredUser::login() {
	cout << "Login to system" << endl;
}

void registeredUser::logout() {
	cout << "Logout system" << endl;
}

void registeredUser::displaydtails() {
	cout << "Display detials of registered user" << endl;
}

registeredUser::~registeredUser() {
	////destructor is runing
}
