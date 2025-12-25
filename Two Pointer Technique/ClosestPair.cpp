//Question- https://www.geeksforgeeks.org/dsa/given-two-sorted-arrays-number-x-find-pair-whose-sum-closest-x/
class Solution {
  public:
    vector<int> printClosest(int arr[], int brr[], int n, int m, int x) 
    {
        int pa = 0;
        int pb = m - 1;
        int mindiff = INT_MAX;
        vector<int> res; 
        
        while (pa < n && pb >= 0) 
        {
            int currsum = arr[pa] + brr[pb];
            int currdiff = abs(currsum - x);

            
            if (currdiff < mindiff) 
            {
                mindiff = currdiff;
                res = {arr[pa], brr[pb]};
            }
            

            if (currsum > x) 
            {
                pb--;
            } 
            else if (currsum < x) 
            {
                pa++;
            } 
            else 
            {
               
                return {arr[pa], brr[pb]};
            }
        }
        return res;
    }
};
