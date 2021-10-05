//LP_Lab10 -in:D:\in.txt -out:D:\out.txt -log:D:\log.txt
//SapXeginXXa KaXXXte 2X0X0X3 А СаXXпXеXгXиXна КXXXатXXяX
//----------------------------------------------------------[ geterror | geterrorin ]----------------------------------------------------------------

//#include "stdafx.h"
//#include <iostream>
//#include <locale>
//#include <cwchar>
//
//int wmain(int argc, wchar_t* argv[])
//{
//	setlocale(LC_ALL, "rus");
//	
//	cout << "-----[ geterror ]-----" << endl << endl;
//	try { throw ERROR_THROW(100); }
//	catch (Error::ERROR e)
//	{ cout << "Ошибка" << e.id << ": " << e.message << endl << endl; };
//	
//	cout << "-----[ geterrorin ]-----" << endl << endl;
//	try { throw ERROR_THROW_IN(111, 7, 7); }
//	catch (Error::ERROR e)
//	{
//		cout << "Ошибка" << e.id << ": " << e.message
//			 << ", строка " << e.inext.line
//			 << ", позиция " << e.inext.col << endl << endl;
//	};
//	system("pause");
//	return 0;
//};

//----------------------------------------------------------------[ getparm ]-------------------------------------------------------------------------

//#include "stdafx.h"
//#include <cwchar>
//
//int wmain(int argc, wchar_t* argv[])
//{
//	setlocale(LC_ALL, "rus");
//	cout << "-----[ getparm ]-----" << endl << endl;
//	try 
//	{
//		Parm::PARM parm = Parm::getparm(argc, argv);
//		wcout << "-in:" << parm.in << ", -out:" << parm.out << ", -log:" << parm.log << endl << endl;
//	}
//	catch (Error::ERROR e)
//	{
//		cout << "Ошибка" << e.id << ": " << e.message << endl << endl;
//	};
//
//	system("pause");
//	return 0;
//};

//---------------------------------------------------------------------[ getin ]------------------------------------------------------------------------

//#include "stdafx.h"
//#include <iostream>
//#include <locale>
//#include <cwchar>
//
//int wmain(int argc, wchar_t* argv[])
//{
//	setlocale(LC_ALL, "rus");
//	cout << "-----[ getin ]-----" << endl << endl;
//	try 
//	{
//		Parm::PARM parm = Parm::getparm(argc, argv);
//		In::IN in = In::getin(parm.in);
//		cout << in.text << endl;
//		cout << "Всего символов: " << in.size << endl;
//		cout << "Всего строк: " << in.lines << endl;
//		cout << "Пропущено: " << in.ignor << endl;
//	}
//	catch (Error::ERROR e)
//	{
//		cout << "Ошибка" << e.id << ": " << e.message << endl << endl;
//		cout << "строка: " << e.inext.line << " позиция " << e.inext.col << endl << endl;
//	};
//	system("pause");
//	return 0;
//};