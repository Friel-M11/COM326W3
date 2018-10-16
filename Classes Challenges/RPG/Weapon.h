#pragma once

#include <iostream>
#include <string>

class Weapon
{
private:
	std::string type_;
	int damage_;
	int level_;
public:
	Weapon();
	Weapon(std::string type, int damage, int level);
	~Weapon();

	void SetType(std::string);
	std::string SetType()const;

	void SetDamage(int damage);
	int SetDamage()const;

	void SetLevel(int level);
	int SetLevel()const;
};

