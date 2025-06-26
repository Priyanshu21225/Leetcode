class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // Step-1: We will find the first zero in the array
        // and store its index in variable 'j'
        // This 'j' will act as a pointer to the position where we can swap the next non-zero element
        int j = INT_MIN;  // Initialize j to an invalid index

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                j = i;  // First zero found, set j = i and break
                break;
            }
        }

        // Step-2: Now we move through the array from the index after the first zero
        // Whenever we find a non-zero element, we swap it with the element at index j
        // and increment j to point to the next zero
        for (int i = j + 1; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[j], nums[i]);  // Bring non-zero to the left
                j++;  // Move j to next index where zero might exist
            }
        }
    }
};
