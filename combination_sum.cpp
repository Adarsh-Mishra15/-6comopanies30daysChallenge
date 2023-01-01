class Solution {
public:
       void com_sum(int k,int n,vector<vector<int>>&s,vector<int>&temp_arr,int curr_sum,int i){
        if(k==temp_arr.size()&&n==curr_sum){
            s.push_back(temp_arr);
            // temp_arr.clear();
            return;
        }
        if(temp_arr.size()>=k||curr_sum>=n){
            return;
        }
        for(int j=i+1;j<10;j++){
            temp_arr.push_back(j);
            curr_sum+=j;
            com_sum(k,n,s,temp_arr,curr_sum,j);
            temp_arr.pop_back();
            curr_sum-=j;
        }
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        // set s;
        vector<vector<int>>s;
        vector<int>temp_arr;
        int curr_sum=0;
        int i=0;
        com_sum(k,n,s,temp_arr,curr_sum,i);
        
        return s;
    }
};
