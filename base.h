#include "Header.h"

template <class T1, class T2>
class base
{
protected:
	T1 val1;
	T2 val2;

public:
	base(T1 P1, T2 P2) : val1{ P1 }, val2{ P2 } { }

	void set_val1(T1 val1_P) { val1 = val1_P; }
	void set_val2(T2 val2_P) { val2 = val2_P; }

	// чисто виртуальная чтоб обьекты класса бейс нельзя было создавать в мейне
	virtual void print() = 0;

	const T1 get_val1() { return val1; }
	const T2 get_val2() { return val2; }

	//деструкторов нет потому что я не знаю какие типы в шаблоне и нужно
	//ли их удалять и каким именно образом
};