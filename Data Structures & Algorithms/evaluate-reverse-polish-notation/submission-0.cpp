class Solution {
public:
    int operate(int a, int b, const string &op){
        if(op == "+")
            return a+b;
        if(op == "-")
            return a-b;
        if(op == "*")
            return (long)a*(long)b;
        if(op == "/")
            return a/b;
        
        return -1;
        
    }
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        int result =0;
        for(const string &token: tokens){
            if(token =="+" ||token =="-"||token =="*"||token =="/"){
                int b=st.top();
                st.pop();
                int a =st.top();
                st.pop();

                result=operate(a,b,token);
                st.push(result);
            }else{
                st.push(stoi(token));
            }
        }
        return st.top();
    }
};
