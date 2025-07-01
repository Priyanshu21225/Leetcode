class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap; // (number -> index)

    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];

        if (numMap.find(complement) != numMap.end()) {
            // If complement is found, return the pair of indices
            return {numMap[complement], i};
        }

        // Save current number with its index
        numMap[nums[i]] = i;
    }

    return {};
    }
};