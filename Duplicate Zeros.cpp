class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
         vector<int> vect2; 
  
    int k=arr.size();
    for (int i=0; i<arr.size(); i++)
        if(arr[i]!=0)
        vect2.push_back(arr[i]);
        else if(arr[i]==0)
        {vect2.push_back(0);
        vect2.push_back(0);}
        
        arr = vect2; 
        arr.resize(k);
    }
};
