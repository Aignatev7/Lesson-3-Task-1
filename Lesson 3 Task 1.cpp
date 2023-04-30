#include <iostream>
#include <string>

class Calculator
{
public:
	double num1;
	double num2;
	double result = 0;

	Calculator(double num1, double num2)										// это конструктор с параметрами
	{
		this->num1 = num1;													    // инициализация
		this->num2 = num2;														// инициализация
	}

	void double_add()															//метод возвращает результат сложения num1 и num2
	{
		double result = num1 + num2;
		std::cout << num1 << " + " << num2 << " = " << result << std::endl;
	}

	void double_multiply()														//метод возвращает результат перемножения num1 и num2
	{
		double result = num1 * num2;
		std::cout << num1 << " * " << num2 << " = " << result << std::endl;
	}

	void double_subtract_1_2()													//метод возвращает результат вычитания num2 из num1
	{
		double result = num1 - num2;
		std::cout << num1 << " - " << num2 << " = " << result << std::endl;
	}

	void double_subtract_2_1()													//метод возвращает результат вычитания num1 из num2
	{
		double result = num2 - num1;
		std::cout << num2 << " - " << num1 << " = " << result << std::endl;
	}

	void double_divide_1_2()													//метод возвращает результат деления num1 на num2
	{
		double result = num1 / num2;
		std::cout << num1 << " / " << num2 << " = " << result << std::endl;
	}

	void double_divide_2_1()													//метод возвращает результат деления num2 на num1
	{
		double result = num2 / num1;
		std::cout << num2 << " / " << num1 << " = " << result << std::endl;
	}

	void bool_set_num1(double num1)												//метод установает значение поля num1 равное значению аргумента num1 в случае,  
	{																			//если значение аргумента не равно 0.															
		if (num1 != 0) this->num1 = num1;										//Возвращает true, если установка произошла успешно, в обратном случае false
	}
	void bool_set_num2(double num2)												//метод установает значение поля num2 равное значению аргумента num1 в случае,
	{																			//если значение аргумента не равно 0.		
		if (num2 != 0) this->num2 = num2;										//Возвращает true, если установка произошла успешно, в обратном случае false
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
		std::cout << "\nВведите num1: ";
		std::cin >> num1;
		std::cout << "Введите num2: ";
		std::cin >> num2;

		if (num1 == 0)
		{
			do
			{
				std::cout << "Неверный ввод!" << std::endl;
				std::cout << "Введите num1: ";
				std::cin >> num1;
			} while (num1 == 0);
		}
			if (num2 == 0)
			{
				do
				{
					std::cout << "Неверный ввод!" << std::endl;
					std::cout << "Введите num2: ";
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
Задача 1. Калькулятор двух чисел
В этом задании вам нужно будет создать класс, выполняющий простые арифметические операции для двух чисел, и продемонстрировать его работу

Создайте класс Calculator.Класс должен содержать два поля num1 и num2 для хранения дробных чисел.Также класс должен содержать следующие методы :

double add() - метод должен возвращать результат сложения num1 и num2
double multiply() - метод должен возвращать результат перемножения num1 и num2
double subtract_1_2() - метод должен возвращать результат вычитания num2 из num1
double subtract_2_1() - метод должен возвращать результат вычитания num1 из num2
double divide_1_2() - метод должен возвращать результат деления num1 на num2
double divide_2_1() - метод должен возвращать результат деления num2 на num1
bool set_num1(double num1) - метод должен установить значение поля num1 равное значению аргумента num1 в случае, если значение аргумента не равно 0. Возвращает true, если установка произошла успешно, в обратном случае false
bool set_num2(double num2) - метод должен установить значение поля num2 равное значению аргумента num2 в случае, если значение аргумента не равно 0. Возвращает true, если установка произошла успешно, в обратном случае false
Напишите код, демонстрирующий работу класса Calculator.Попросите пользователя ввести два числа.После этого выведите пользователю результаты всех операций или попросите его ввести значение ещё раз, если предыдущий ввод был некорректен

Программа спрашивает пользователя бесконечно, пока он сам не закроет консоль

Пример работы программы
Консоль
Введите num1 : 3
Введите num2 : 6
num1 + num2 = 9
num1 - num2 = -3
num2 - num1 = 3
num1 * num2 = 18
num1 / num2 = 0.5
num2 / num1 = 2
Введите num1 : 5
Введите num2 : 0
Неверный ввод!
Введите num2 : 5
num1 + num2 = 10
num1 - num2 = 0
num2 - num1 = 0
num1 * num2 = 25
num1 / num2 = 1
num2 / num1 = 1
*/
