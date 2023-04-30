#include <iostream>
#include <string>

class Calculator
{
public:
	double num1;
	double num2;
	double result = 0;

	Calculator(double num1, double num2)										// ��� ����������� � �����������
	{
		this->num1 = num1;													    // �������������
		this->num2 = num2;														// �������������
	}

	void double_add()															//����� ���������� ��������� �������� num1 � num2
	{
		double result = num1 + num2;
		std::cout << num1 << " + " << num2 << " = " << result << std::endl;
	}

	void double_multiply()														//����� ���������� ��������� ������������ num1 � num2
	{
		double result = num1 * num2;
		std::cout << num1 << " * " << num2 << " = " << result << std::endl;
	}

	void double_subtract_1_2()													//����� ���������� ��������� ��������� num2 �� num1
	{
		double result = num1 - num2;
		std::cout << num1 << " - " << num2 << " = " << result << std::endl;
	}

	void double_subtract_2_1()													//����� ���������� ��������� ��������� num1 �� num2
	{
		double result = num2 - num1;
		std::cout << num2 << " - " << num1 << " = " << result << std::endl;
	}

	void double_divide_1_2()													//����� ���������� ��������� ������� num1 �� num2
	{
		double result = num1 / num2;
		std::cout << num1 << " / " << num2 << " = " << result << std::endl;
	}

	void double_divide_2_1()													//����� ���������� ��������� ������� num2 �� num1
	{
		double result = num2 / num1;
		std::cout << num2 << " / " << num1 << " = " << result << std::endl;
	}

	void bool_set_num1(double num1)												//����� ���������� �������� ���� num1 ������ �������� ��������� num1 � ������,  
	{																			//���� �������� ��������� �� ����� 0.															
		if (num1 != 0) this->num1 = num1;										//���������� true, ���� ��������� ��������� �������, � �������� ������ false
	}
	void bool_set_num2(double num2)												//����� ���������� �������� ���� num2 ������ �������� ��������� num1 � ������,
	{																			//���� �������� ��������� �� ����� 0.		
		if (num2 != 0) this->num2 = num2;										//���������� true, ���� ��������� ��������� �������, � �������� ������ false
	}
};

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");

	double num1 = 0;
	double num2 = 0;

	Calculator calc{ num1, num2 };
	do
	{
		std::cout << "\n������� num1: ";
		std::cin >> num1;
		std::cout << "������� num2: ";
		std::cin >> num2;

		if (num1 == 0)
		{
			do
			{
				std::cout << "�������� ����!" << std::endl;
				std::cout << "������� num1: ";
				std::cin >> num1;
			} while (num1 == 0);
		}
			if (num2 == 0)
			{
				do
				{
					std::cout << "�������� ����!" << std::endl;
					std::cout << "������� num2: ";
					std::cin >> num2;
				} while (num2 == 0);
			}
				calc.bool_set_num1(num1);
				calc.bool_set_num2(num2);
				calc.double_add();
				calc.double_multiply();
				calc.double_subtract_1_2();
				calc.double_subtract_2_1();
				calc.double_divide_1_2();
				calc.double_divide_2_1();
	
	} while (true);

	return 0;
}

/*
������ 1. ����������� ���� �����
� ���� ������� ��� ����� ����� ������� �����, ����������� ������� �������������� �������� ��� ���� �����, � ������������������ ��� ������

�������� ����� Calculator.����� ������ ��������� ��� ���� num1 � num2 ��� �������� ������� �����.����� ����� ������ ��������� ��������� ������ :

double add() - ����� ������ ���������� ��������� �������� num1 � num2
double multiply() - ����� ������ ���������� ��������� ������������ num1 � num2
double subtract_1_2() - ����� ������ ���������� ��������� ��������� num2 �� num1
double subtract_2_1() - ����� ������ ���������� ��������� ��������� num1 �� num2
double divide_1_2() - ����� ������ ���������� ��������� ������� num1 �� num2
double divide_2_1() - ����� ������ ���������� ��������� ������� num2 �� num1
bool set_num1(double num1) - ����� ������ ���������� �������� ���� num1 ������ �������� ��������� num1 � ������, ���� �������� ��������� �� ����� 0. ���������� true, ���� ��������� ��������� �������, � �������� ������ false
bool set_num2(double num2) - ����� ������ ���������� �������� ���� num2 ������ �������� ��������� num2 � ������, ���� �������� ��������� �� ����� 0. ���������� true, ���� ��������� ��������� �������, � �������� ������ false
�������� ���, ��������������� ������ ������ Calculator.��������� ������������ ������ ��� �����.����� ����� �������� ������������ ���������� ���� �������� ��� ��������� ��� ������ �������� ��� ���, ���� ���������� ���� ��� �����������

��������� ���������� ������������ ����������, ���� �� ��� �� ������� �������

������ ������ ���������
�������
������� num1 : 3
������� num2 : 6
num1 + num2 = 9
num1 - num2 = -3
num2 - num1 = 3
num1 * num2 = 18
num1 / num2 = 0.5
num2 / num1 = 2
������� num1 : 5
������� num2 : 0
�������� ����!
������� num2 : 5
num1 + num2 = 10
num1 - num2 = 0
num2 - num1 = 0
num1 * num2 = 25
num1 / num2 = 1
num2 / num1 = 1
*/
