class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> answer;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int j; 
        int k;

        for(int i = 0; i < n; i++){
            if(i > 0 && nums[i-1] == nums[i]) continue;
            j = i + 1;
            k = n - 1;
            while(j < k){
                if((nums[i] + nums[j] + nums[k]) == 0) {
                    answer.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;

                    while(j < k && nums[j] == nums[j-1]) j++;
                    while(j < k && nums[k] == nums[k+1]) k--;

                }

                else if((nums[i] + nums[j] + nums[k]) < 0){
                    j++;
                }

                else{
                    k--;
                }
            }
        }

        return answer;
        
    }
};
