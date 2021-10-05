#include <wchar.h>
#include "Parm.h"
#include "Error.h"

namespace Parm
{
	// »сп-с€ дл€ записи значений входных параметров(-in:, -out : , -log : ) в структуру PARM.

	PARM getparm(int argc, wchar_t* argv[])
	{           //кол-во    //массив указателей
				//парам-в	//на строки

		PARM param;

		bool pIn = false;
		bool pOut = false;
		bool pLog = false;

		wchar_t* temp;

		for (int i = 1; i < argc; i++)
		{
			if (argv[i] && wcslen(argv[i]) < PARM_MAX_SIZE)
			{
				if (temp = wcsstr(argv[i], PARM_IN))
				{
					temp += wcslen(PARM_IN);
					wcscpy_s(param.in, temp);
					pIn = true;
				}
				if (temp = wcsstr(argv[i], PARM_OUT))
				{
					temp += wcslen(PARM_OUT);
					wcscpy_s(param.out, temp);
					pOut = true;
				}
				if (temp = wcsstr(argv[i], PARM_LOG))
				{
					temp += wcslen(PARM_LOG);
					wcscpy_s(param.log, temp);
					pLog = true;
				}
			}
			else { throw ERROR_THROW(104); }
		}

		if (!pIn) { throw ERROR_THROW(100); }

		if (!pOut)
		{
			wcscpy_s(param.out, param.in);
			wcscat_s(param.out, PARM_OUT_DEFAULT_EXIT);
		}

		if (!pLog)
		{
			wcscpy_s(param.log, param.in);
			wcscat_s(param.log, PARM_LOG_DEFAULT_EXIT);
		}
		return param;
	}
}