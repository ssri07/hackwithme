class Solution {
public:
    int jump(vector<int>& arr) {
        int n=arr.size();
        int jump=0,curreach=0,maxreach=0;
        for(int i=0;i<n-1;i++)
        {
            maxreach=max(maxreach,i+arr[i]);
            if(curreach==i)
            {
                jump++;
                curreach=maxreach;
            }
        }
        if(curreach<n-1)
            return -1;
        return jump;
    }
};