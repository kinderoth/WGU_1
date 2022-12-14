#include <iostream>
#include "roster.h"
#include "student.h"
#include "degree.h"
using namespace std;

int main() {
	
	// Print out course title, programming langue, WGU tudent ID and name. Section F1

	cout << "Scripting and Programming - Applications - C867\n";
	cout << "Programing Language: C++\n";
	cout << "WGU Student ID: 001574781\n";
	cout << "Author: Alex Fair\n";

	// Add each student to classRoster
	//use the provided data
	const string studentData[] =
	{ 
		"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", 
		"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", 
		"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", 
		"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", 
		//Add my own info
		"A5,Alex,Fair,afair26@wgu.edu,29,42,25,18,SOFTWARE"
	};
	// size of table for parsing?
	const int stuDataTable = 5;

	// Make empty Roster instance called classRoster using default constructor
	Roster classRoster(stuDataTable);

	//parse
	for (int i = 0; i < stuDataTable; ++i) 
	{	
		//Debug Code
		//cout << i << "\n";
		classRoster.parse(studentData[i]);
	}

	// print out all students
	cout << "\n Showing all students: \n";
	classRoster.printAll();
	cout << "\n";

	// Print invalid emails
	classRoster.printInvalidEmails();
	cout << "\n";

	// Print each student's average days in course
	cout << "Showing average days per class: \n";
		for (int i = 0; i < stuDataTable; ++i) 
		{
			classRoster.printAverageDaysInCourse(classRoster.classRosterArray[i]->getStudentID()); // FIX ME
		}
	cout << "\n";

	// Print students in software degree
	//cout << "Showing students in the Software program \n";
	classRoster.printByDegreeProgram(SOFTWARE);
	cout << "\n";

	// Remove student A3
	//cout << "Removing student A3 \n";
	classRoster.remove("A3");
	cout << "\n";

	// Print all students
	cout << "Showing all students: \n";
	classRoster.printAll();
	cout << "\n";

	// Remove student A3. - should throw an error. "Student with 'ID' was not found" or something like that
	cout << "Removing student A3 \n";
	classRoster.remove("A3");
	cout << "\n";

	// Deconsturctor to clear memeory 
	classRoster.~Roster();

	cout << "press enter to exit";
	cin.ignore();
}