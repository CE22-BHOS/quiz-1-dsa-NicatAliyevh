class question3{
    public:
        stack<int>s;
        stack<int>mn;
        void push(int x){
            if(s.empty()){
                s.push(x);
                mn.push(x);
            }
            else if(x > mn.top()){
                s.push(x);
                mn.push(s.top());
                
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
        int top(int x){
            return s.top();
        }
        int getMin(){
            return mn.top();
        }
}