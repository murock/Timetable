#include "Student.h"

Student::Student() {	//access Student class using '::'
	//set null values strings are already set in the string header file
}

Student::Student(string name, vector<string> subjects) {
	newName = name;
	newSubjects = subjects;
}

Student::~Student() {

}

string Student::getName() const {
	return newName;
}

vector<string> Student::getSubjects() const {
	return newSubjects;
}


void Student::setName() {
	string studentName;
	cout << "Enter your name: " << endl;
	cin >> studentName;
	newName = studentName;
}

void Student::setSubjects() {
	vector<string> studentSubjects;
	string tempSubjects;
	for (int i = 0; i < 3; ++i ) {
		cout << "Enter a Class you take" << endl;
		cin >> tempSubjects;
		studentSubjects.push_back(tempSubjects);
	}
	newSubjects = studentSubjects;
}