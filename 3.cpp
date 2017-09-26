/*
Author:		Derek Paris
Created on:	9/24/17
Solved on:	9/24/17
Problem:	The prime factors of 13195 are 5, 7, 13 and 29.

			What is the largest prime factor of the number 600851475143 ?
Answer:		6857
*/


/*
#include <iostream>
#include <math.h>

#define NUMBER 600851475143

using namespace std;

class calculator {
	public:
		calculator(){}

		bool isPrime(long long num) {
			for (long long i = 2; i < num; ++i) {
				if (num % i == 0)
					return false;
			}
			return true;
		}

		bool isAFactor(long long numerator, long double denominator) {
			long double quotient;

			if (denominator == 0) {
				cout << "ERROR: Dividing by zero" << endl;
				return -1;
			}
			quotient = numerator / denominator;
			quotient -= floor(quotient);

			if (quotient == 0)
				return true;
			else
				return false;
		}
};

int main() {
	calculator calc;
	long long value;

	//calculator unit tests

	//cout << "16 is prime: " << calc.isPrime(16) << endl;
	//cout << "17 is prime: " << calc.isPrime(17) << endl;
	//cout << "16 divisible by 8: " << calc.isAFactor(8) << endl;
	//cout << "16 divisible by 7: " << calc.isAFactor(7) << endl;

	value = NUMBER;

	for (long long i = 2; i < value; ++i) {
		if (calc.isPrime(i) & calc.isAFactor(value, i)) {
			value /= i;
		}
	}
	
	cout << value << endl;

	return 1;
}*/