class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int lastDig = digits[digits.size() - 1];
        int i;
        if(lastDig != 9) lastDig++;
        else {
            for(i = digits.size()-1; (i >= 0) && (digits[i] == 9); i--) {
                digits[i] = 0;
                i--;
            }
            if(digits[i]>0) digits[i]++;
            else digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};