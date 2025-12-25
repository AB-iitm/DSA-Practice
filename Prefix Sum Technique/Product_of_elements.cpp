//Question- https://www.geeksforgeeks.org/dsa/a-product-array-puzzle/

class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) 
    {
        int n=arr.size();
        int prod=1,count0=0;;
        int flag=0;
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                flag=1;
                count0++;
                continue;
            }
            prod*=arr[i];
        }
        vector<int>res;
        for(int i=0;i<n;i++)
        {
            if(flag==1)
            {
                if(count0>1)
                {
                    res.push_back(0);
                    continue;
                    
                }
                else if(arr[i]!=0)
                {
                    res.push_back(0);
                }
                else
                {
                    res.push_back(prod);
                }
            }
            else
            {
                res.push_back(prod/arr[i]);
            }
        }
        return res;
        
    }
};
