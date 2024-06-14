#include "Administrator.h"
#include<iostream>
#include<string>
using namespace std;

Administrator::Administrator() {
	username = "";
	password = "";
	adminID ="";
	adminName= "";
}
Administrator::Administrator(string a_un, string a_pw, string adminid, string adminname) :user(){
	
	username = a_un;
	password = a_pw;
	adminID= adminid;
	adminName= adminname;
	
}
void Administrator::displayAdministrator() {
	cout << "*****Display Administrator Details*****" << endl;
	cout <<"Admin Id: "<< adminID << endl;
	cout <<"Admin name: "<< adminName<< endl;
}
Administrator::~Administrator() {
	cout << "admin delete" << endl;
}
