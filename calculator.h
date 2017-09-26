#pragma once
#include <iostream>
#include <string>

using namespace std;

class Calculator {
public:
	Calculator() {}

	bool isPrime(int num);

	bool isPalindrome(int num);

	int findFactors(int num);

	bool isAFactor(long long numerator, long double denominator);

	string bigNumCharMult(string a, char b);
};
