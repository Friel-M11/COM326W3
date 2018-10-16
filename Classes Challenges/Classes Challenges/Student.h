/*
* Student.h
*
* Version information
* Author: Dr. Shane Wilson
* Date: 08/10/2017
* Description: Class declaration header file for the Student Class
* Copyright notice
*/

#pragma once

#include <iostream>
#include <string>

class Student {

	//Priviate data members - we make them private so we can protect the data
	//This enforces encapsulation. We control access through the public member functions
private:
	std::string name_;
	std::string registrstionID_;
	std::string course_;
	int yearofStudy_;
	int moduleOneMark_;
	int moduleTwoMark_;
	int moduleThreeMark_;

public:
	//Public member functions

	//Our default constructor. This does nothing other than create an empty student object. 
	//There isn't any data in the student object
	Student();

	//Custom constructor. We use this to initialise the object with data we pass in
	Student(std::string name, std::string registration, std::string course, int yearofStudy,
		int moduleMark1, int moduleMark2, int moduleMark3);

	//Getters and setters for each member variable
	void SetName(std::string name);
	std::string GetName() const;

	void SetRegistrationID(std::string registrstionID);
	std::string GetRegistrationID() const;

	void SetCourse(std::string course);
	std::string GetCourse() const;

	void SetYearofStudy(int year);
	int GetYearofStudy() const;

	void SetModuleOneMark(int mark);
	int GetModuleOneMark() const;

	void SetModuleTwoMark(int mark);
	int GetModuleTwoMark() const;

	void SetModuleThreeMark(int mark);
	int GetModuleThreeMark() const;

	void ToString() const;

	std::string Student::CalculateClassification() const;

};