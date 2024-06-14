#pragma once
#include<string>
using namespace std;
#include<iostream>
class Reservation
{
private:
	string reservationID;
	string movieID;
	string movieName;
	string customerID;
	string seatNo;
	string time;

public:
	Reservation();
	Reservation(string resID, string movieid, string moviename, string customerid, string seatno, string generate);
	void displayAvailability();
	void displayReservation();
	~Reservation();
};

