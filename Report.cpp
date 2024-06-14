#include "Report.h"
#include<iostream>
#include<cstring>
using namespace std;

Report::Report() {
	reportID ="";
	reportname= "";
	description ="";
}
Report::Report(string rid, string rname, string rdes) {
	reportID =rid;
	reportname= rname;
	description =rdes;
}
void Report::displayReport() {

	cout << "*****Display Report Details*****" << endl;
	cout <<"Report Id: "<<  reportID << endl;
	cout << "Report Name: " <<reportname << endl;
	cout <<"Report description: "<<  description << endl;
}
Report::~Report() {
	cout << "report delete" <<endl;
}
