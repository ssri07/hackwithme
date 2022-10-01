class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        int n=intervals.size();
        if(n==0)
            return ans;
        
        sort(intervals.begin(),intervals.end());
        int st=intervals[0][0],ed=intervals[0][1];
        for(int i=1;i<n;i++)
        {
            if(ed<intervals[i][0])
            {
                ans.push_back({st,ed});
                st=intervals[i][0];
                ed=intervals[i][1];
            }
            else
                ed=max(ed,intervals[i][1]);
        }
        
        ans.push_back({st,ed});
        
        return ans;
    }
};