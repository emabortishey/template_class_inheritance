#include "Header.h"
#include "base.h"

// 4 типа используемых дл€ вызов конструктора базового класса + этого

template <class T1, class T2, class T3, class T4>
class child1 :public base<T1, T2>
{
protected:
	T3 val3;
	T4 val4;

public:
	child1(T1 P1, T2 P2, T3 P3, T4 P4) : base<T1,T2>{ P1, P2 }, val3{ P3 }, val4{ P4 } { }

	void set_val3(T3 val3_P) { val3 = val3_P; }
	void set_val4(T4 val4_P) { val4 = val4_P; }

	// чисто виртуальна€ чтоб обьекты класса чайлд1 нельз€ было создавать в мейне
	virtual void print() = 0;

	const T3 get_val3() { return val3; }
	const T4 get_val4() { return val4; }

	//деструкторов нет потому что € не знаю какие типы в шаблоне и нужно
	//ли их удал€ть и каким именно образом
};

