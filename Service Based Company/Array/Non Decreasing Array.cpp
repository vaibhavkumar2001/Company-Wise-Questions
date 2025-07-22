// 665. Non-decreasing Array

// Given an array nums with n integers, your task is to check if it could become non-decreasing by modifying at most one element.

// We define an array is non-decreasing if nums[i] <= nums[i + 1] holds for every i (0-based) such that (0 <= i <= n - 2).


// Example 1:

// Input: nums = [4,2,3]
// Output: true
// Explanation: You could modify the first 4 to 1 to get a non-decreasing array.
// Example 2:

// Input: nums = [4,2,1]
// Output: false
// Explanation: You cannot get a non-decreasing array by modifying at most one element.

// 💡 Problem:
// We are given an array of numbers and we need to check can we make it sorted in non-decreasing order by changing at most one number.

#include<bits/stdc++.h>
using namespace std;

bool checkPossibility(vector<int>& nums) {
    int n = nums.size();
    int count = 0;
    for(int i = 0;i < n - 1;i++) {
        if(nums[i] > nums[i + 1]) {
            count++;
            if(count > 1) return false;
            if(i == 0 || nums[i - 1] <= nums[i + 1]) {
                nums[i] = nums[i + 1];
            }
            else {
                nums[i + 1] = nums[i];
            }
        }
    }
    return true;
}
int main() {
    vector<int>nums = {4,2,3};
    cout<<checkPossibility(nums)<<endl;
    return 0;
}    