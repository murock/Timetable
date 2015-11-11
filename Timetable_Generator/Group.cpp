#include "Group.h"

Group::Group() {	//access Group class using '::'
						//set null values strings are already set in the string header file
}

Group::Group(string name, vector<string> subjects) {
	newName = name;
	newSubjects = subjects;
}

Group::~Group() {

}

string Group::getName() const {
	return newName;
}

vector<string> Group::getSubjects() const {
	return newSubjects;
}


void Group::setName() {
	string GroupName;
	cout << "Enter your name: " << endl;
	cin >> GroupName;
	newName = GroupName;
}

void Group::setSubjects() {
	vector<string> GroupSubjects;
	string tempSubjects;
	for (int i = 0; i < 3; ++i) {
		cout << "Enter a Class you take" << endl;
		cin >> tempSubjects;
		GroupSubjects.push_back(tempSubjects);
	}
	newSubjects = GroupSubjects;
}