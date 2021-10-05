#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <cwchar>
using namespace std;
int wmain(int argc, wchar_t* argv[]) {
	setlocale(LC_ALL, "ru");
	
	//----------------------------------------------------------[ geterror | geterrorin ]----------------------------------------------------------------
	cout << "-----Test Error::geterror -----\n\n";
	try { throw ERROR_THROW(100); }
	catch (Error::ERROR e) {
		cout << "������ " << e.id << ": " << e.message << endl << endl;
	}
	cout << "----Test Error::geterrorin -----\n\n";
	try { throw ERROR_THROW_IN(111, 7, 7); }
	catch (Error::ERROR e) {
		cout << "������ " << e.id << ": " << e.message << ", ������ " << e.inext.line << ", ������� " << e.inext.col << endl << endl;
	}

	//----------------------------------------------------------------[ getparm ]-------------------------------------------------------------------------
	cout << "---- Test Parm::getparm -----\n\n";
	try {
		Parm::PARM parm = Parm::getparm(argc, argv);
		wcout << "-in:" << parm.in << ", -out:" << parm.out << ", -log:" << parm.log << endl << endl;
	}
	catch (Error::ERROR e) {
		cout << "������ " << e.id << ": " << e.message << endl << endl;
	}

	Log::LOG log = Log::INITLOG;
	try
	{
		Parm::PARM parm = Parm::getparm(argc, argv);
		log = Log::getlog(parm.log);
		Log::WriteLine(log, "����: ", "��� ������ ", "");
		Log::WriteLog(log);
		Log::WriteParm(log, parm);
		In::IN in = In::getin(parm.in);
		Log::WriteIn(log, in);
		Log::Close(log);
	}
	catch (Error::ERROR e)
	{
		cout << endl;
		cout << "������\n\n";
		Log::WriteError(log, e);
	}
	system("pause");
	return 0;
}