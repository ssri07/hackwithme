class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        set<vector<int>> st;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        
        if(n < 4) return ans;
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int k=j+1,l=n-1;
                while(k<l)
                {
                    long long s=(long long)nums[i]+(long long)nums[j]+(long long)nums[k]+(long long)nums[l];
                    if(s==target)
                    {
                        vector<int> t;
                        t.push_back(nums[i]);
                        t.push_back(nums[j]);
                        t.push_back(nums[k]);
                        t.push_back(nums[l]);
                        // ans.push_back(t);
                        st.insert(t);
                        // int cur=nums[k];
                        // while(k<n && cur==nums[k])
                        //     k++;
                        // cur=nums[l];
                        // while(l>=0 && cur==nums[l])
                        //     l--;
                    }
                    if(s<=target)
                        k++;
                    if(s>target)
                        l--;
                }
            }
        }
        for(auto x:st)
            ans.push_back(x);
        return ans;
    }
};