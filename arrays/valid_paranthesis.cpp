class Solution {
public:
void func(vector<string>&arr,int n,int open,int close,string x){
    if(x.size()==2*n){
        arr.push_back(x);
        return;
    }
    if(open<n){
        func(arr,n,open+1,close,x+"(");
    }
    if(close<open){
        func(arr,n,open,close+1,x+")");
}
}
    vector<string> generateParenthesis(int n) {
        string x;
        vector<string>arr;
        func(arr,n,0,0,x);
        return arr;
    }
};