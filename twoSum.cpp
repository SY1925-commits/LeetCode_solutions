/*
Given an integer x, return true if x is a palindrome, and false otherwise.
*/

//O(n^2)
class Solution {
public:
    vector<int> twoSum(vector<int>& a, int k) {
        vector<int> res;
        int s1=0;
        for(int i=0; i<a.size(); i++) {
            s1 = a[i];
            for(int j=0; j<a.size(); j++) {
                if((j != i) && ((a[i] + a[j]) == k))
                    res.push_back(j);
            }
        }
        return res;
    }
};

/*
Input: x = 121
Output: true

Input: x = -121
Output: false

Input: x = 10
Output: false
*/