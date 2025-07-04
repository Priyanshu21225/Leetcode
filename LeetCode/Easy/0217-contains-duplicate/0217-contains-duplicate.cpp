class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // Use the Hashing Technique to make it efficient
        unordered_set<int> seen;
        for(int num:nums){
            if(seen.count(num)){
                return true;
            }
            else{
                seen.insert(num);
            }
        }
        return false;
    }
};