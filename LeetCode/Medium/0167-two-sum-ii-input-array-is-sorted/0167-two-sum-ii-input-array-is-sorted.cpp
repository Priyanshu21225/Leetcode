class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0;
        int j=numbers.size()-1;
        while (numbers[i]+numbers[j]!=target){
            if (numbers[i]+numbers[j]==target){
            return{i+1,j+1};
            break;
        }
        else if (numbers[i]+numbers[j]<target){
            i++;
        }
        else if (numbers[i]+numbers[j]>target){
            j--;
        }
        }
        return{i+1,j+1};
    }
};