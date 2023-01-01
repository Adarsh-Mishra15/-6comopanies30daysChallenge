class Solution {
public:
   int evalRPN(vector<string>& tokens) {
        int ans=0;
int n=tokens.size();
        stack<long long int>s;
        
        for(int i=0;i<n;i++){
            if(tokens[i]=="+"||tokens[i]=="-"||tokens[i]=="/"||tokens[i]=="*"){
                long long int n1=s.top();
                s.pop();
                long long int n2=s.top();
                s.pop();
                
                s.push(solve(n1,n2,tokens[i]));
            }
            else s.push(stoi(tokens[i]));
        }
        
        return s.top();
    }
    long long int solve(int n1,int n2,string opr){
        if(opr=="+")  return (long long int)n1+n2;
        if(opr=="/")  return (long long int)n2/n1;
        if(opr=="*")  return (long long int)n1*n2;
        if(opr=="-")  return (long long int)n2-n1;
        return 0;
    }
};
