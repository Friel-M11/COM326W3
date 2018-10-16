/*
* Student.cpp
*
* Version information v0.1
* Author: Dr. Shane Wilson
* Date: 8/10/2017
* Description: Class definition .cpp file for the Student Class
* Copyright notice
*/

#include "Student.h"

//Default constuctor
//Note how we use the scope resolution operator ::
//We do that to specify which class the member functions belong to
//Class_Name::Member_Function
Student::Student() {}

//This constructor creates and initialises it by copying the data from each variable
//into the specified data member. We use an initializer list but we could also initialize each
//variable by using assignment statements in the main body of the function
Student::Student(std::string name, std::string registration, std::string course, int yearofStudy,
	int moduleMark1, int moduleMark2, int moduleMark3) : name_{ name }, registrstionID_{ registration }, course_{ course},
	yearofStudy_{ yearofStudy}, moduleOneMark_{ moduleMark1 }, moduleTwoMark_{ moduleMark2 }, moduleThreeMark_{ moduleMark3 }
{
	//we could assign the values of the parameters to the data members like this
	//name_ = name;
};


//Getters and setters
void Student::SetName(std::string name) {
	name_ = name;
}
//Make getters const so that it tells the compiler to complain if we accidentlly 
//try to change a data member 
std::string Student::GetName() const {
	return name_;
}

void Student::SetRegistrationID(std::string registrstionID) {
	registrstionID_ = registrstionID;
}
std::string Student::GetRegistrationID() const {
	return registrstionID_;
}

void Student::SetCourse(std::string course) {
	course_ = course;
}
std::string Student::GetCourse() const {
	return course_;
}

void Student::SetYearofStudy(int year) {
	yearofStudy_ = year;
}
int Student::GetYearofStudy() const {
	return yearofStudy_;
}

void Student::SetModuleOneMark(int mark) {
	moduleOneMark_ = mark;
}
int Student::GetModuleOneMark() const {
	return moduleOneMark_;
}

void Student::SetModuleTwoMark(int mark) {
	moduleTwoMark_ = mark;
}
int Student::GetModuleTwoMark() const {
	return moduleTwoMark_;
}

void Student::SetModuleThreeMark(int mark) {
	moduleThreeMark_ = mark;
}
int Student::GetModuleThreeMark() const {
	return moduleThreeMark_;
}

void Student::ToString() const {
	std::string output = name_ + " " + registrstionID_ + " " + course_ + " " + std::to_string(yearofStudy_) + " "
		+ std::to_string(moduleOneMark_) + " " + std::to_string(moduleTwoMark_) + " " + std::to_string(moduleThreeMark_) + "\n";
	//+yearofStudy_ + " " + moduleOneMark_ + " "	+ moduleTwoMark_ + " " + moduleThreeMark_;
	std::cout << output;
}

std::string Student::CalculateClassification() const {

	int average;

	average = (moduleOneMark_ + moduleTwoMark_ + moduleThreeMark_) / 3;
	if (average < 40) {
		return "fail";
	}
	else if (average >= 40 && average <= 49) {
		return "3rd class";
	}
	else if (average >= 50 && average <= 59) {
		return "2nd class";
	}
	else if (average >= 60 && average <= 69) {
		return "2-1";
	}
	else
		return "1st class";

}


//Declarw an array of type int 
//Compile knows we need 5 ints of size 4 bytes so 20 bytes in total
int numbers[5];
numbers[0] = 0;
numbers[1] = 10;
numbers[2] = 20;
numbers[3] = 30;
numbers[4] = 40;

//or initialise them using an initialiser list

float numbers2[5]{ 30.2f, 43.5f, 76.4f, 32.9f, 12.1f };
//what happens if we forget to give 5 values? - missing elements are value initialised

int numbers[5];
int index;

for (index = 0; index < 5; index++) {
	cout << "\nPlease enter number " << index + 1 << " : ";
	cin >> numbers[index];
}


/////

//use the sizeof() to get the size of the array in bytes

//Calculate the size of the array
//cout << "The size of the array is " << sizeof(numbers)/ GetSize(numbers);
int arraysize = sizeof(numbers) / sizeof(numbers[0]);
cout << "The size of the array is " << arraysize;


