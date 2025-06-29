class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // Rotating the array by n places
        // Doint this to handle the value of d that is greater than the size of array
        k = k % nums.size();
        // First we have the roate the first n-k elements 
        int right1 = (nums.size()-1) -k;
        int left1 = 0;
        while (left1<right1){
            swap(nums[left1],nums[right1]);
            left1++;
            right1--;
        }
        // Now Rotate the elements from d to the end of array
        int right2 = nums.size()-1;
        int left2 = ((nums.size() -1) -k)+1;
        while (left2<right2){
            swap(nums[left2],nums[right2]);
            left2++;
            right2--;
        }
        // Now rotate the whole array 
        int left = 0;
        int right = nums.size()-1;
        while (left<right){
            swap(nums[left],nums[right]);
            left++;
            right--;
        }
    }
};