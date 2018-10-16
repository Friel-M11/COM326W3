/*
* HeartRates.h
*
* Version information v0.1
* Author: Dr. Shane Wilson
* Date: 11/10/2017
* Description: HeartRates class for computing target heart rates.
* Copyright notice
*/

#pragma once

#include <string>
#include <iostream>

class HeartRates
{
private:
	std::string firstName_;
	//std::string firstName__; // user's first name
	std::string lastName_; // user's last name
	int birthMonth_{ 0 }; // user's birth month
	int birthDay_{ 0 }; // user's birth day
	int birthYear_{ 0 }; // user's birth year
	int currentMonth_{ 0 }; // current month
	int currentDay_{ 0 }; // current day
	int currentyear_{ 0 }; // current year
public:

	//Default constructor
	HeartRates() {
		//Set detault values
		std::string firstName_; // user's first name
		std::string lastName_; // user's last name
		int birthMonth_{ 0 }; // user's birth month
		int birthDay_{ 0 }; // user's birth day
		int birthYear_{ 0 }; // user's birth year
		int currentMonth_{ 0 }; // current month
		int currentDay_{ 0 }; // current day
		int currentyear_{ 0 }; // current year
	}

	// Constructor
	HeartRates(std::string first, std::string last, int m, int d, int y)
		: firstName_{ first }, lastName_{ last }, birthMonth_{ m },
		birthDay_{ d }, birthYear_{ y } {
	}

	// set first name
	void SetfirstName(std::string first) {
		firstName_ = first;
	}

	// get first name
	std::string GetFirstName() const {
		return firstName_;
	}
	
	// set last name
	void SetLastName(std::string last) {
		lastName_ = last;
	}

	// get last name
	std::string GetLastName() const {
		return lastName_;
	}

	// set birth month
	void SetBirthMonth(int m) {
		birthMonth_ = m;
	}

	// get birth month
	int GetBirthMonth() const {
		return birthMonth_;
	}

	// set birth day
	void SetBirthDay(int d) {
		birthDay_ = d;
	}

	// get birth day
	int GetBirthDay() const {
		return birthDay_;
	}

	// set birth year
	void SetbirthYear(int y) {
		birthYear_ = y;
	}

	// get birth year
	int GetBirthYear() const {
		return birthYear_;
	}

	// calculate age
	int GetAge() {
		// if current date has not yet been set, get it from user
		if (0 == currentyear_) {
			std::cout << "Please enter today's month, day, and year: ";
			std::cin >> currentMonth_ >> currentDay_ >> currentyear_;
		}

		if (currentMonth_ < birthMonth_) {
			return currentyear_ - birthYear_ - 1;
		}
		else if (currentMonth_ == birthMonth_) {
			if (currentDay_ < birthDay_) {
				return currentyear_ - birthYear_ - 1;
			}
		}

		return currentyear_ - birthYear_;
	}

	// get maximum heart rate
	int GetMaximumHeartRate()  {
		return 220 - GetAge();
	}

	// calculate minimum target heart rate
	int GetMinimumTargetHeartRate() {
		return 50 * GetMaximumHeartRate() / 100;
	}

	// calculate maximum target heart rate
	int GetMaximumTargetHeartRate() {
		return 85 * GetMaximumHeartRate() / 100;
	}

};

