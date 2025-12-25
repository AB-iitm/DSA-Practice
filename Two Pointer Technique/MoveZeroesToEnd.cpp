//Question- https://www.geeksforgeeks.org/dsa/move-zeroes-end-array/
class Solution 
{
  public:
    void pushZerosToEnd(vector<int>& arr) 
    {
        vector<int>res;
        int count=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==0)
            {
                count++;
            }
            else
            {
                res.push_back(arr[i]);
            }
        }
        for(int i=1;i<=count;i++)
        {
            res.push_back(0);
        }
        for(int i=0;i<arr.size();i++)
        {
            arr[i]=res[i];
        }
    }
};
