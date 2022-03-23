#include "ProgaLab3.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	ComplexNumber compNumber(2, 4);
	ComplexNumber compNumber2(5, 3);
	double realNumber = 2;
	cout << "Модуль комплексного числа: " << ~compNumber << endl;
	cout << "Произведение двух комплексных чисел: " << compNumber * compNumber2 << endl;
	cout << "Произвденеие комплексного числа на вещественное и vice versa: " << compNumber * realNumber << endl;
	cout << "Сумма двух комплексных чисел: " << compNumber + compNumber2 << endl;
	cout << endl;

	Stack myStack(100);
	myStack << 45;
	myStack << 13;
	myStack.push(29);
	!myStack;
	//myStack >> myStack; бинарный оператор извлечения из стека
	myStack.printStack();
	return 0;
}
