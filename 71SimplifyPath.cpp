// https://leetcode.com/problems/simplify-path/description/

// TC - O(len(path)), SC - O(len(path))
class Solution {
public:
    string simplifyPath(string path) {
        vector<string> all_locations;
        int n = path.length(), i=0;
        while(i<n)
        {
            string cur_path;
            while(i<n && path[i]!='/')
            {
                cur_path += path[i];
                i++;
            }
            if(cur_path.length())
            {
                if(cur_path=="..")
                {
                    if(all_locations.size()) all_locations.pop_back();
                }
                else if(cur_path!=".")
                {
                    all_locations.push_back(cur_path);
                }
            }
            i++;
        }
        string final_path="";
        for(auto i:all_locations)
        {
            final_path += '/' + i;
        }
        if(!final_path.length()) final_path="/";
        return final_path;
    }
};