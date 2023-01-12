#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	bool isPlaindrome(int x) {
		int newNum = x;
		
		int lastDig = x % 10;
		int firstDig = x;
		long long int reverse = 0;
		reverse = (reverse * 10) + lastDig;
		cout << "Original Number: " << x << "\nFirst Digit: " << firstDig << "\nLast Digit: " << lastDig << endl;
		while (firstDig >= 10)
		{
			firstDig /= 10;
		}

		cout << "Original Number: " << x << "\nFirst Digit: " << firstDig << "\nLast Digit: " << lastDig << endl;

		if (firstDig != lastDig) {
			cout << "Not a palindrome." << endl;
			return false;
		}
		else {
			cout << "Maybe we have something." << endl;
			while (x > 0) {
				x /= 10;
				lastDig = x % 10;
				reverse = (reverse * 10) + lastDig;
				
			}
			reverse /= 10;
			if (reverse == newNum)
			{
				cout << "Yes we do, this is a palindrome: " << reverse << endl;
				return true;
			}
			else {
				cout << "Sorry, this is not a palindrome: " << reverse << endl;
				return false;
			}

		}
		
		cout << "Returned this reversed: " << reverse << endl;
		return true;
	}
};