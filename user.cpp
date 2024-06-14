#include "user.h"
#include<iostream>
#include<cstring>
using namespace std;

user::user() {

	username= "";
	password= "";
}
user::user(string un, string pw) {

	username= un;
	password=pw;
}

void user::display() {

	cout << "*****Display user Details*****" << endl;

	cout << username <<endl<< password <<endl;
}

void user::validate() {

}

void user::login() {

}

user::~user() {

	cout << "deleting user" << endl;
}