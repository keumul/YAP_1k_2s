
#include"../../../7lab/Lab7/Lab7/Dictionary.h"
#include "../../../7lab/Lab7/Lab7/stdafx.h"

namespace Dictionary
{
	Instance Create(char name[DICTNAMEMAXSIZE], int size)
	{
		if (strlen(name) > DICTNAMEMAXSIZE) throw (char*)THROW1;
		if (size > DICTMAXSIZE)				throw (char*)THROW2;
		
		Instance object;

		object.name[strlen(name)] = '\0';
		for (int i = 0; object.name[i] != '\0'; i++)
		{ object.name[i] = name[i]; }

		object.maxsize = size;
		object.dictionary = new Entry[size];
		object.size = 0;

		return object;
	}

	void AddEntry(Instance& inst, Entry ed)
	{
		if (inst.size == inst.maxsize) { throw (char*)THROW3; }

		for (int i = 0; i < inst.size; i++)
		{
			if (ed.id == inst.dictionary[i].id) { throw (char*)THROW4; }
		}
		inst.dictionary[inst.size] = ed;
		inst.size++;
	}
	void DelEntry(Instance& inst, int id)
	{
		for (int i = 0; i < inst.size; i++)
		{
			if (inst.dictionary[i].id == id)
			{
				for (int i = 0; i < inst.size - 1; i++)
				{
					inst.dictionary[i] = inst.dictionary[i + 1];
				}break;
			}
			else if (i == inst.size - 1) throw (char*)THROW6;
		}
		inst.size--;
	}
	/*Entry GetEntry(Instance inst, int id)
	{
		Entry findElement;
		for (int i = 0; i < inst.size; i++)
		{
			if (inst.dictionary[i].id == id)
			{
				findElement = inst.dictionary[i];
				return findElement;
			}
		}
		throw(char*)THROW5;
	}

	void UpdEntry(Instance& inst, int id, Entry new_ed)
	{
		int index = -5;
		for (int i = 0; i < inst.size; i++)
		{
			if (inst.dictionary[i].id == id) index = i;
			if (inst.dictionary[i].id == new_ed.id) throw (char*)THROW8;
		}
		if (index == -5) throw (char*)THROW7;
		else inst.dictionary[index] = new_ed;
	}

	void Print(Instance d)
	{
		std::cout << "-------" << d.name << "-------" << std::endl;
		for (int i = 0; i < d.size; i++)
		{
			std::cout << d.dictionary[i].id << " ";
			std::cout << d.dictionary[i].name;
			std::cout << std::endl;
		}
	}
	void Delete(Instance& d)
	{
		delete[] d.dictionary;
		d.maxsize = NULL;
		d.size = NULL;
	}*/
}