#include "timetable.h"

Timetable::Timetable() {	//null values

}

Timetable::Timetable(string group, vector<string> teacher, vector<string> subject) {	
	newGroup = group;
	newTeacher = teacher;
	newSubject = subject;
}

Timetable::~Timetable() {

}

string Timetable::getGroup() const {
	return newGroup;
}

vector<string> Timetable::getTeacher() const {
	return newTeacher;
}

vector<string> Timetable::getSubject() const {
	return newSubject;
}

void Timetable::setGroup() {
	 string GroupName;
}

void Timetable::setTeacher() {
	vector<string> Teachers;

}

void Timetable::setSubject() {
	vector<string> Subjects;
}