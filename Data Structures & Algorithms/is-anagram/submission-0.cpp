class Solution {
public:
    bool isAnagram(string s, string t) {
       
        if (s.length() != t.length() )
        return false;

        unordered_map<char, int > sem ;
        unordered_map<char, int > sep ;
         for( int i = 0 ; i < s.size();i++){
                sem [s[i]]++;
                sep [t[i]]++;
         }
        return sem == sep ;
        
    }
};
