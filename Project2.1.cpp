// Lab_2.1.cpp
// < ��������� ����� >
// ����������� ������ � 2.1
// ˳��� ��������.
// ������ 15
#include <iostream>
#include <cmath>
using namespace std;
int main()

{
	double b; // ������� ��������
	double z1; // ��������� ���������� 1-�� ������
	double z2; // ��������� ���������� 2-�� ������
	cout << "b = "; cin >> b;
	z1 = (1.0 * (sqrt(2 * b + (2 * sqrt(b * b - 4))))) / (sqrt(b * b - 4) + b + 2);
	z2 = 1 / sqrt(b + 2);//change one
	cout << endl;
	cout << "z1 = " << z1 << endl;//changes for push to remotly repo
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}