class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
       stack<int>st;
       for(int c:asteroids){
        bool x=true;
        while(!st.empty() && c<0 && st.top()>0){
            if(st.top()<abs(c)){
                st.pop();
            }
            else if(st.top()==abs(c)){
                st.pop();
                x=false;
                break;
            }
            else{
                x=false;
                break;
            }
           
        }
         if(x) st.push(c);
       }
       vector<int>arr;
       while(!st.empty()){
        arr.push_back(st.top());
        st.pop();
       }
       reverse(arr.begin(),arr.end());
       return arr;
    }
};