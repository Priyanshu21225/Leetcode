class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // Initialize pointer i to track the position of the last unique element
        int i = 0;

        // Start loop from the second element (index 1)
        for (int j = 1; j < nums.size(); j++) {
            // If current element is not equal to the last unique element
            if (nums[i] != nums[j]) {
                // Move the unique element to the next position after i
                nums[i + 1] = nums[j];
                // Increment i to update the last unique position
                i++;
            }
        }

        // Return the count of unique elements (i is the index of last unique element, so length is i+1)
        return (i + 1);
    }
};
