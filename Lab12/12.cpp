#include<iostream>
#include"FST.h"

int main()
{
	setlocale(LC_ALL, "RUS");

	char str1[]  = { "paae" };
	char str2[]  = { "paasixaae" };
	char str3[]  = { "paaasixaae" };
	char str4[]  = { "paaaasixxaaaae" };
	char str5[]  = { "paaaaasoyyaaaaae" };
	char str6[]  = { "paaaaaasixxxaaaaaae" };
	char str7[]  = { "paaaaaaasoyyyaaaaaaae" };
	char str9[]  = { "pasixae" };
	char str10[] = { "paaee" };
	char str11[] = { "pasiuxxae" };

	FST::FST fst1(
		str1,
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
	if (FST::execute(fst1)) std::cout << "Цепочка " << fst1.string << " распознана" << std::endl;
	else std::cout << "Цепочка " << fst1.string << " не распознана" << std::endl;

//-----------------------------------------------------------------------------------------------------------------------------

		FST::FST fst2(
			str1,
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
		if (FST::execute(fst2)) std::cout << "Цепочка " << fst2.string << " распознана" << std::endl;
		else std::cout << "Цепочка " << fst2.string << " не распознана" << std::endl;

//-----------------------------------------------------------------------------------------------------------------------------
		
		FST::FST fst3(
			str2,
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
		if (FST::execute(fst3)) std::cout << "Цепочка " << fst3.string << " распознана" << std::endl;
		else std::cout << "Цепочка " << fst3.string << " не распознана" << std::endl;
		
//-----------------------------------------------------------------------------------------------------------------------------
		
	   FST::FST fst4(
			str3,
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
		if (FST::execute(fst4)) std::cout << "Цепочка " << fst4.string << " распознана" << std::endl;
		else std::cout << "Цепочка " << fst4.string << " не распознана" << std::endl;
				
//-----------------------------------------------------------------------------------------------------------------------------
		
		FST::FST fst5(
			str4,
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
		if (FST::execute(fst5)) std::cout << "Цепочка " << fst5.string << " распознана" << std::endl;
		else std::cout << "Цепочка " << fst5.string << " не распознана" << std::endl;

//-----------------------------------------------------------------------------------------------------------------------------

		FST::FST fst6(
			str5,
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
		if (FST::execute(fst6)) std::cout << "Цепочка " << fst6.string << " распознана" << std::endl;
		else std::cout << "Цепочка " << fst6.string << " не распознана" << std::endl;

//-----------------------------------------------------------------------------------------------------------------------------

		FST::FST fst7(
			str6,
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
		if (FST::execute(fst7)) std::cout << "Цепочка " << fst7.string << " распознана" << std::endl;
		else std::cout << "Цепочка " << fst7.string << " не распознана" << std::endl;
		
//-----------------------------------------------------------------------------------------------------------------------------
		
		FST::FST fst8(
			str7,
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
		if (FST::execute(fst8)) std::cout << "Цепочка " << fst8.string << " распознана" << std::endl;
		else std::cout << "Цепочка " << fst8.string << " не распознана" << std::endl;

//-----------------------------------------------------------------------------------------------------------------------------

		FST::FST fst9(
			str9,
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
		if (FST::execute(fst9)) std::cout << "Цепочка " << fst9.string << " распознана" << std::endl;
		else std::cout << "Цепочка " << fst9.string << " не распознана" << std::endl;

//-----------------------------------------------------------------------------------------------------------------------------

		FST::FST fst10(
			str10,
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
		if (FST::execute(fst10)) std::cout << "Цепочка " << fst10.string << " распознана" << std::endl;
		else std::cout << "Цепочка " << fst10.string << " не распознана" << std::endl;

//-----------------------------------------------------------------------------------------------------------------------------

		FST::FST fst11(
			str11,
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
		if (FST::execute(fst11)) std::cout << "Цепочка " << fst11.string << " распознана" << std::endl;
		else std::cout << "Цепочка " << fst11.string << " не распознана" << std::endl;
}