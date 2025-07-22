#include<bits/stdc++.h>
using namespace std;
int maxLength(vector<int>& arr) {
    // code here
    int n = arr.size();
    unordered_map<int,int>prefixMap;
    int maxi = 0;
    int sum = 0;
    for(int i = 0;i < n;i++) {
        sum += arr[i];
        if(sum == 0) {
            maxi = i + 1;
        }
        else if(prefixMap.find(sum) != prefixMap.end()) {
            maxi = max(maxi,i - prefixMap[sum]);
        }
        else {
            prefixMap[sum] = i;
        }
    }
    return maxi;
}
int main() {
    vector<int>arr = { 15, -2, 2, -8, 1, 7, 10, 23 };
    cout << maxLength(arr);
}