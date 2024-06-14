#include "user.h"
#include "Registered_User.h"
#include "Reservation.h"
#include "Inquiry.h"
#include<cstring>
#include<iostream>
#include<vector>



using namespace std;

//default constructor
Registered_User::Registered_User() {

	username = "";
	password = "";
	customerID= "";
	customerName= "";
	email= "";
	phone= "";
	DOB= "";

}

//parametered constructor  
Registered_User::Registered_User (string r_un,string r_pw, string id, string  name, string   mail, string   telephone, string   dob):user(username,password)  {

	username = r_un;
	password = r_pw;
	customerID= id;
	customerName=name;
	email=mail;
	phone=telephone;
	DOB=dob;

}

//display

void Registered_User::display() {

	cout << "*****Display Registered user Details*****" << endl;

	cout <<"Customer Id: " << customerID << endl;
	cout <<"Customer name: " << customerName << endl;
	cout <<"email: " << email << endl;
	cout <<"phone: " << phone << endl;
	cout <<"DOB: " << DOB << endl;
}
void Registered_User::checkfaq() {

}
void Registered_User::checkterms() {

}
void Registered_User::addReservation() {

}
void Registered_User::addInquiry() {

}
void Registered_User::cancelReservation() {

}//default



void Registered_User::editUserProfile() {


}//default


//reservation add
void Registered_User::addReservation(string resID, string movieid, string  moviename, string customerid, string  seatno, string  generate) {

	res[0] = new Reservation(resID, movieid, moviename, customerid, seatno, generate);
}



//display reservation

void Registered_User::displayReservation() {

	res[0]->displayReservation();
}


//inquiry add

void Registered_User::addInquiry(string inquiryid, string  subject, string  description) {

	inq[0] = new Inquiry(inquiryid, subject, description);
}




// edit user 

void Registered_User::editProfile(string  name, string  mail, string telephone, string  dob) {


}

//display inquiry

void Registered_User::displayInquiry() {

	inq[0]->displayInquiry();
}



// registered user delete also delete inquries with it (composition)

Registered_User::~Registered_User() {

	cout << "user delete" << endl;


	for (int i = 0; i <= SIZE; ++i) {


		delete this->res[i];
		delete this->inq[i];
	}

	cout << "delete inquries and reservations" << endl;

	
}
