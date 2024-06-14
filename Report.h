#pragma once
#include<string>
using namespace std;
#include<iostream>
class Report
{
private:
	string reportID;
	string reportname;
	string description;

public:
	Report();
	Report(string  rid, string rname, string rdes);
	void displayReport();
	~Report();
	

};

