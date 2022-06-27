#include "CHardDrive.h"

HardDrive::HardDrive() : _size(0) {}

HardDrive::HardDrive(const int& size)
{
	SetSize(size);
}

HardDrive::HardDrive(const HardDrive& drive) : _size(drive._size) {}

int HardDrive::GetSize()
{
	return _size;
}

void HardDrive::SetSize(const int& size)
{
	if (size >= 0)
		_size = size;
	else
	{
		std::cerr << "Incorrect hard drive size!" << std::endl;
		exit(1);
	}
}

HardDrive& HardDrive::operator = (const HardDrive& drive)
{
	_size = drive._size;
	return *this;
}

HardDrive::operator std::string() const
{
	std::stringstream ss;
	ss << _size << "Mb";
	return ss.str();
}

std::ostream& operator << (std::ostream& out, const HardDrive& r)
{
	return out << (std::string)r;
}

std::istream& operator >> (std::istream& in, HardDrive& r)
{
	std::cout << "Input size(Mb): ";
	do
	{
		in >> r._size;
	} while (r._size < 0);
	return in;
}