class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        int n = arr.size();
        if(n == 0) return 0;
        unordered_set<int> st;
        int largest = 1;

        for(int i = 0; i < n; i++){
            st.insert(arr[i]);
        }

        for(auto it : st){
            int cnt = 1;
            int x = it;
            if(st.find(it - 1) == st.end()){
                while(st.find(x + 1) != st.end()){
                    cnt++;
                    x++;
                }
            }

            largest =  max(largest, cnt);
        }

        return largest;

        

        // int max_len = 0;
        // sort(arr.begin(), arr.end());
        // int n = arr.size();
        // int last_smaller = INT_MIN;
        // int curr_cnt = 1;
        // int max_cnt = INT_MIN;

        // if(n == 0) return 0;

        // for(int i = 0; i < n; i++){
        //     if(arr[i] - 1 == last_smaller){
        //         curr_cnt++;
        //         last_smaller++;
        //     }
        //     else if(arr[i] != last_smaller){
        //         curr_cnt = 1;
        //         last_smaller = arr[i];
        //     }

        //     max_cnt = max(max_cnt, curr_cnt);
        // }

        // return max_cnt;
    }
};
