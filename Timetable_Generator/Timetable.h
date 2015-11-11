#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef TIMETABLE_H
#define TIMETABLE_H

class Timetable {
public:
	Timetable();		// Default Constructor

	Timetable(string, vector<string>, vector<string>);	//Overload Constructor

	~Timetable();		//Destructor

					//Accessor Functions
	string getGroup() const;	//not going to be editing name just returns name of the groups
	vector<string> getSubject() const;
	vector<string> getTeacher() const;

	//Mutator Functions
	void setGroup();	//sets name of Timetable
	void setSubject();
	void setTeacher();

private:		//can't be accessed by outside files, can't be changed elsewhere
	string newGroup;
	vector<string> newSubject;
	vector<string> newTeacher;
};

#endif