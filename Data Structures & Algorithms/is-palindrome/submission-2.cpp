class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0,j = s.size()-1;
        while(i<j){
            if (!isalpha(s[i]) and !isdigit(s[i])) i++;
            else if (!isalpha(s[j]) and !isdigit(s[i])) j--;
            else if((char)tolower(s[i]) != (char)tolower(s[j])) return false;
            else{
                i++;
                j--;
            }
        }
        return true;

    }
};
