class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0; 
        int n = numbers.size() - 1;
        
        while(i < n){
            if(numbers[i] + numbers[n] == target){
                return {i + 1 , n + 1};
            }

            else if(numbers[i] + numbers[n] > target){
                n--;
            }

            else{
                i++;
            }
        }

        return {};
    }
    
};
