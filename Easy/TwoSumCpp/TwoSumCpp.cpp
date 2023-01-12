#include <iostream>
#include "Solution.h"
using namespace std;



int main()
{
    vector<int> input = { 3,2,4 };

    Solution sol;

    vector<int> result = sol.twoSum(input, 6);
    cout << "\n\nThe result of the TwoSum Method: " << result[0] << ", " << result[1];

    //Output is 1, 2
}
