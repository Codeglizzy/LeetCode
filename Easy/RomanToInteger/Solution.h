#pragma once
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
	int romanToInt(string s){
		unordered_map<char, int> mapGuy{
		{'I', 1},
		{'V', 5},
		{'X', 10},
		{'L', 50},
		{'C', 100},
		{'D', 500},
		{'M', 1000},
		};
		int answer = 0;
		for (int i = 0; i < s.size(); i++) {
			if (mapGuy[s[i]] < mapGuy[s[i + 1]])
				answer -= mapGuy[s[i]];
			else
				answer += mapGuy[s[i]];
		}
		return answer;
	}
	
};