#pragma once
class STACK
{
public:
	STACK();
	~STACK();
	void initstack(); 
	int stackempty(STACK &);
	int stackfull(STACK &);
	void push(STACK &, int);
	int pop(STACK &);
	void convert(STACK &, int, int);
	void StackClear();
private:
	int top;
	int maxlen;
	int *stack;
};

