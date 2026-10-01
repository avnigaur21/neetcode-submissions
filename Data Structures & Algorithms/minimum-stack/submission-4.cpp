class MinStack {
public:
    stack<long long> st;
    long long mini;
     
    MinStack() {
        mini = LLONG_MAX;
    }
    
    void push(int val) {
        long long x = val;
        if(st.empty()){
            st.push(x);
            mini = x;
        }
        
        else if(x > mini){
            st.push(x);
        }
        else{
            st.push(2 * x - mini);
            mini = x;
        }
               
    }
    
    void pop() {

        if(st.empty()) return;
        else{
            long long x = st.top();
            st.pop();
            if(x < mini){
                mini = 2 * mini - x;
            }
        }
        
    }
    
    int top() {
        if(st.empty()) return -1;
        else{
            if(st.top() < mini) return (int)mini;
            return (int)st.top();
        }
        
    }
    
    int getMin() {
        return (int)mini;
    }
};
