class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=s.size();
        int x=t.size();

       int i =0,j =0;
        while(i<n && j<x){
            if(s[i]==t[j])   i++;
            j++;
        }
        return i == s.size();
    }
};