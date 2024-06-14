#pragma once
#include<string>
using namespace std;
#include<iostream>
class Movie
{
private:
	string movieID;
	string movieName;
	string genre;
	string cast;
	string duration;

public:
	Movie();
	Movie(string movieid,string mname, string type, string role, string time);
	void displayMovie();
	~Movie();
};

