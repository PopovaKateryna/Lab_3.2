#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include "CHardDrive.h"

class Computer
{
	HardDrive _hardDrive;
	//std::string _brand;
	char* _brand;
	int _price;
public:

	HardDrive GetHardDrive() const { return _hardDrive; }
	char* GetBrand() const { return _brand; }
	int GetPrice() const { return _price; }

	void SetHardDrive(const HardDrive& value) { _hardDrive = value; }
	void SetBrand(const char* value) { strcpy(_brand, value); }
	void SetPrice(const int& value);

	Computer();
	~Computer() { delete[] _brand; }
	Computer(const int& size, const char* brand, const int& price);
	Computer(const  Computer& s);

	Computer& operator = (const  Computer& s);
	operator std::string() const;

	friend std::ostream& operator << (std::ostream& out, const  Computer& s);
	friend std::istream& operator >> (std::istream& in, Computer& s);
};