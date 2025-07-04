class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // Use the Hashing Technique to make it efficient
        unordered_set<int> seen;
        for(int i=0;i<nums.size();i++){
            if(seen.count(nums[i])){
                return true;
            }
            else{
                seen.insert(nums[i]);
            }
        }
        return false;
    }
};