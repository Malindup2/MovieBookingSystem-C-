#include "Reservation.h"
#include "Registered_User.h"
#include<cstring>
#include<iostream>
using namespace std;

Reservation::Reservation() {

	reservationID, "";
	movieID= "";
	movieName="";
	customerID= "";
	seatNo= "";
	time= "";
}
Reservation::Reservation(string resID, string movieid, string moviename, string customerid, string seatno, string generate) {

	reservationID =resID;
	movieID= movieid;
	movieName=moviename;
	customerID=customerid;
	seatNo=seatno;
	time=generate;
}
void Reservation::displayAvailability() {

}
void Reservation::displayReservation() {


	cout << "*****Display Reservation Details*****" << endl;
	cout<< "Reservation Id: "<< reservationID <<endl;
	cout << "Movie Id: " <<movieID << endl;
	cout << "Movie name: " <<movieName << endl;
	cout << "Customer Id: "<< customerID<< endl;
	cout << "seat no: " <<seatNo << endl;
	cout << "time: " <<time<< endl;
}

Reservation::~Reservation() {

	cout << "deleting reservation" << endl;;
}
