#pragma once
#include <iostream>
class Fibonaci
{
	int numOfOpperations;
	int fibonaciLvl0(int n);
	int fibonaciLvl1(int n);
	int fibonaciLvl2(int n);
	int fibonaciLvl3(int n, int a = 0, int b = 1);
	int* memoArr;
public:
	int calculate(int n, int whichFunction);

   
};

