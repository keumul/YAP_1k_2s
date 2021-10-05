#include "Varparm.h"
#include "Call.h"

using namespace std;

int defaultparm(int a, int b, int c, int d, int e, int f = 1, int g = 2)
{
	return (a + b + c + d + e + f + g) / 7;
}
int main()
{
	setlocale(LC_CTYPE, "Russian");
	
	cout << "Функция ivarparm: " << endl;
	cout << "1: 3 = " << Varparm::ivarparm(1, 3) << endl;
	cout << "2: 5*3 = " << Varparm::ivarparm(2, 5, 3) << endl;
	cout << "3: 2*4*6 = " << Varparm::ivarparm(3, 2, 4, 6) << endl;
	cout << "4: 1*2*1*3*1*4*1 = " << Varparm::ivarparm(7, 1, 2, 1, 3, 1, 4, 1) << endl << endl;

	cout << "Функция svarparm: " << endl;
	cout << "1: 3 = " << Varparm::svarparm(1, 3) << endl;
	cout << "2: 5*3 = " << Varparm::svarparm(2, 5, 3) << endl;
	cout << "3: 2*4*6 = " << Varparm::svarparm(3, 2, 4, 6) << endl;
	cout << "4: 1*2*1*3*1*4*1 = " << Varparm::svarparm(7, 1, 2, 1, 3, 1, 4, 1) << endl << endl;

	cout << "Функция fvarparm: " << endl;
	cout << "1: 1 = " << Varparm::fvarparm(1.0, FLT_MAX) << endl;
	cout << "2: 2+5 = " << Varparm::fvarparm(2.0, 5.0, FLT_MAX) << endl;
	cout << "3: 3+2+4 = " << Varparm::fvarparm(3.0, 2.0, 4.0, FLT_MAX) << endl;
	cout << "4: 7+1+2+1+3+1+4 = " << Varparm::fvarparm(7.0, 1.0, 2.0, 1.0, 3.0, 1.0, 4.0, FLT_MAX) << endl << endl;
	
	cout << "Функция dvarparm: " << endl;
	cout << "1: 1 = " << Varparm::dvarparm(1.0, DBL_MAX) << endl;
	cout << "2: 2+5 = " << Varparm::dvarparm(2.0, 5.0, DBL_MAX) << endl;
	cout << "3: 3+2+4 = " << Varparm::dvarparm(3.0, 2.0, 4.0, DBL_MAX) << endl;
	cout << "4: 7+1+2+1+3+1+4 = " << Varparm::dvarparm(7.0, 1.0, 2.0, 1.0, 3.0, 1.0, 4.0, DBL_MAX) << endl << endl;
	
	int a = 1, b = 2, c = 3;
	cout << "Функция cdevl: " << Call::cdevl(a, b, c) << endl;
	cout << "Функция cstd: " << Call::cstd(a, 2, 3) << endl;
	cout << "Функция cfst: " << Call::cfst(1, 2, 3) << endl << endl;

	cout << "Функция defaultparm (среднее арифметическое параметров): " << defaultparm(2, 3, 4, 5, 6, 7, 8) << endl << endl;

	system("pause");
	return 0;
}
