// INFO450Multiply this program wil create a multiplication table for number 1-10//
// Project by Kristoffer Louie Balinang

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
	cout
		<< "Project by Kristoffer Louie Balinang" << endl
		<< " " << endl
		<< "Multiplication Table:" << endl
		<< " " << endl
		<< "   0\t1\t2\t3\t4\t5\t6\t7\t8\t9\t10" << endl
		<< " " << endl;
  
     for(int column = 0; column <= 10; column++)
     {
          cout << column << "  ";
			
			for(int row = 0; row <= 10; row++)
			 {
			cout << row * column << '\t';
			 }
         
		cout << endl;
     }
     return 0;
}