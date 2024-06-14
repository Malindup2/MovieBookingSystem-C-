#pragma once
#include<string>
#include"Reservation.h"
#include "Movie.h"
using namespace std;
#include<iostream>
#define SIZE 3

class Movie_Schedule
{
private:
	string movieID;
	string theaterID;
	string time;
	string language;

	Reservation* resv[SIZE];
	Movie* mov[SIZE];

public:
	Movie_Schedule();
	Movie_Schedule( string mid,  string tid,  string start,  string lang);
	void displayMovie_Schedule();
	void addReservation(string resID, string movieid, string moviename, string customerid, string seatno, string generate);
	void displayReservation();
	void addmovie(string movieid, string mname, string  type, string  role, string  time);
	void displayMovie();
	
	~Movie_Schedule();
};

