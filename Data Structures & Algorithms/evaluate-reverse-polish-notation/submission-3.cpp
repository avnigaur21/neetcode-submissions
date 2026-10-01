class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int n = tokens.size();
        int ans;

        for(int i = 0; i < n; i++){
            if(tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" 
            && tokens[i] != "/"){
                int num = stoi(tokens[i]);
                st.push(num);
            }
            else{
                int num1 = st.top();
                st.pop();
                int num2 = st.top();
                st.pop();
                
                if(tokens[i] == "+") ans = num1 + num2;
                else if(tokens[i] == "/") ans = num2 / num1;
                else if(tokens[i] == "*") ans = num1 * num2;
                else ans = num2 - num1; 
                st.push(ans);

            }

        }

        return st.top();

        
    }
};
