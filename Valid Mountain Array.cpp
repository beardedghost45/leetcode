class Solution {
public:
    bool validMountainArray(vector<int>& A) {
        if(A.size()<3)
            return false;
        else{
        int k=(max_element(A.begin(),A.end()) - A.begin());
            if(A.size()==k+1||k==0)
                return false;
        for(int i=0;i<k;i++){
            if(A[i]>=A[i+1])
                return false;}
        for(int i=k;i<A.size()-1;i++){
            if(A[i]<=A[i+1])
                return false;}
        }
        return true;
    }
};
