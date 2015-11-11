#include <iostream>	
#include <string>
#include <vector>

#include "Student.h"

using namespace std;

int main()
{
	Student Student_1;

	Student_1.setName();
	Student_1.setSubjects();

	cout << endl << "Student Name: " << Student_1.getName() << endl;

	vector<string> tempVector = Student_1.getSubjects();

	for (int i = 0; i < tempVector.size(); ++i)
		cout << tempVector[i] << endl;


	cout << "Press any key and enter to end" << endl;
	int x = 0;
	cin >> x;
	return 0;
}