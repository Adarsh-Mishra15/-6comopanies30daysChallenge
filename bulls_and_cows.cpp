class Solution {
public:
     string getHint(string secret, string guess) {
        map<char,int>mp_secret,mp_guess;
        int bull=0,cow=0;
        
        int n=secret.size();
        for(int i=0;i<n;i++){
            if(secret[i]==guess[i])  bull++;
            else{
                mp_secret[secret[i]]++;
                mp_guess[guess[i]]++;
            }
        }
        
            for(auto i:mp_secret){
                if(mp_guess.find(i.first)!=mp_guess.end()){
                    cow+=min(mp_guess[i.first],i.second);
                }
            }
        
        return to_string(bull)+"A"+to_string(cow)+"B";
    }
};
