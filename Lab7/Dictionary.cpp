
#include "Dictionary.h"
namespace Dictionary 
{
	Entry GetEntry(Instance inst, int id) 
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
	}
///////////////ÎÑÒÀËÜÍÛÅ ÔÓÍÊÖÈÈ Â 8 ËÀÁÅ
}