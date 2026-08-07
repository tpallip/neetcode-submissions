class Solution {
public:
    bool isPalindrome(string s) {
        string no_ws;
        string reversed;
        
        for(char c : s) {
            if(isalnum(c)){
                no_ws.push_back(tolower(c));
            }
        }

        for(int i = no_ws.length() - 1; i >=0; i--) {
            reversed.push_back(no_ws[i]); 
        }

        return (reversed == no_ws) ? true : false;
    }
};
