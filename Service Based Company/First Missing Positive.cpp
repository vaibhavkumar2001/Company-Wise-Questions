// 41. First Missing Positive
// Given an unsorted integer array nums. Return the smallest positive integer that is not present in nums.

// You must implement an algorithm that runs in O(n) time and uses O(1) auxiliary space.
 
// Example 1:

// Input: nums = [1,2,0]
// Output: 3
// Explanation: The numbers in the range [1,2] are all in the array.
// Example 2:

// Input: nums = [3,4,-1,1]
// Output: 2
// Explanation: 1 is in the array but 2 is missing.
// Example 3:

// Input: nums = [7,8,9,11,12]
// Output: 1
// Explanation: The smallest positive integer 1 is missing.
  
 
 #include <bits/stdc++.h>
    using namespace std;
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        while(i < n) {
            if(nums[i] > 0 && nums[i] <= n && nums[i] != nums[nums[i] - 1]) {
                swap(nums[i], nums[nums[i] - 1]);
            }
            else {
                i++;
            }
        }
        // ab yahan se jo sorted array h uspe traverse krke missing find krna h 
        for(int i = 0;i < n;i++) {
            if(nums[i] != i + 1) {
                return i + 1;
            }
        }
        // ab yahan tk pachuch gye h toh mtlb ki koi missing element nhi mila h 
        return n + 1;
    }

    int main() {
        vector<int>nums = {1,2,0};
        cout<<firstMissingPositive(nums)<<endl;
        return 0;
    }