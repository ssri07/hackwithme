class Solution {
public:
    // just the partition function is changed rest is completely similar to kth smallest element of gfg - https://www.geeksforgeeks.org/quickselect-algorithm/
    int partition(vector<int>& nums, int l, int r)
    {
        int i,j=r,first=nums[l];
        for(i=r;i>=l+1;i--)
        {
            if(nums[i]<=first)
            {
                swap(nums[i],nums[j]);
                j--;
            }
        }
        swap(nums[j],nums[l]);
        return j;
    }
    int kthlargest(vector<int>& nums, int l, int r, int k)
    {
        if(k>0 && k<=r-l+1)
        {
            int index=partition(nums,l,r);
            
            if(index-l == k-1)
                return nums[index];
            
            if(index-l > k-1)
                return kthlargest(nums,l,index-1,k);
            
            return kthlargest(nums,index+1,r,k-index+l-1);
        }
        return INT_MAX;
    }
    int findKthLargest(vector<int>& nums, int k) {
        int l=0, r=nums.size()-1;
        
        return kthlargest(nums,l,r,k);
    }
};