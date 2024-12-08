#include "Header.h"
#include "child1.h"

template <class T1, class T2, class T3, class T4, class T5, class T6>
class child2 :public child1<T1, T2, T3, T4>
{
	using base<T1, T2>::val1;
	using base<T1, T2>::val2;
	using child1<T1, T2, T3, T4>::val3;
	using child1<T1, T2, T3, T4>::val4;
protected:
	T5 val5;
	T6 val6;

public:
	child2(T1 P1, T2 P2, T3 P3, T4 P4, T5 P5, T6 P6) : child1<T1,T2,T3,T4>{ P1, P2, P3, P4 }, val5{ P5 }, val6{ P6 } { }

	void set_val5(T5 val5_P) { val5 = val5_P; }
	void set_val6(T6 val6_P) { val6 = val6_P; }

	void print()
	{
		cout << val1 << '\t' << val2 << '\t' << val3 << '\t' << val4 << '\t' << val5 << '\t' << val6 << '\t';
	}

	const T5 get_val5() { return val5; }
	const T6 get_val6() { return val6; }
};