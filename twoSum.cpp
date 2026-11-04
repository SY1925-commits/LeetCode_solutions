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
O(n)

class Solution {
public:
    vector<int> twoSum(vector<int>& a, int k) {
        vector<int> res;
        int s1=0, req=0;
        unordered_map<int, int> track;
        for(int i=0; i<a.size(); i++) {
            s1=a[i];
            req = k - s1;
            if(track.find(req) != track.end()) {
                res.push_back(i);
                res.push_back(track[req]);
                return res;
            }
            else
                track[s1] = i;
        }
        return res;
    }
};
*/