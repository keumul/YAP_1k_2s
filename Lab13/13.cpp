//13 -in:D:\in.txt -out:D:\out.txt -log:D:\log.txt

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <cwchar>
using namespace std;
int wmain(int argc, wchar_t* argv[]) {
	
	setlocale(LC_ALL, "ru");
	int col = 0;

	//----------------------------------------------------------[ geterror | geterrorin ]----------------------------------------------------------------
	cout << "-----Test Error::geterror -----\n";
	try { throw ERROR_THROW(100); }
	catch (Error::ERROR e) {
		cout << "Ошибка " << e.id << ": " << e.message << endl << endl;
	}
	cout << "----Test Error::geterrorin -----\n";
	try { throw ERROR_THROW_IN(111, 7, 7); }
	catch (Error::ERROR e) {
		cout << "Ошибка " << e.id << ": " << e.message << ", строка " << e.inext.line << ", позиция " << e.inext.col << endl << endl;
	}

	//----------------------------------------------------------------[ getparm ]-------------------------------------------------------------------------
	cout << "---- Test Parm::getparm -----\n";
	try {
		Parm::PARM parm = Parm::getparm(argc, argv);
		wcout << "-in:" << parm.in << ", -out:" << parm.out << ", -log:" << parm.log << endl << endl;
	}
	catch (Error::ERROR e) {
		cout << "Ошибка " << e.id << ": " << e.message << endl << endl;
	}

	Log::LOG log = Log::INITLOG;
	try
	{
		Parm::PARM parm = Parm::getparm(argc, argv);
		log = Log::getlog(parm.log);
		Log::WriteLine(log, "Тест: ", "без ошибок ", "");
		Log::WriteLog(log);
		Log::WriteParm(log, parm);
		In::IN in = In::getin(parm.in);
		Log::WriteIn(log, in);

//-----------------------------------------------------------------------------------------------------------------------------------------------
		
		char str[150]{};
		for (int i = 0, j = 0; i < strlen((const char*)in.text); j++)
		{
			str[i++] = in.text[j];

			if (str[i - 1] == '|')
			{
				str[i - 1] = '\0';
				i = 0;

				FST::FST fSt(
					str,
					9,
					FST::NODE(1, FST::RELATION('p', 1)),
					FST::NODE(1, FST::RELATION('a', 2)),
					FST::NODE(3, FST::RELATION('s', 3), FST::RELATION('a', 2), FST::RELATION('1', 7)),
					FST::NODE(2, FST::RELATION('o', 4), FST::RELATION('i', 5)),
					FST::NODE(2, FST::RELATION('y', 4), FST::RELATION('1', 6)),
					FST::NODE(1, FST::RELATION('x', 6)),
					FST::NODE(3, FST::RELATION('a', 7), FST::RELATION('s', 3), FST::RELATION('x', 6)),
					FST::NODE(2, FST::RELATION('e', 8), FST::RELATION('a', 7)),
					FST::NODE()
				);
				if (FST::execute(fSt))
				{
					col++;
					std::cout << "\nЦепочка " << fSt.string << " распознана.\n";
					*log.stream << "\nЦепочка " << fSt.string << " распознана.\n";
				}
				else
				{
					col++;
					std::cout << "\nЦепочка " << fSt.string << " не распознана. Ошибка распознавания. Строка: " << col << " Символ: " << fSt.position + 1 << "\n";
					*log.stream << "\nЦепочка " << fSt.string << " не распознана. Ошибка распознавания. Строка: " << col << " Символ: " << fSt.position + 1 << "\n";
				}
				strcpy_s(str, "");
			}
		}

//-----------------------------------------------------------------------------------------------------------------------------------------------

		Log::Close(log);
	}
	catch (Error::ERROR e)
	{
		cout << endl;
		cout << "!Ошибка!\n\n";
		Log::WriteError(log, e);
	}
	system("pause");
	return 0;
}