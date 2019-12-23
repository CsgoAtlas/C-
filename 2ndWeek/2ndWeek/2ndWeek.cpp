#include <iostream>
#include <string>
using namespace std;

//1st task

int main() {
	setlocale(LC_ALL, "Russian");
	string Modul;
	string Operation;
	int Result;
	int elseNum;
	int firstNum;
	int secondNum;
	cout << "Использовать значение по модулю? (Y/N): ";
	cin >> Modul;
	cout << "Выберите операцию (+, -, *, /, Corner, Square): ";
	cin >> Operation;
	if (Operation == "+" || Operation == "-" || Operation == "*" || Operation == "/")
	{
		cout << "Введите первое число: ";
		cin >> firstNum;
		cout << "Напишите второе число: ";
		cin >> secondNum;
	}
	else if (Operation == "Corner" || Operation == "Square")
	{
		cout << "Напишите число: ";
		cin >> elseNum;
	}
	else {
		cout << "ERROR!" << endl;
	}

	if (Operation == "+")
	{
		Result = firstNum + secondNum;
	}
	else if (Operation == "-")
	{
		Result = firstNum - secondNum;
	}
	else if (Operation == "*")
	{
		Result = firstNum * secondNum;
	}
	else if (Operation == "/")
	{
		Result = firstNum / secondNum;
	}
	else if (Operation == "Corner")
	{
		Result = sqrt(elseNum);
	}
	else
	{
		Result = elseNum * elseNum;
	}
	if (Modul == "Y")
	{
		cout << abs(Result);
	}
	else
	{
		cout << Result;
	}

}

//2nd Task

/*int main() {
	setlocale(LC_ALL, "Russian");
	int FirstNum;
	int SecondNum;
	int Result;
	cout << "Напишите первое число (0-9): ";
	cin >> FirstNum;
	cout << "Напишите второе число (0-9): ";
	cin >> SecondNum;
	cout << "Результат умножения первого число на второе: ";
	cin >> Result;
	if (Result == FirstNum * SecondNum)
	{
		cout << "Правильно!";
	}
	else
	{
		cout << "Неправильно! Верный ответ " << FirstNum * SecondNum;
	}
}*/

//4th task

/*int main() {
	setlocale(LC_ALL, "Russian");
	string num;
	cout << "Напишите четырехзначное число: ";
	cin >> num;
	cout << num[3] << num[2] << num[1] << num[0] << endl;
}*/