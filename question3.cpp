class question3{
    private:
        stack<int>s;
        stack<int>mn;
    public:
        void push(int x){
            if(s.empty()){
                s.push(x);
                mn.push(x);
            }
            else if(x > mn.top()){
                s.push(x);
                mn.push(mn.top());
                
            }
            else{
                s.push(x);
                mn.push(x);
            }
        }
        int pop(){
            int temp = s.top();
            s.pop();
            return temp;
        }
        int top(){
            return s.top();
        }
        int getMin(){
            return mn.top();
        }
};