// 189. Rotate Array
// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

// Example 1:

// Input: nums = [1,2,3,4,5,6,7], k = 3
// Output: [5,6,7,1,2,3,4]
// Explanation:
// rotate 1 steps to the right: [7,1,2,3,4,5,6]
// rotate 2 steps to the right: [6,7,1,2,3,4,5]
// rotate 3 steps to the right: [5,6,7,1,2,3,4]
// Example 2:

// Input: nums = [-1,-100,3,99], k = 2
// Output: [3,99,-1,-100]
// Explanation: 
// rotate 1 steps to the right: [99,-1,-100,3]
// rotate 2 steps to the right: [3,99,-1,-100]

// Constraints:

// 1 <= nums.length <= 105
// -231 <= nums[i] <= 231 - 1
// 0 <= k <= 105

#include <bits/stdc++.h>
using namespace std;

void rotateArray(vector<int>& nums, int k) {
    int n = nums.size();
    vector<int> ans(n);
    for(int i = 0; i < n; i++) {
        int index = (i + k) % n;
        ans[index] = nums[i];
    }
    nums = ans; // Update the original array
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    rotateArray(nums, 2);
    
    // Print rotated array
    for(int x : nums) {
        cout << x << " ";
    }
    return 0;
}
