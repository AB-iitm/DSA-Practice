//Question-https://www.geeksforgeeks.org/dsa/mean-range-array/

class Solution {
  public:
    vector<int> findMean(vector<int>& arr, vector<int>& q) 
    {
        vector<int>ans;
        int l,r;
        int n=arr.size();
        for(int i=0;i<q.size()/2;i++)
        {
            int sum=0,mean;
            l=q[2*i];
            r=q[2*i+1];
            for(int j=l;j<=r;j++)
            {
                sum+=arr[j];
            }
            mean=sum/(r-l+1);
            ans.push_back(mean);
        }
        return ans;
    }
};
