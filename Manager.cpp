#include "Manager.h"
#include<iostream>
#include<cstring>
using namespace std;

Manager::Manager() {
	username = "";
	password = "";
	managerID ="";
	managerName ="";
}
Manager::Manager(string m_un, string m_pw, string mid, string  mname) :user(){
	username= m_un;
	password= m_pw;
	managerID= mid;
	managerName= mname;
}
void Manager::displayManager(){

	cout << "*****Display Manager Details*****" << endl;
	cout <<"Manager Id: " << managerID << endl;
	cout <<"manager name: " << managerName << endl;
}

void Manager::addfacility(string fid, string fdes, string  fstatus) {

	fac[0] = new Facility(fid, fdes, fstatus);

}
void Manager::displayfacility() {

	fac[0]->displayfacility();
}

//delete manager but facility exist(aggregation)
Manager::~Manager() {
	cout << "manager delete"<<endl;
}
