// Temperature Converter.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int celsius = 0;
	double ferenheit = 0;

	while (celsius < 101)
	{
		ferenheit = celsius * 1.5 + 32;
		cout << "Ferenheit:  " << ferenheit << endl;
		cout << "Celsius: " << celsius << endl;
		celsius++;
	}
    return 0;
}

