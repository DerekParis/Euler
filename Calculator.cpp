#include "Calculator.h"

using namespace std;

bool Calculator::isPrime(int num) {
	for (int i = 2; i < num; ++i) {
		if (num % i == 0)
			return false;
	}
	return true;
}

bool Calculator::isPalindrome(int num) {
	string s = to_string(num);

	if (s[0] == s[5] & s[1] == s[4] & s[2] == s[3])
		return true;
	else
		return false;

}

int Calculator::findFactors(int num) {

	for (int i = 100; i < 1000; ++i) {
		if (num % i == 0) {
			if (to_string(num / i).size() == 3)
				return i;
		}
	}
	return -1;
}

bool Calculator::isAFactor(long long numerator, long double denominator) {
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

string Calculator::bigNumCharMult(string a, char b) {

}