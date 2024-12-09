#include "Header.h"
#include "child2.h"

int main()
{
	setlocale(LC_ALL, "russian");

	// задаем все значения (я решила также не делать конструкторы по умолчанию и т.д. 
	// чтобы было меньше мороки и свободы пользователю

	child2<int, int, char, char, double, double> obj{ 1, 6, 'q', 'd', 2.76, 18.33 };

	//успешный вывод
	obj.print();

	return 0;
}