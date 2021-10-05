#pragma once

#include <iostream>
#include <Windows.h>

#define DICTNAMEMAXSIZE		20 // максимальный размер имени словар€
#define DICTMAXSIZE			100 // максимальна€ Ємкость словар€
#define ENTRYNAMEMAXSIZE	30 //максимальна€ длина имени в словаре 
#define THROW1 "Create: превышен размер имени словар€"
#define THROW2 "Create: превышен размер максимальной Ємкости словар€"
#define THROW3 "AddEntry: переполнение словар€"
#define THROW4 "AddEntry: дублирование идентификатора"
#define THROW5 "GetEntry: не найден элемент"
#define THROW6 "DelEntry: не найден элемент"
#define THROW7 "UpdEntry: не найден элемент"
#define THROW8 "UpdEntry: дублирование идентификатора"

namespace Dictionary
{
	struct Entry //элемент словар€
	{
		int id; //уникальный идентификатор
		char name[ENTRYNAMEMAXSIZE]; //символьна€ инф-€
	};
	struct Instance //экземпл€р словар€
	{
		char name[DICTNAMEMAXSIZE]; //наименование
		int maxsize; //максимальна€ емкость
		int size; //текущий размер
		Entry* dictionary; //массив элементов словар€
	};

	Instance Create( //создание словар€
		char name[DICTNAMEMAXSIZE], //им€
		int size );//емкость
	
	void AddEntry( //добавить элемент словар€
		Instance& inst, //экземпл€р словар€
		Entry ed );//элемент словар€ 

	void DelEntry( //удаление элемента словар€
		Instance& inst, //экземпл€р словар€
		int id ); // уникальный id удал€емого элемента
	
	void UpdEntry( //изменить элемент словар€
		Instance& inst, //экземпл€р словар€
		int id, //id замен€емого элемента
		Entry new_ed); //новый элемент словар€

	Entry GetEntry( //получение элемента словар€
		Instance inst, //экземпл€р словар€
		int id); //id получаемого элемента

	void Print(Instance d); //напечатать словарь
	void Delete(Instance& d); //удалить словарь
};
