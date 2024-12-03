#pragma once
#include <iostream>
using namespace std;

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

	void print() { cout << val1 << '\t' << val2 << '\t'; }

	const T1 get_val1() { return val1; }
	const T2 get_val2() { return val2; }
};

template <class T1, class T2, class T3, class T4>
class child1 :public base<T1,T2> 
{
protected:
	T3 val3;
	T4 val4;

public:
	child1(T1 P1, T2 P2, T3 P3, T4 P4) : val3{ P3 }, val4{ P4 }, base{ P1, P2 } { }

	void set_val3(T3 val3_P) { val3 = val3_P; }
	void set_val4(T4 val4_P) { val4 = val4_P; }

	void print() { cout << val3 << '\t' << val4 << '\t'; }

	const T3 get_val3() { return val3; }
	const T4 get_val4() { return val4; }
};


template <class T1, class T2, class T3, class T4, class T5, class T6>
class child2 :public child1<T1,T2,T3,T4>
{
protected:
	T5 val5;
	T6 val6;

public:
	child2(T1 P1, T2 P2, T3 P3, T4 P4, T5 P5, T6 P6) : val5{ P5 }, val6{ P6 }, child1 { P1, P2, P3, P4 } { }

	void set_val5(T5 val5_P) { val5 = val5_P; }
	void set_val6(T6 val6_P) { val6 = val6_P; }

	void print() { cout << val5 << '\t' << val6 << '\t'; }

	const T5 get_val5() { return val5; }
	const T6 get_val6() { return val6; }
};