#include "Mystack.h"
#include <iostream>

Stack::Stack(const unsigned int maxSize)
{
	sizeOfStack = 0;
	stackArray = new int[maxSize];
}

bool Stack::isEmpty()
{
	if (sizeOfStack == 0)
		return true;
	else
		return false;
}

void Stack::push(const int& number)
{
	if (sizeOfStack == 100)
	{
		cout << "Stack Overflow\n";
		exit(0);
	}
	else
	{
		stackArray[sizeOfStack] = number;
		sizeOfStack++;
	}
}

void Stack::pop()
{
	if (isEmpty())
	{
		cout << "Stack Underflow\n";
		exit(0);
	}
	else
		sizeOfStack--;
}

int Stack::top() {
	return stackArray[sizeOfStack - 1];
}

void Stack::printStack()
{
	cout << "Содержимое стека: ";
	while (isEmpty() != true)
	{
		cout << top() << ' ';
		pop();
	}
	cout << endl;
}

void operator << (Stack& stack, const int& number) {
	stack.push(number);
}

void operator !(Stack& stack)
{
	stack.pop();
}

void operator >> (Stack& stack, Stack& stack1)
{
	stack.pop();
}