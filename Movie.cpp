#include "Movie.h"
#include<iostream>
#include<cstring>
using namespace std;

Movie::Movie() {

	movieID= "";
	genre= "";
	cast= "";
	duration ="";
}
Movie::Movie(string movieid,string mname ,string  type, string  role, string  time) {

	movieID= movieid;
	movieName = mname;
	genre= type;
	cast= role;
	duration =time;

}
void Movie::displayMovie() {

	cout << "*****Display Movie Details*****" << endl;
	cout << "Movie Id: " << movieID << endl;
	cout <<"Movie Name: " << movieName << endl;
	cout <<"Genre: " << genre << endl;
	cout <<"Cast: " << cast << endl;
	cout <<"Duration: " << duration << endl;
}
Movie::~Movie() {

	cout << "Movie delete" << endl;
}