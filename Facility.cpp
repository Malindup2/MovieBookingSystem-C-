#include "Facility.h"
#include<iostream>
#include<cstring>
using namespace std;

Facility::Facility() {
	facilityID="";
	description = "";
	status= "";

}
Facility::Facility(string fid, string fdes, string  fstatus) {
	facilityID= fid;
	description= fdes;
	status= fstatus;

}
void Facility::displayfacility() {
	cout << "*****Display Facility Details*****" << endl;
	cout <<"Facility Id: " << facilityID << endl;
	cout <<"Facility description: " << description << endl;
	cout <<"Facility status: " << status << endl;

}
Facility::~Facility() {

	cout << "faciility delete"<<endl;
}

