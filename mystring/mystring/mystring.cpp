// mystring.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	char name[50];
	cout << "enter name " << endl;
	gets_s(name);
	cout << "your name is " << name << endl; 
    return 0;
}

