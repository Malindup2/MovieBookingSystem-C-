#pragma once
#include "user.h"
#include "Inquiry.h"
#include<string>
#define SIZE 3

class customerCareRepresentative:public user
{
private:
	string customercareID;
	string customercareName;
	Inquiry* inq[SIZE];
public:
	customerCareRepresentative();
	customerCareRepresentative(string cun, string cpw, string cid, string cname);
	void displaycustomerCareRepresentative();
	void addInq(string inqid, string  sub, string  des);
	void displayInq();
	~customerCareRepresentative();

};

