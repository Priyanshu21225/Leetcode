class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //first we will find the size of the array 
        int n = nums.size();

        // We will find the sum of n numbers 
        int sum = (n*(n+1))/2;

        //We will find the sum of the elements in the array 
        // We will take an temp sum container to add the numbers
        int s1 = 0;
        for(int i=0;i<n;i++){
            s1=nums[i]+s1;
        }
        
        //Now we will find the difference between them 
        //And the differnce is the missing number 
        return (sum-s1);
    }
};