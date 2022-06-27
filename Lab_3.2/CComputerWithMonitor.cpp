#include "CComputerWithMonitor.h"

void ComputerWithMonitor::SetDiagonal(const int& value)
{
	if (value >= 0)
		_diagonal = value;
	else
	{
		std::cerr << "Incorrect diagonal!" << std::endl;
		exit(1);
	}
}

ComputerWithMonitor::ComputerWithMonitor()
	: Computer(), _diagonal(0)
{}

ComputerWithMonitor::ComputerWithMonitor(const int& size, const char* brand, const int& price, const int& diagonal)
	: Computer(size, brand, price)
{
	SetDiagonal(diagonal);
}

ComputerWithMonitor::ComputerWithMonitor(const ComputerWithMonitor& v)
	: Computer(v), _diagonal(v._diagonal)
{}

ComputerWithMonitor& ComputerWithMonitor::operator = (const ComputerWithMonitor& n)
{
	Computer::operator = (n);
	_diagonal = n._diagonal;
	return *this;
}

ComputerWithMonitor::operator std::string() const
{
	std::stringstream ss;
	ss << (Computer)*this << std::endl;
	ss << "Diagonal = " << _diagonal;
	return ss.str();
}

std::ostream& operator <<(std::ostream& out, const ComputerWithMonitor& s)
{
	return out << std::string(s);
}

std::istream& operator >> (std::istream& in, ComputerWithMonitor& s)
{
	in >> (Computer&)s;
	std::cout << "Diagonal = ";
	do
	{
		in >> s._diagonal;
	} while (s._diagonal < 0);
	return in;
}