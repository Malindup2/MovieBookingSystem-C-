#pragma once
#include<string>
using namespace std;
#include<iostream>
class Ticket
{
private:
	string ticketID;
	string charge;
	string reservationID;
	string seatNo;
	string theaterID;

public:
	Ticket();
	Ticket(string tid, string fee, string resid, string place, string cinemaid);
	void displayTicket();
	~Ticket();
};

