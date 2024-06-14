#pragma once
using namespace std;
#include<iostream>
class Facility
{
private:
	string facilityID;
	string description;
	string status;

public:

	Facility();
	~Facility();
	void displayfacility();
	Facility(string fid, string fdes, string fstatus);

};

