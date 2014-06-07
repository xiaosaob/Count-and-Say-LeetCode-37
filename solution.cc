// The count-and-say sequence is the sequence of integers beginning as follows:
// 1, 11, 21, 1211, 111221, ...

// 1 is read off as "one 1" or 11.
// 11 is read off as "two 1s" or 21.
// 21 is read off as "one 2, then one 1" or 1211.
// Given an integer n, generate the nth sequence.

// Note: The sequence of integers will be represented as a string.

class Solution {
public:
    string countAndSay(int n) {
        string res("1");
        if(n == 1) return res;
        for(int i = 2; i <= n; ++i)
            res = getNext(res);
        return res;
    }
    
    string getNext(string s) {
        string res("");
        int i = 0;
        int start = 0;
        stringstream ss;
        while(i < s.size()) {
            while(i < s.size()-1 && s[i] == s[i+1]) ++i;
            int num = i-start+1;
            ss<<num;
            ss<<s[i];
            ++i;
            start = i;
        }
        ss>>res;
        return res;
    }
   
};
