
//SapeginaEkatherina2003
//СапегинаЕкатерина2003
//Сапегина2003Katya

//для 1ой строки:   
// UTF-8 [53 61 70 65 67 69 6E 61 45 6B 61 74 68 65 72 69 6E 61 32 30 30 33]
// UTF-16 [0053 0061 0070 0065 0067 0069 006E 0061 0045 006B 0061 0074 0068 0065 0072 0069 006E 0061 0032 0030 0030 0033]
// Windows-1251 (CP1251) [53 61 70 65 67 69 6E 61 45 6B 61 74 68 65 72 69 6E 61 32 30 30 33]

//для 2ой строки:   
// UTF-8 [D0 A1 D0 B0 D0 BF D0 B5 D0 B3 D0 B8 D0 BD D0 B0 D0 95 D0 BA D0 B0 D1 82 D0 B5 D1 80 D0 B8 D0 BD D0 B0 32 30 30 33]
// UTF-16 [0421 0430 043F 0435 0433 0438 043D 0430 0415 043A 0430 0442 0435 0440 0438 043D 0430 0032 0030 0030 0033]
// Windows-1251 (CP1251) [D1 E0 EF E5 E3 E8 ED E0 C5 EA E0 F2 E5 F0 E7 ED E0 32 30 30 33]

//для 3ой строки:  
// UTF-8 [D0 A1 D0 B0 D0 BF D0 B5 D0 B3 D0 B8 D0 BD D0 B0 32 30 30 33 4B 61 74 79 61]
// UTF-16 [0421 0430 043F 0435 0433 0438 043D 0430 0032 0030 0030 0033 004B 0061 0074 0079 0061]
// Windows-1251 (CP1251) [D1 E0 EF E5 E3 E8 ED E0 32 30 30 33 4B 61 74 79 61]

#include<iostream>
#include<cstdlib>
using namespace std;

char* UpperW1251(char* source, char* destination)
{
	int i, n = strlen(source);
	//*destination = ' ';
	for (i = 0; i < n; i++)
	{
		destination[i] = source[i];

		if ((destination[i] >= 'a' && destination[i] <= 'z' && destination[i] != '\0')
		  || destination[i] >= 'а' && destination[i] <= 'я' && destination[i] != '\0')
		{
			destination[i] -= 32;
		}
	}
	return destination;
}
int main()
{
	char a[] = "SapeginaEkatherina2003";
	char b[] = "СапегинаЕкатерина2003";
	char c[] = "Сапегина2003Katya";

	wchar_t Lla[] = L"SapeginaEkatherina2003";
	wchar_t Llb[] = L"СапегинаЕкатерина2003";
	wchar_t Llc[] = L"Сапегина2003Katya";
	
	///////////////////////////////////////////
	
	setlocale(LC_CTYPE, "Russian");

	char source[] = "12345мыльцеdove";
	char destination[] = "123456789098765";

	UpperW1251(source, destination);
	cout << destination << endl;
	cout << "Изначальный вид строки: " << source << endl;


	system("pause");
	return 0;
}
