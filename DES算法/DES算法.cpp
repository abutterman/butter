// DES算法.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "STACK.h"
#include <iostream>
using namespace std;


int main()
{
	STACK S;
	int m,n;
	cout << "PLZ input the number u want to be converted and the converting number;" << endl;
	cin >> m >> n;
	S.initstack();
	S.convert(S, m, n);
	S.StackClear();
    return 0;
}



