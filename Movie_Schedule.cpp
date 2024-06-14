#include "Movie_Schedule.h"
#include "Reservation.h"
#include<iostream>
#include<cstring>
using namespace std;

Movie_Schedule::Movie_Schedule() {
	movieID = "";
	theaterID = "";
	time = "";
	language = "";
}

Movie_Schedule::Movie_Schedule( string mid,  string tid,  string start,  string lang) {

	movieID= mid;
	theaterID =tid;
	time=start;
	language=lang;
}
void Movie_Schedule::displayMovie_Schedule() {

	cout << "*****Display Movie schedule Details*****" << endl;
	cout <<"Movie Id: " << movieID << endl;
	cout <<"Theater Id: " << theaterID << endl;
	cout <<"Language: " << language << endl;
}

//create a reservation by using movie_schedule (composition)

void Movie_Schedule::addReservation(string resID, string movieid, string moviename, string customerid, string seatno, string generate) {

	resv[0] = new Reservation( resID,  movieid,  moviename,  customerid,  seatno,  generate);
	
}
//display reservation (composition)

void Movie_Schedule::displayReservation() {

	resv[0]->displayReservation();
}
//add movie


//add movie (aggregation)
void Movie_Schedule::addmovie(Movie *d1) {

	mov[0] = m1;
}
void Movie_Schedule::displayMovie() {

	mov[0]->displayMovie();
}

//delete movie_schedule and also delete movie reservation(composition), but exist movie(aggregation)

Movie_Schedule::~Movie_Schedule() {

	cout << "movie schedule delete" << endl;

	for (int i = 0;i < SIZE;i++) {

		delete resv[i];
	}

	cout << "movie reservations delete" << endl;
	
}
