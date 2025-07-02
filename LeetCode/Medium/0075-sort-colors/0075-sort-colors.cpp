class Solution {
public:
    void sortColors(vector<int>& nums) {
        // We are using the Dutch National Flag Algorithm
        int low = 0;
        int mid = 0;
        int high = nums.size() - 1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                mid++;
                low++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else if(nums[mid]==2){
                swap(nums[mid],nums[high]);
                high--;
            }
        }
            
    }
};