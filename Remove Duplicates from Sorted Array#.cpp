class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>::iterator n;
         n = unique(nums.begin(), nums.end()); 
        nums.resize(distance(nums.begin(), n)); 

        return(nums.size()) ;
    }
};
