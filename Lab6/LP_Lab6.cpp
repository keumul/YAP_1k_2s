#include <iostream>
using namespace std;

typedef unsigned char day;
typedef unsigned char month;
typedef unsigned short year;

// ЗАДАНИЕ 1
struct Date
{
	day dd;
	month mm;
	year yyyy;
};

bool operator<(Date a, Date b)
{
	bool rc = { a.dd < b.dd };
	rc = { a.mm < b.mm };
	rc = { a.yyyy < b.yyyy };
	return rc;
}

bool operator>(Date a, Date b) {
	bool rc = { a.dd > b.dd };
	rc = { a.mm > b.mm };
	rc = { a.yyyy > b.yyyy };
	return rc;
}

bool operator==(Date a, Date b) {
	bool rc = { a.dd == b.dd };
	rc = { a.mm == b.mm };
	rc = { a.yyyy == b.yyyy };
	return rc;
}

// ЗАДАНИЕ 2

typedef string discipline;
typedef string control_form;
typedef unsigned short max_score;

struct Knowledge
{
	discipline disc;
	control_form contr;
	max_score max;
};

bool operator<(Knowledge a, Knowledge b)
{
	bool rc = { a.max < b.max };
	return rc;
}

bool operator==(Knowledge a, Knowledge b)
{
	bool rc = { a.contr == b.contr };
	return rc;
}

int main()
{
	setlocale(LC_CTYPE, "Russian");

// ЗАДАНИЕ 1

	cout<<"1 задание: "<<endl;

	Date date1 = {8, 8, 1999};
	Date date3 = {8, 8, 1999};
	Date date2 = {28, 5, 2000};

	if (date1 < date2)
	{ cout << "истина" << endl; }
	else 
	{ cout << "ложь" << endl; }
	
	if (date1 > date2)
	{ cout << "истина" << endl; }
	else
	{ cout << "ложь" << endl; }

	if (date1 == date2)
	{ cout << "истина" << endl; }
	else
	{ cout << "ложь" << endl; }

	if (date1 == date3)
	{ cout << "истина" << endl; }
	else
	{ cout << "ложь" << endl; }

// ЗАДАНИЕ 2
	
	cout << "2 задание: " << endl;

	Knowledge control1 = { "physics", "test", 95 };
	Knowledge control2 = { "mathmatic", "test", 100 };

	if (control1 == control2)
	{
		cout << "По физике и математике пройдет одинаковая форма контроля." << endl;
	}
	else
	{
		cout << "По физике и математике пройдут разные формы контроля." << endl;
	}


	if (control1 < control2)
	{
		cout << "Вам нужно набрать меньше баллов по физике, чем по математике, чтобы получить максимальную оценку." << endl;
	}
	else if (control2 < control1)
	{
		cout << "Вам нужно набрать больше баллов по физике, чем по математике, чтобы получить максимальную оценку." << endl;
	}
	else cout << "Вам нужно набрать одинаковое кол-во баллов и по физике, и по математике, чтобы получить максимальную оценку." << endl;
	return 0;
}