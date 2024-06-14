#include "Inquiry.h"
#include<iostream>
#include<cstring>

using namespace std;

Inquiry::Inquiry() {
	inquiryID="";
	subject="";
	description= "";
}
Inquiry::Inquiry(string inqid, string  sub, string  des) {

	inquiryID= inqid;
	subject= sub;
	description= des;
}
void Inquiry::displayInquiry() {

	cout << "*****Display Inquiry Details*****" << endl;
	cout <<"inquiry Id: " << inquiryID << endl;
	cout <<" Subject: " << subject << endl;
	cout <<"description : " << description<< endl;
}
Inquiry::~Inquiry() {
	cout << "Inquiry delete" << endl;
}
