class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()){
            return false;
        }
        else{
            unordered_map <char,int> hashmap1;
            unordered_map <char,int> hashmap2;
            for(int i=0;i<s.size();i++){
               hashmap1[s[i]]++;
               hashmap2[t[i]]++;
            }
            return hashmap1==hashmap2;

        }
    }
};