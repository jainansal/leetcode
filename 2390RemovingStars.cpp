// https://leetcode.com/problems/removing-stars-from-a-string/

// TC - O(len(s)), SC - O(len(s))
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

// TC - O(len(s)), SC - O(1)
class Solution {
public:
    string removeStars(string s) {
        int i=0, n=s.length(), j=0;
        while(i<n)
        {
            if(s[i]=='*')
            {
                j--;
            }
            else
            {
                s[j]=s[i];
                j++;
            }
            i++;
        }
        return s.substr(0,j);
    }
};