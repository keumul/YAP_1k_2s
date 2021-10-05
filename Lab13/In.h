#pragma once
#define IN_MAX_LEN_TEXT 1024*1024
#define IN_CODE_ENDL	'\n'
// p, a, e, s, o, i;
//===================================================================================================================================\\
//--------1-------2--------3------4-------5-------6-------7-------8-------9------10------11------12------13-------14------15-----16----
#define IN_CODE_TABLE {\
/*1*/  IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	  '|',	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,\
/*2*/  IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,\
/*3*/  IN::T,	IN::T,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,\
/*4*/  IN::T,	IN::T,	IN::T,	IN::T,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,\
/*5*/  IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::T,	IN::F,	IN::F,	IN::F,	IN::F,\
/*6*/  IN::T,	IN::F,	IN::F,	IN::T,	IN::F,	IN::F,	IN::F,	IN::F,	IN::I,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,\
/*7*/  IN::F,	IN::T,	IN::F,	IN::T,	IN::F,	IN::T,	IN::F,	IN::T,	IN::F,	IN::T,	IN::F,	IN::F,	IN::F,	IN::F,	IN::T,	IN::T,\
/*8*/  IN::T,	IN::F,	IN::F,	IN::T,	IN::T,	IN::F,	IN::F,	IN::F,	IN::T,	IN::T,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,\
																															          \
/*9*/  IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,\
/*10*/ IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,\
/*11*/ IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,\
/*12*/ IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,\
/*13*/  '-',	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::T,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,\
/*14*/ IN::F,	IN::T,	IN::T,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,\
/*15*/ IN::T,	IN::F,	IN::F,	IN::T,	IN::F,	IN::T,	IN::F,	IN::F,	IN::T,	IN::F,	IN::F,	IN::F,	IN::F,	IN::T,	IN::F,	IN::T,\
/*16*/ IN::F,	IN::F,	IN::T,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::F,	IN::T \
}

namespace In
{
	struct IN
	{
		enum { T = 1024, F = 2048, I = 4096 }; // T - ���������� ������, F - ������������ ������, I - ������������, ����� ��������
		int size;							   // ������ ��������� ����
		int lines;							   // ���-�� �����
		int ignor;							   // ���-�� ����������������� ��������
		unsigned char* text;				   // �������� ���
		int code[256] = IN_CODE_TABLE;		   // ������� �������� 

		IN()
		{
			this->size = this->ignor = 0;
			this->lines = 1;
			this->text = new unsigned char[IN_MAX_LEN_TEXT];
		}
	};
	IN getin(wchar_t infile[]);					// ���� � �������� �������� ������
};
