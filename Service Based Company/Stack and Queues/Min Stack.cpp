#include <bits/stdc++.h>
using namespace std;
class MinStack {
public:
    vector<pair<int,int>>st;
    MinStack() {
    }
    
    void push(int val) {
        if(st.empty()){
            pair<int,int>p;
            p.first = val;
            p.second = val;
            st.push_back(p);
        }
        else {
            if(!st.empty()){
                pair<int,int>p;
                p.first = val;
                int puranaMin = st.back().second;
                p.second = min(puranaMin, val);
                st.push_back(p);
            }
        }
    }
    
    void pop() {
        st.pop_back();
    }
    
    int top() {
        pair<int,int>rightMostElement = st.back();
        return rightMostElement.first;
    }
    
    int getMin() {
        pair<int,int>rightMostElement = st.back();
        return rightMostElement.second;
    }
};

int main() {
    MinStack* obj = new MinStack();
    obj->push(-2);
    obj->push(0);
    obj->push(-3);
    cout << obj->getMin() << endl;   // --> Returns -3.
    obj->pop();
    cout << obj->top() << endl;      // --> Returns 0.
    cout << obj->getMin() << endl;   // --> Returns -2.
}