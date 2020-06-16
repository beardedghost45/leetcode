class Solution {
public:
    int findNumbers(vector<int>& nums) {
         int counter = 0,digits; 
        for(auto num: nums){   
            digits = floor(log10(num)) + 1;
            if(digits % 2 == 0){  
                counter = counter + 1;  
            }
        }
        return counter; 
    }

};
