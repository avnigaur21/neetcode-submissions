class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        int max_len = 0;
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int last_smaller = INT_MIN;
        int curr_cnt = 1;
        int max_cnt = INT_MIN;

        if(n == 0) return 0;

        for(int i = 0; i < n; i++){
            if(arr[i] - 1 == last_smaller){
                curr_cnt++;
                last_smaller++;
            }
            else if(arr[i] != last_smaller){
                curr_cnt = 1;
                last_smaller = arr[i];
            }

            max_cnt = max(max_cnt, curr_cnt);
        }

        return max_cnt;
    }
};
