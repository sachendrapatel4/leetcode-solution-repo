class Solution {
public:
    bool isPalindrome(string s) {

        string filter;
        for(char c: s){
            if(isalnum(c)) filter += tolower(c);
        }
        int n=filter.size();
        int l=0,r=n-1;

        while(l<r){
            if(filter[r]!=filter[l]){
               return false;
            }
            r--;
            l++;;
        }
        return true; 
    }
};