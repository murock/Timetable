#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef GROUP_H
#define GROUP_H

class Group {
public:
	Group();		// Default Constructor

	Group(string, vector<string>);	//Overload Constructor

	~Group();		//Destructor

					//Accessor Functions
	string getName() const;	//not going to be editing name just returns name of Group
	vector<string> getSubjects() const;

	//Mutator Functions
	void setName();	//sets name of Group
	void setSubjects();

private:		//can't be accessed by outside files, can't be changed elsewhere
	string newName;
	vector<string> newSubjects;
};

#endif