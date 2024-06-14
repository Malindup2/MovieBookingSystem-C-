#pragma once
#include<string>
#include "user.h"
#include "facility.h"
using namespace std;
#include<iostream>
#define SIZE 3

class Manager:public user
{
private:
	string managerID;
	string managerName;

	Facility * fac[SIZE];

public:
	Manager();
	Manager(string m_un, string m_pw, string mid, string  mname);
	void displayManager();
	void addfacility(string fid, string fdes, string  fstatus);
	void displayfacility();
	~Manager();

};

