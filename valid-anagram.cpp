//Two simple solutions
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        for(int i {}; i <26;i++){
            if(count(s.begin(),s.end(),97+i)!=count(t.begin(),t.end(),97+i)) return false;
        }
        return true;
    }
};




//Or


class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i {}; i <s.size();i++){
            if(s[i]!=t[i]) return false;
        }
        return true;
    }
};


