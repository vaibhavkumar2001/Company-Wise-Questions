// Make array elements unique

// Given an integer array arr[], your task is to find the minimum number of increment operations required to make all the array elements unique. i.e. no value in the array should occur more than once. In one operation, a value can be incremented by 1 only.

// Note: The answer will always fit into a 32-bit integer.

// Examples :

// Input: arr[] = [3, 2, 1, 2, 1, 7]
// Output: 6
// Explanation: After 6 moves, the array could be [3, 4, 1, 2, 5, 7]. It can be shown that it is impossible for the array to have all unique values with 5 or less operations.
// Input: arr[] = [1, 2, 2]
// Output: 1
// Explanation: After one operation [2 -> 3], the array could be [1, 2, 3].
// Input: arr[] = [5, 4, 3, 2, 1]
// Output: 0
// Explanation: All elements are unique.

// C++ Program to find minimum increment operations
// to make array unique by sorting

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minIncrements(vector<int>& arr) {
  	
  	// sort the array in increasing order
  	sort(arr.begin(), arr.end());
  
  	int cnt = 0;
  	for (int i = 1; i < arr.size(); i++) {
      
      	// If current element <= the previous element
    	if (arr[i] <= arr[i-1]) {
          	
          	// Make the array strictly increasing 
          	// by updating current element to previous element + 1
          	cnt += arr[i-1] + 1 - arr[i];
          	arr[i] = arr[i-1] + 1;
        }
    }
    
    return cnt;
}

int main() {
    vector<int> arr = {3, 2, 1, 2, 1, 7};
    cout << minIncrements(arr);
}