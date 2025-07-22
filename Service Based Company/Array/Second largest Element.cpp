// Second Largest Element

// Given an array of positive integers arr[], return the second largest element from the array. If the second largest element doesn't exist then return -1.

// Note: The second largest element should not be equal to the largest element.

// Examples:

// Input: arr[] = [12, 35, 1, 10, 34, 1]
// Output: 34
// Explanation: The largest element of the array is 35 and the second largest element is 34.
// Input: arr[] = [10, 5, 10]
// Output: 5
// Explanation: The largest element of the array is 10 and the second largest element is 5.
// Input: arr[] = [10, 10, 10]
// Output: -1
// Explanation: The largest element of the array is 10 and the second largest element does not exist.

#include<bits/stdc++.h>
using namespace std;

int secondLargest(vector<int>&nums) {
    int n = nums.size();
    int largest = INT_MIN;
    int second_largest = INT_MIN;
    for(int i = 0;i < n;i++) {
        if(nums[i] > largest) {
            second_largest = largest;
            largest = nums[i];
        }
        else if(nums[i] > second_largest && nums[i] != largest) {
            second_largest = nums[i];
        }
    }
    //ab agr secondlargest kabhi update hi nhi hua toh 
    if(second_largest == INT_MIN) {
        return -1;
    }
    return second_largest;
}
int main() {
    vector<int>nums = {1,2,3,4,5};
    // cout<<secondLargest(nums)<<endl;
    cout << "The Second Largest Element is " << secondLargest(nums) << endl;
    return 0;
}
