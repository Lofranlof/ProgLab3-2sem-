#pragma once
using namespace std;

class Stack
{
private:
	unsigned int sizeOfStack;
	int* stackArray;
public:
	Stack(const unsigned int);
	void push(const int&);
	void pop();
	int top();
	bool isEmpty();
	void printStack();
	friend void operator << (Stack&, const int&);
	friend void operator !(Stack&);
	friend void operator >> (Stack&, Stack&);

	~Stack()
	{
		delete[] stackArray;
	}
};

