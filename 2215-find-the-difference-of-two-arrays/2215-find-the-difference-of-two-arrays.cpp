class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans1, ans2;
        unordered_set<int> st1;
        unordered_set<int> st2;

        for(auto x : nums1) st1.insert(x);
        for(auto x : nums2) st2.insert(x);

        for(auto x : st1){
            if(!st2.count(x)) ans1.push_back(x);
        }
        for(auto x : st2){
            if(!st1.count(x)) ans2.push_back(x);
        }
        return {ans1, ans2};
    }
};