#include "CComputer.h"

void Computer::SetPrice(const int& value)
{
	if (value >= 0)
		_price = value;
	else
	{
		std::cerr << "Incorrect price!" << std::endl;
		exit(1);
	}
}

Computer::Computer()
	: _hardDrive(0), _price(0), _brand(new char[0])
{}

Computer::Computer(const int& size, const char* brand, const int& price) : _hardDrive(size)
{
	SetPrice(price);
	SetBrand(brand);
}

Computer::Computer(const Computer& v)
{
	*this = v;
}

Computer& Computer::operator = (const Computer& v)
{
	_hardDrive = v._hardDrive;
	//_brand = v._brand;
	delete[] _brand;
	SetBrand(v._brand);
	_price = v._price;
	return *this;
}

Computer::operator std::string() const
{
	std::stringstream ss;
	ss << "Hrad drive = " << GetHardDrive() << std::endl;
	ss << "Brand = " << GetBrand() << std::endl;
	ss << "Price = " << GetPrice();
	return ss.str();
}

std::ostream& operator <<(std::ostream& out, const Computer& s)
{
	return out << std::string(s);
}

std::istream& operator >>(std::istream& in, Computer& s)
{
	std::string brand;
	int price;
	std::cout << "Size = " << std::endl;
	in >> s._hardDrive;
	std::cout << "Brand = ";
	in >> brand;
	std::cout << "Price = ";
	do
	{
		in >> s._price;
	} while (s._price < 0);
	return in;
}