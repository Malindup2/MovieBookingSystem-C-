
#include <iostream>
#include<cstring>
#include "Administrator.h"
#include "customerCareRepresentative.h"
#include "Facility.h"
#include "inquiry.h"
#include "Manager.h"
#include "Movie.h"
#include "Movie_Schedule.h"
#include "Registered_User.h"
#include "Report.h"
#include "Reservation.h"
#include "Ticket.h"
#include "user.h"
  
using namespace std;

int main()
{
	//create user
	Registered_User* ruser1 = new Registered_User("aml","aml123","ID1", "AmalPerera", "amal@gmail.com", "123456789", "01-10-1980");

	//display user details
	ruser1->display();

	cout << endl;

	//create a reservation (composition)
	Registered_User*  res;
	res = new Registered_User;
	res->addReservation("R001", "M01", "FAF", "C001", "Sf03", "10:30");

	//display movie (composition)
	res->displayReservation();

	cout << endl;

	//create movie
	void Movie_Schedule::addmovie(Movie * m1) {
		mov[0] = m1;
	}
	
	void Movie_Schedule::displayMovie() {

		mov[0]->displayMovie();
	}
	

	cout << endl;

	//create inquiry (composition)

	Registered_User* inq;
	inq = new Registered_User;
	inq->addInquiry("I001", "Ticket not issued", "i paid for the ticket but couldn't receive mail");

	//display inquiry (composition)
	inq->displayInquiry();

	cout << endl;
	//create facility
	Facility* fac1 = new Facility("F01", "Movie revieing", "good");

	//display facility
	fac1->displayfacility();

	cout << endl;
	//create ticket
	Ticket* tick01 = new Ticket("T001", "Rs500.00", "R031", "S04", "T002");

	//display ticket
	tick01->displayTicket();

	cout << endl;
	//create report
	Report* rep01 = new Report("R01", "Financial Analysis", "Company has been reach 20% out of profit greater than previous month");

	//display report
	rep01->displayReport();

	cout << endl;

	//create movie reservation by using movie schdeule (composition)

	Movie_Schedule* resv;

	resv = new Movie_Schedule();

	resv->addReservation("R001", "M002", "YOGO", "C02", "S023", "10:30");


	//display reservation (composition)
	resv->displayReservation();

	cout << endl;

	//create manager
	Manager* manag01 = new Manager("Mgr01","mgr345","M002","Kamal perera");

	//display manager
	manag01->displayManager();

	cout << endl;

	//create customer care representative
	customerCareRepresentative* cc01 = new customerCareRepresentative("CC01", "CC967", "C002", "Nishadi");

	//display customer care
	cc01->displaycustomerCareRepresentative();

	cout << endl;

	//create administrator
	Administrator* admn01 = new Administrator("admn@1", "ad35", "AD001", "Malindu");

	//display admin
	admn01->displayAdministrator();

	cout << endl;

	//deleting dynamicaly created objects

	delete ruser1;
	delete res;
	delete mov;
	delete inq;
	delete fac1;
	delete tick01;
	delete rep01;
	delete resv;
	delete manag01;
	delete cc01;
	delete admn01;


	return 0;
}

