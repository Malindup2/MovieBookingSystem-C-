#include "customerCareRepresentative.h"
#include<iostream>
#include<cstring>
using namespace std;

customerCareRepresentative::customerCareRepresentative() {

customercareID ="";
customercareName= "";
}
customerCareRepresentative::customerCareRepresentative(string cun, string cpw, string cid, string cname) :user(){
	
	username=cun;
	password=cpw;
	customercareID=cid ;
	customercareName=cname;
}
void customerCareRepresentative::displaycustomerCareRepresentative() {
	cout << "*****Display customer care Details*****" << endl;
	cout <<"Customer care Id: " << customercareID << endl;
	cout <<"Customer care name: " << customercareName << endl;
}

//add inquiry
void customerCareRepresentative::addInq(string inqid, string  sub, string  des) {

	inq[0] = new Inquiry(inqid, sub, des);
}

//display inquiry 
void  customerCareRepresentative::displayInq() {
	inq[0]->displayInquiry();
}

//delete customercare but inquiry exist (aggregation)
customerCareRepresentative::~customerCareRepresentative() {

	cout << "customer care delete" << endl;
}
