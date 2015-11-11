#include <iostream>	
#include <string>
#include <vector>

#include "Student.h"

using namespace std;

void setup ()
{
	int totalSubjects = 0;			//total number of subjects
	vector<string> subjectNames;	//store subject names
	string inputString;					//used as an input to add to vectors strings
	vector<int> numTeachersSubject;		//store number of teachers per subject
	int inputInt;						//input for vector ints
	int iterator = 0;								//iterator 
	vector<vector<string> > teacherNames;	//2D vector to store teacher Names for each subject[i]
	vector<string> subjectTeacherNames;		//stores all teacher names for one subject

	cout << "How many subjects are there total?" << endl;
	cin >> totalSubjects;
	int tempTotalSubjects = totalSubjects;

	while (tempTotalSubjects > 0) {
		cout << "Please enter a subject name" << endl;
		cin >> inputString;
		subjectNames.push_back(inputString);

		cout << "How many teachers teach this subject?" << endl;
		cin >> inputInt;
		numTeachersSubject.push_back(inputInt);
		int tempNumTeachersSubject = numTeachersSubject[iterator];

		while (tempNumTeachersSubject > 0) {
			cout << "Please input the name of a teacher" << endl;
			cin >> inputString;
			subjectTeacherNames.push_back(inputString);
			tempNumTeachersSubject--;
		}
		teacherNames.push_back(subjectTeacherNames);	//stores the teacher names for that subject into the 2D vector
		iterator++;
		tempTotalSubjects--;
	}
	for (int i = 0; i < teacherNames.size(); i++) {
		for (int j = 0; j<teacherNames[i].size(); j++)
			cout << teacherNames[i][j] << " ";
		cout << endl;
	}
}


int main()
{
/*	Student Student_1;

	Student_1.setName();
	Student_1.setSubjects();

	cout << endl << "Student Name: " << Student_1.getName() << endl;

	vector<string> tempVector = Student_1.getSubjects();

	for (int i = 0; i < tempVector.size(); ++i)
		cout << tempVector[i] << endl;
		*/
//	setup();
	int totalSubjects;

	cout << "How many subjects are there total?" << endl;
	cin >> totalSubjects;
	int tempTotalSubjects = totalSubjects;
	totalSubjects--;
	cout << totalSubjects << endl;

	cout << "Press any key and enter to end" << endl;
	int x = 0;
	cin >> x;
	return 0;
}