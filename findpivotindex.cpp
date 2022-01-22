class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalsum=0;
        int pivot=-1;
         for(int i=0; i<nums.size(); i++)
        {
            totalsum+=nums[i];
        }
        int lsum=0;
        int rsum=totalsum;
        
        
        for(int i=0; i<nums.size(); i++)
        {
           
            rsum=rsum-nums[i];
            if(lsum==rsum)
                return i;
            
            lsum+=nums[i];
        }
        return -1;
        
    }
};