class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        // We will declare two integrs 
        // 1) To count consecutive 1's 
        // 2) To store the maximum value of counter before setting the counter to 0
        int count = 0;
        int max = 0;

        // We will iterate in the nums array 
        for (int i=0;i<nums.size();i++){
            // We will count the number of 1's and when we face a zero we will store 
            // that value to the max
            // we will update the value of max only if the value of mzx is smaller than count
            if(nums[i]==1){
                count++;
            }
            else{
                if(count>max){
                    max=count;
                }
                count=0;
            }
        }
        // Now we will return the value which is larger 
            if(max>count){
                return max;
            }
            else{
                return count;
            } 
    }
};