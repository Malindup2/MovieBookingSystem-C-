#pragma once
#include<string>
using namespace std;
#include<iostream>
#include "user.h"
#include "Inquiry.h"
#include "Reservation.h"
#define SIZE 3

class Registered_User:public user
{
private:
	string customerID;
	string customerName;
	string email;
	string phone;
	string DOB;

	Inquiry* inq[SIZE];
	Reservation* res[SIZE];
	

public:
	Registered_User();
	Registered_User(string r_un, string r_pw, string id, string name, string mail, string telephone, string dob);
	void display();
	void checkfaq();
	void checkterms();
	void addReservation();
	void addInquiry();
	void cancelReservation();
	void editUserProfile();

	void addReservation(string resID, string movieid, string moviename, string customerid, string seatno, string generate);
	void displayReservation();
	void addInquiry(string inquiryid, string subject, string description);
	void displayInquiry();
	void editProfile(string name, string mail, string telephone, string dob);
	~Registered_User();
};

