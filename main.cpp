
#include <iostream>
#include "roster.h"
using namespace std;

int main() {

	int numStudents = 5;
	//F1, course\name\ID\Language

	cout << "WGU C867\nShane Boyce\n003326518\nC++"<<endl;

	const string studentData[5] =
	{ "A1,John,Smith,John1989@gmail.com,20,30,35,40,SECURITY",
		"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
		"A3,Jack,Napoli,The_lawyer99@yahoo.com,19,20,40,33,SOFTWARE",
		"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
		"A5,Shane,Boyce,shboyce31@wgu.edu,28,19,20,40,SOFTWARE" };
	//F.2 and 3
	Roster* ros = new Roster(numStudents);
	for (int i = 0; i < numStudents; i++)
	{
		ros->parseThenAdd(studentData[i]);
	}
	//F.1
	cout << "-------------------------------------------------------" << endl;
	cout << "-------------------------------------------------------" << endl;
	cout << "-------------------------------------------------------" << endl;
	cout << "Course: Scripting and Programming - Applications - C867" <<
		endl;
	cout << "Language used: C++" << endl;
	cout << "Student ID: WGU C867" << endl;
	cout << "Student Name: Shane Boyce " << endl;
	cout << "-------------------------------------------------------" <<
		endl;
	cout << "-------------------------------------------------------" << endl;
	cout << "-------------------------------------------------------" << endl;
	cout << endl;
	//F.4
	cout << "Printing Roster: " << endl;
	ros->printAll();
	cout << "Done with printing roster" << endl;

	ros->printInvalidEmails();
	cout << "Done printing invalid emails" << endl;

	cout << "Displaying average days left in the course: " << endl;
	for (int i = 0; i < numStudents; i++) {
		ros->printAverageDaysInCourse(ros->getStudent(i)->getStudentID());
	}
	cout << "Done with displaying Avg. days in course" << endl;

	ros->printByDegreeProgram(DegreeProgram::SOFTWARE);
	cout << "Done print by degree Program" << endl;

	cout << "Remove student A3: " << endl;
	ros->remove("A3");
	cout << "Done" << endl;

	cout << "Printing Roster: " << endl;
	ros->printAll();
	cout << "Done printing Roster" << endl;

	cout << "Remove student A3: " << endl;
	ros->remove("A3");
	cout << "Done" << endl;
	
	system("pause");

	return 0;
}