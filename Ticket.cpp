#include "Ticket.h"
#include<iostream>
#include<cstring>
using namespace std;

Ticket::Ticket() {

	ticketID ="";
	charge= "";
	reservationID= "";
	seatNo ="";
	theaterID ="";

}

Ticket::Ticket (string tid, string  fee, string  resid, string place, string cinemaid) {

		ticketID=tid;
		charge= fee;
		reservationID= resid;
		seatNo=place;
		theaterID= cinemaid;

}
void Ticket::displayTicket() {

	cout << "*****Display Ticket Details*****" << endl;
	cout <<"Ticket Id: " << ticketID << endl;
	cout << "Charge: " <<charge << endl;
	cout <<"Reservation Id: "<<  reservationID << endl;
	cout <<"seat no: "  <<seatNo << endl;
	cout << "theater Id: "<< theaterID << endl;
}
Ticket::~Ticket() {

	cout << "ticket delete" << endl;
}
