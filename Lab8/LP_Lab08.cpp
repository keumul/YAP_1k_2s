
#include"../../../7lab/Lab7/Lab7/Dictionary.h"
#include "../../../7lab/Lab7/Lab7/stdafx.h"

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	try
	{
#if (defined (TEST1)+defined (TEST2)+defined (TEST3)+defined (TEST4)+defined (TEST5)+defined (TEST6)+defined (TEST7)+defined (TEST8)+defined (TEST9 ) + defined(TEST_DICTIONARY) > 1)
#error USE_ONLY_ONE_TEST
#endif // only one test

#ifdef TEST1 //THROW1 "Create: превышен размер имени словаря"
		Instance test = Create((char*)"ABBASABSBAASADSSASDSDSDDSDBSB", 5);
#endif // TEST_CREATE_1

#ifdef TEST2 //THROW2 "Create: превышен размер максимальной ёмкости словаря"
		Instance test = Create((char*)"TEST", 200);
#endif // TEST_CREATE_2

#ifdef TEST3 //THROW3 "AddEntry: переполнение словаря"
		Instance test = Create((char*)"TEST", 0);
		Entry test0 = { 1,"проверка" };
		AddEntry(test, test0);
#endif // TEST_ADDENTRY_1

#ifdef TEST4 //THROW4 "AddEntry: дублирование идентификатора"
		Instance test = Create((char*)"TEST", 5);
		Entry test0 = { 1,"проверка" };
		AddEntry(test, test0);
		AddEntry(test, test0);
#endif // TEST_ADDENTRY_2

#ifdef TEST5 //THROW5 "GetEntry: не найден элемент"
		Instance test = Create((char*)"TEST", 5);
		Entry test0 = { 1,"проверка" };
		AddEntry(test, test0);
		GetEntry(test, 2);
#endif // TEST_GETENTRY_1

#ifdef TEST6 // THROW6 "DelEntry: не найден элемент"
		Instance test = Create((char*)"TEST", 5);
		Entry test0 = { 1,"проверка" };
		AddEntry(test, test0);
		DelEntry(test, 2);
#endif // TEST_DELENTRY_1

#ifdef TEST7 // THROW7 "UpdEntry: не найден элемент"
		Instance test7 = Create((char*)"TEST", 5);
		Entry test07 = { 1,"проверка" },
			test007 = { 2,"проверочка" };
		AddEntry(test7, test07);
		UpdEntry(test7, 3, test007);
#endif // TEST_UPDENTRY_1

#ifdef TEST8 // THROW8 "UpdEntry: дублирование идентификатора"
		Instance test = Create((char*)"TEST", 5);
		Entry test0 = { 1,"проверка" },
			test00 = { 1,"проверочка" };
		AddEntry(test, test0);
		UpdEntry(test, 1, test00);
#endif // TEST_UPDENTRY_1

#ifdef TEST_DICTIONARY
		Instance d1 = Create((char*)"Преподаватели", 5);
		Entry e1 = { 1,"Плиско" }, e2 = { 2,"Архипенко" }, e3 = { 3,"Колентионок" }, e4 = { 4, "Бабицкий" }, e5 = { 5, "Хадатович" };
		AddEntry(d1, e1);
		AddEntry(d1, e2);
		AddEntry(d1, e3);
		AddEntry(d1, e4);
		Entry getE = GetEntry(d1, 4);
		DelEntry(d1, 2);
		Entry newentry1 = { 6, "Иванов" };
		UpdEntry(d1, 3, newentry1);
		Print(d1);

		Instance d2 = Create((char*)"Студенты", 5);
		Entry s1 = { 1,"Мамаева" }, s2 = { 2,"Белашков" }, s3 = { 4,"Хлыстов" };
		AddEntry(d2, s1);
		AddEntry(d2, s2);
		AddEntry(d2, s3);
		Entry newentry3 = { 3, "Булавский" };
		UpdEntry(d2, 4, newentry3);
		Print(d2);
		Delete(d1);
		Delete(d2);
#endif // TEST_DICTIONARY
	}
	catch (char* e)
	{
		std::cout << e << std::endl;
	}
}