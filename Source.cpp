#include "Header.h"
#include "child2.h"

int main()
{
	setlocale(LC_ALL, "russian");

	// ������ ��� �������� (� ������ ����� �� ������ ������������ �� ��������� � �.�. 
	// ����� ���� ������ ������ � ������� ������������

	child2<int, int, char, char, double, double> obj{ 1, 6, 'q', 'd', 2.76, 18.33 };

	//�������� �����
	obj.print();

	return 0;
}