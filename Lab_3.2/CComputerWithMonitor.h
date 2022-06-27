#pragma once
#include "CComputer.h"
class ComputerWithMonitor : public Computer
{
	int _diagonal;
public:
	int GetDiagonal() const { return _diagonal; }
	void SetDiagonal(const int& value);

	ComputerWithMonitor();
	ComputerWithMonitor(const int& size, const char* brand, const int& price, const int& diagonal);
	ComputerWithMonitor(const ComputerWithMonitor& s);

	ComputerWithMonitor& operator = (const ComputerWithMonitor& s);
	operator std::string() const;

	friend std::ostream& operator << (std::ostream& out, const ComputerWithMonitor& s);
	friend std::istream& operator >> (std::istream& in, ComputerWithMonitor& s);
};