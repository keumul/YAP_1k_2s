#pragma once
#include<iostream>

namespace FST {

	struct RELATION			//ребро:символ->вершина графа переходов КA
	{
		char symbol;		//символ перехода 
		short nnode;		//номер смежной вершины
		RELATION(char c = 0x00, short ns = NULL);
		//символ перехода //новое состояние
	};

	struct NODE				//вершина графа переходов
	{
		short n_relation;	//кол-во инцидентных ребер
		RELATION* relations;//инцидентные ребкра
		NODE();
		NODE(short n, RELATION rel, ...);
		//кол-во ин.ребер //список ребер
	};

	struct FST				//недетерминированный КА
	{
		char* string;		//цепочка (строка, завершается 0х00)
		short position;		//позиция текущего символа
		short nstates;		//количество состояний КА
		NODE* nodes;		//граф переходов: [0]-начальное состояние, [nstate-1]-конечное состояние
		short* rstates;		//содержит адрес результирующего массива, после каждой итерации моделирования такта
		FST(char* s, short ns, NODE n, ...);
		bool nl = false;
		int posp;
	};

	bool execute(FST& fst);
}
