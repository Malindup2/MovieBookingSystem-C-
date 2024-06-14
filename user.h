#pragma once
#include<string>
using namespace std;
#include<iostream>
class user
{
protected:
	string username;
	string password;
public:
	user();
	user(string un, string pw);
	void login();
	void validate();
	void display();
	~user();
};

