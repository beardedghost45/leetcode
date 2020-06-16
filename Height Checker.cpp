class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>v;
        int cnt=0;
        copy(heights.begin(), heights.end(), back_inserter(v));
         sort(v.begin(), v.end()); 
        for(int i=0;i<heights.size();i++)
        {   if(heights[i]!=v[i])
            cnt++;
}
        return cnt;
    }
};
