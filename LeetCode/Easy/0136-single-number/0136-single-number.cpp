class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // We will use the xor approach as same vales when xoring gives 0
        // example - 1^1=0 
        // so for the question lets take a example arr[]={1,1,2,3,3}
        // we will xor the whole array 
        // 1^1^2^3^3
        // it will return 2 as 1^1=0, 3^3=0 
        // 0^2^0, the final result will be 0
        int XOR = 0;
        for (int i=0;i<nums.size();i++){
            XOR = XOR ^ nums[i];
        }
        return XOR;
    }
};