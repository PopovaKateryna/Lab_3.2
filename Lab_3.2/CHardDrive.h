#pragma once
#include <iostream>
#include <string>
#include <sstream>

class HardDrive
{
	int _size = 0;
public:

	HardDrive();
	HardDrive(const int& size);
	HardDrive(const HardDrive& drive);
	int GetSize();
	void SetSize(const int& size);
	HardDrive& operator = (const HardDrive& drive);
	operator std::string() const;

	friend std::ostream& operator << (std::ostream& out, const HardDrive& r);
	friend std::istream& operator >> (std::istream& in, HardDrive& r);
};
