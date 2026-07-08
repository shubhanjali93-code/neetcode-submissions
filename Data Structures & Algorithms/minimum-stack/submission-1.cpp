class MinStack {
    private:
    stack<int>st;
    int mini;
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
            st.push(2*val-mini);
            mini=val;
        }
    }
    
    void pop() {
        if(st.empty())return ;
        int x = st.top();
        st.pop();
        if(mini> x){
            mini= 2*mini-x;
        }
        
    }
    
    int top() {
        if(st.empty()) return -1;
        int x = st.top();
        if(x>=mini){
            return x;
        }
        return mini;
    }
    
    int getMin() {
        return mini;
    }
};
