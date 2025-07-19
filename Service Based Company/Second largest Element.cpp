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
