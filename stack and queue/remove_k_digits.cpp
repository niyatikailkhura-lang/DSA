class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char>st;
        for(char x:num){
            while(!st.empty() && st.top()>x && k>0){
                st.pop();
                k--;
            }
            st.push(x);
        }
        while(!st.empty() && k>0){
            st.pop();
            k--;
        }
        string ans="";
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        int i=0;
        while(ans[i]=='0' &&  i<ans.size()){
            i++;
        }
        ans=ans.substr(i);
        if(ans=="")return "0";
        return ans;
    }
};