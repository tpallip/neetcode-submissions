class Solution {
public:

    char marker = 36;

    string encode(vector<string>& strs) {
        string encoded_str;
        for(string s : strs) {
            int len = s.length();
            encoded_str += to_string(len);
            encoded_str += marker;
            encoded_str += s;
        }

        return encoded_str;
    }

    vector<string> decode(string s) {
        vector<string> decoded_str;
        
        int i = 0;
        while(i < (int)s.size()) {
            int len = 0;
            while(s[i] != marker) {
                len = len * 10 + (s[i] - '0');
                i++;
            }
            i++;
            decoded_str.push_back(s.substr(i, len));
            i += len;
        }

        return decoded_str;

        
    }
};
