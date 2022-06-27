#include "CComputerWithMonitor.h"
using namespace std;

ComputerWithMonitor ReturnObj(ComputerWithMonitor c)
{
	return c;
}

int main()
{
	cout << "Characteristics of ComputerWithMonitor1:" << endl;
	ComputerWithMonitor N(180, "DELL", 6000, 10);
	cout << N << endl << endl;

	/*ComputerWithMonitor M;
	cin >> M;
	cout << "Characteristics of ComputerWithMonitor2:" << endl;
	cout << M << endl << endl;*/

	cout << "Characteristics of Computer:" << endl;
	Computer K(180, "ASER", 6000);
	cout << K << endl << endl;

	cout << "Characteristics of HardDrive:" << endl;
	HardDrive L(180);
	cout << L << endl << endl;

	cout << "Return Object" << endl;
	cout << ReturnObj(N) << endl << endl;

	cout << "Principle of substitution" << endl;
	K = N;
	cout << K << endl;
}