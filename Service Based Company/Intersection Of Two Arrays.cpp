
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // Sort both arrays
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int N = nums1.size();
        int M = nums2.size();
        int p1 = 0;
        int p2 = 0;

        // Set to store intersection elements
        set<int> intersection;

        // Two-pointer approach
        while (p1 < N && p2 < M) {
            if (nums1[p1] == nums2[p2]) {
                intersection.insert(nums1[p1]);
                p1++;
                p2++;
            } else if (nums1[p1] < nums2[p2]) {
                p1++;
            } else {
                p2++;
            }
        }

        // Convert set to vector
        vector<int> result(intersection.begin(), intersection.end());
        return result;
    }
};
int main() {
    Solution solution;
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};
    vector<int> result = solution.intersection(nums1, nums2);
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}