/*
Author:		Derek Paris
Created on:	9/24/17
Solved on:	9/24/17
Problem:	A palindromic number reads the same both ways. The largest palindrome 
			made from the product of two 2-digit numbers is 9009 = 91 × 99.

			Find the largest palindrome made from the product of two 3-digit numbers.
Answer:		906609
*/

/*
#include <iostream>
#include <string>

using namespace std;

class calculator {
	public:
		calculator(){}

		bool isPalindrome(int num) {
			string s = to_string(num);

			if (s[0] == s[5] & s[1] == s[4] & s[2] == s[3])
				return true;
			else
				return false;

		}

		int findFactors(int num) {

			for (int i = 100; i < 1000; ++i) {
				if (num % i == 0) {
					if(to_string(num / i).size() == 3)
						return i;
				}
			}
			return -1;
		}
};

int main() {
	calculator calc;

	//calculator unit tests

	//cout << calc.isPalindrome(854458) << endl;
	//cout << calc.isPalindrome(100100) << endl;
	//cout << calc.findFactors(100000) << endl;
	//cout << calc.findFactors(854458) << endl;

	for (int num = 998001; num > 100000; --num) {
		if (calc.isPalindrome(num)) {
			if (calc.findFactors(num) != -1) {
				cout << num << endl;
				return 1;
			}
		}
	}

return 1;
}
*/