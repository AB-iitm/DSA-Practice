//Question-https://www.geeksforgeeks.org/dsa/split-array-two-equal-sum-subarrays/

class Solution {
  public:
    bool canSplit(vector<int>& arr) 
    {
        int n=arr.size();
        int l=0,r=n-1;
        bool res;
        int leftsum=0,rightsum=0;
        for(int i=0;i<n;i++)
        {
            leftsum+=arr[i];
        }
        for(int i=n-1;i>=0;i--)
        {
            rightsum+=arr[i];
            leftsum-=arr[i];
            if(leftsum==rightsum)
            {
                return true;
            }
        }
        return false;
        
    }
};
