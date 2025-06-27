class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0; // To store the maximum wealth among all customers

        for (int i = 0; i < accounts.size(); ++i) {
            int currentWealth = 0; // Wealth of the current customer

            for (int j = 0; j < accounts[i].size(); ++j) {
                currentWealth += accounts[i][j]; // Sum up the wealth of current customer
            }

            maxWealth = max(maxWealth, currentWealth); // Update max wealth if needed
        }

        return maxWealth; // Return the maximum wealth found
    }
};
