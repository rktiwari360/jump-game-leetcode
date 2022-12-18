class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int maxstep = INT_MIN;
        if(n == 1){
            
                return true;
           
        }
        for(int i =0;i<n-1;i++){
            if(i+nums[i] > maxstep)
                maxstep = i+nums[i];
            if(i == maxstep)
                return false;
            
        }
        
        return true;
        
    }
};
