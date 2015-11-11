#pragma once
#include <iostream>
#include <string>
#include <vector>
 
using namespace std;

#ifndef STUDENT_H
#define STUDENT_H

class Student {
public:
	Student();		// Default Constructor

	Student(string, vector<string>);	//Overload Constructor

	~Student();		//Destructor
	
	//Accessor Functions
	string getName() const;	//not going to be editing name just returns name of student
	vector<string> getSubjects() const;

	//Mutator Functions
	void setName();	//sets name of student
	void setSubjects();

private:		//can't be accessed by outside files, can't be changed elsewhere
	string newName;
	vector<string> newSubjects;
};

#endif


