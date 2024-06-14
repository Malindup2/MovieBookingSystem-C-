#pragma once
#include<string>
using namespace std;
#include<iostream>
class Inquiry
{
private:
	string inquiryID;
	string subject;
	string description;

public:
	Inquiry();
	Inquiry(string inqid, string sub, string des);
	void displayInquiry();
	~Inquiry();
};

