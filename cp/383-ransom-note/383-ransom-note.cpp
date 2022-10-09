class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<int,int> mp;
        for(auto x:magazine)
            mp[x]++;
        
        for(auto x:ransomNote)
        {
            if(mp[x]==0)
                return 0;
            else 
                mp[x]--;
        }
        return 1;
    }
};