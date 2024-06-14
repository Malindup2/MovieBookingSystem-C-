#pragma once
#include "user.h"
#include<string>
class Administrator:public user
{
private:
	string adminID;
	string adminName;

public:
	Administrator();
	Administrator(string a_un, string a_pw, string adminid, string adminname);
	void displayAdministrator();
	~Administrator();
	

};

