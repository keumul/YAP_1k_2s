#include <iostream>
#include "FST.h"

int posp = 0;

namespace FST
{
	RELATION::RELATION(char c, short no) //������->������� ����� ��������� �A
	{
		symbol = c;						 //������ �������� 
		nnode = no;						 //����� ������� �������
	}

	//-----------------------------------�� ���������-----------------------------------------------

	NODE::NODE()						//������� ����� ��������
	{
		n_relation = 0;					//���-�� ����������� �����
		RELATION* relations = NULL;		//����������� ����� 
	}

	//-----------------------------------� �����������----------------------------------------------

	NODE::NODE(short n, RELATION rel, ...)
	{		//���-�� �����	//������ �����
		n_relation = n;
		RELATION* p = &rel;
		relations = new RELATION[n];
		for (int i = 0; i < n; i++) relations[i] = p[i];
	}

	FST::FST(char* s, short ns, NODE n, ...)
	{							//������ ���������
		string = s;
		nstates = ns;
		nodes = new NODE[ns];
		NODE* p = &n;
		for (int i = 0; i < nstates; i++) nodes[i] = p[i];
		rstates = new short[nstates];
		memset(rstates, 0xff, sizeof(short) * nstates);
		rstates[0] = 0;
		position = -1;
	};

	bool step(FST& fst, short*& rstates)
	{
		bool rc = false;
		std::swap(rstates, fst.rstates); //����� ��������

		for (short i = 0; i < fst.nstates; i++)
		{
			if (rstates[i] == fst.position)
			{
				for (short j = 0; j < fst.nodes[i].n_relation; j++)
				{
					if (fst.nodes[i].relations[j].symbol == fst.string[fst.position])
					{
						fst.rstates[fst.nodes[i].relations[j].nnode] = fst.position + 1;
						rc = true;
					};
				};
				if (i < fst.nstates - 1)
					if (rc == false && fst.nodes[i].relations[fst.nodes[i].n_relation - 1].symbol == '1') {
						fst.rstates[fst.nodes[i].relations[fst.nodes[i].n_relation - 1].nnode] = fst.position;
						rc = true;
						fst.nl = true;
					}
			}
		};
		return rc;
	};

	bool execute(FST& fst) //��������� ������������� ������� 
	{
		
		short* rstates = new short[fst.nstates];
		memset(rstates, 0xff, sizeof(short) * fst.nstates);
		short lstring = strlen(fst.string);
		bool rc = true;
		for (short i = 0; i < lstring && rc; i++)
		{
			fst.position++;
			rc = step(fst, rstates);
			if (fst.nl == true) {
				fst.nl = false;
				fst.position--;
				i--;
			}
		};
		delete[] rstates;
		return (rc ? (fst.rstates[fst.nstates - 1] == lstring) : rc);
	}
}