//Twist (check out the 3rd test case in console)
//Check for the bulls first then for the cows
class Solution {
public:
    string getHint(string secret, string guess) {
        int n=secret.size(),i,bulls=0,cows=0;
        unordered_map<char,int>m;
        for(i=0;i<n;i++)
            m[secret[i]]++;
        for(i=0;i<n;i++){
            if(m[guess[i]] && guess[i]==secret[i]){
                bulls++;
                m[guess[i]]--;
            }
        }
        for(i=0;i<n;i++){
            if(m[guess[i]] && guess[i]!=secret[i]){
                cows++;
                 m[guess[i]]=m[guess[i]]-1;
            }
        }
        string ans=to_string(bulls)+'A'+to_string(cows)+'B';
        return ans;
    }
};
