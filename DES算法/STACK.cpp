#include "stdafx.h"
#include "STACK.h"
#include <iostream>
#define S_SIZE 100
using namespace std;

STACK::STACK()
{
}


STACK::~STACK()
{
}

void STACK::initstack()
{
	stack=new int[S_SIZE * sizeof(int)];
	maxlen = S_SIZE;
	top = -1;
}

int STACK::stackempty(STACK &S)
{
	if (S.top == -1)
		return 1;
	else
		return 0;
}

int STACK::stackfull(STACK &S)
{
	if (S.top == S.maxlen)
		return 1;
	else
		return 0;	
}

void STACK::push(STACK &S, int x)
{
	if (stackfull(S))
		cout << "stack is overflow" << endl;
	else
		S.stack[++S.top] = x;		
}

int STACK::pop(STACK &S)   //出栈与读栈顶一起做了
{
	int x;
	if (stackempty(S))
	{cout << "stack is underflow" << endl; return -1;}
	else { x = S.stack[S.top]; S.top--; return x; }
}

void STACK::convert(STACK &S, int N, int n)
	{
		int x;
		do
		{
			push(S, N%n);
			N /= n;
		} while (N != 0);

		while (!stackempty(S))
		{
			x = pop(S);
			if (x > 9) //十六进制时输出字母    
			{
				x = x + 55;
				cout << char(x);
			}
			else
				cout << x;
		}
		cout << endl;
	}

void STACK::StackClear()
{
	delete[] stack;
}