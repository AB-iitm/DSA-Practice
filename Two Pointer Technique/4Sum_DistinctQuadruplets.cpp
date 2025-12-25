class Solution 
{
  public:
    vector<vector<int>> fourSum(vector<int> &arr, int target) 
    {
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;
        int n=arr.size();
        int m1,m2;
        set<vector<int>>memory;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int l=j+1;
                int r=n-1;
                while(l<r)
                {
                    int sum=arr[i]+arr[j]+arr[l]+arr[r];
                    if(sum>target)
                    {
                        r--;
                    }
                    else if(sum<target)
                    {
                        l++;
                    }
                    else
                    {
                        if(memory.find({arr[i],arr[j],arr[l],arr[r]})==memory.end())
                        {
                            ans.push_back({arr[i],arr[j],arr[l],arr[r]});
                            memory.insert({arr[i],arr[j],arr[l],arr[r]});
                        }
                        l++;
                    }
                }
            }
        }
        return ans;
    }
};
