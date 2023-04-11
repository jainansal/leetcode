// https://leetcode.com/problems/removing-stars-from-a-string/

class Solution {
public:
    string removeStars(string s) {
        string final_string;
        for(auto current:s)
        {
            if(current=='*')
            {
                final_string.pop_back();
            }
            else
            {
                final_string.push_back(current);
            }
        }
        return final_string;
    }
};