class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int mini = 1;
        int maxi = INT_MIN;

        for(int i = 0 ; i < piles.size(); i++){

            maxi = max(maxi, piles[i]);
        }

        while(mini < maxi){
            int k = (mini + maxi) / 2;
            long long sum = 0;    
            for(int j = 0; j < piles.size(); j++){
                sum += (piles[j] + k - 1) / k;
                
            }

            if(sum > h) mini = k + 1;
            else{
                maxi = k;
            } 

        }

        return mini;
        
    }
};
