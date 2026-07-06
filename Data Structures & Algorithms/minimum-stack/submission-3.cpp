class MinStack {
    private:
    stack<long long>st;
    long long mini;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty()){
            st.push(val);
            mini=val;
            return;
        }
        
        if(val > mini){
            st.push(val);
        }else{
            st.push(2LL*val-mini);
            mini=val;
        }
    }
    
    void pop() {
        if(st.empty())return ;
        long long x = st.top();
        st.pop();
        if(mini> x){
            mini= 2LL*mini-x;
        }
        
    }
    
    int top() {
        if(st.empty()) return -1;
        long long x = st.top();
        if(x>=mini){
            return x;
        }
        return (int)mini;
    }
    
    int getMin() {
        return (int)mini;
    }
};
