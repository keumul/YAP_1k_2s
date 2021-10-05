#include <fstream>
#include <string>
#include "In.h"
#include "Error.h"
using namespace std;

namespace In
{
	IN getin(wchar_t infile[])
	{
		IN in;
		in.size = 0; in.lines = 0; in.ignor = 0;
		int col = 0;

		unsigned char* text = new unsigned char[IN_MAX_LEN_TEXT];

		ifstream file(infile);
		if (file.fail()) { throw ERROR_THROW(110); }

		while (in.size < IN_MAX_LEN_TEXT)
		{
			char c;
			file.get(c);
			unsigned char x = c;

			if (file.eof())
			{
				text[in.size] = '\0';
				in.lines++;
				break;
			}
			if (in.code[x] == in.T)
			{
				text[in.size] = x;
				in.size++;
				col++;
			}
			else if (in.code[x] == in.I)
			{
				in.ignor++;
				col++;
			}
			else if (in.code[x] == in.F)
			{
				throw ERROR_THROW_IN(111, in.lines, col);
			}
			else
			{
				text[in.size] = in.code[x];
				in.size++;
				col++;
			}
			if (x == IN_CODE_ENDL)
			{
				in.lines++;
				col = 0;
			}
		}
		in.text = text;
		return in;
	}
}
