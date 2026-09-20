class Solution {
public:
    int reverseDegree(string s) {
        int reverseDegree = 0;

        for(int i=0; i<s.length(); i++){
            int reverseValue = 26 - (s[i] - 'a');
            reverseDegree += reverseValue * (i+1);
        }
        return reverseDegree;
    }
};