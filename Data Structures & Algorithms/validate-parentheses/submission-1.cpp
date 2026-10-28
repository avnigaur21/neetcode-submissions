class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int size = s.length();

        for(int i = 0; i < size; i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                st.push(s[i]);
            }
            else{
                if(st.empty()) return false;
                else{
                    int top = st.top();
                    if((s[i] == ')' && top != '(') || (s[i] == '}' && top != '{') || (s[i] == ']' && top != '[' )){
                        return false;

                    }

                    st.pop();
                }
            }
        }

        return st.empty();
        
    }
};
