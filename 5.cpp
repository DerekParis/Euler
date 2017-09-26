/*
Author:		Derek Paris
Created on:	9/24/17
Solved on:	9/24/17
Problem:	2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

			What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
Answer:		232792560
*/

/*
#include <iostream>

using namespace std;


int main() {

	for (int num = 1; num < 999999999; ++num) {
		for (int i = 1; i <= 20; ++i) {
			if (num % i != 0)
				break;
			else if (i == 20) {
				cout << num << endl;
				return 1;
			}
		}
	}

return 1;
}
*/