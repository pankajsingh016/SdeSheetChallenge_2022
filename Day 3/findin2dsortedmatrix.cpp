#include <bits/stdc++.h> 
#include <vector>
using namespace std;

bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
    // Write your code here.
    int i=0;
    int j=n-1;
    
    while(j>=0 && i<m)
    {
        if(target== mat[i][j])
        {
            return true;
        }
        else if(mat[i][j] < target)
        {
            i=i+1;
        }
        else if(mat[i][j] > target )
        {
            j = j-1;
        }
    }
    
    return false;
   
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n,target;
        cin>>m>>n>>target;

        vector<vector<int>>mat;
        for(int i=0;i<m;i++)
        {
            vector<int>temp;
            for(int j=0;j<n;j++)
            {
                int x;
                cin>>x;
                temp.push_back(x);
            }

            mat.push_back(temp);
            temp.clear();
        }

        cout<<findTargetInMatrix(mat,m,n,target)<<endl;
    }
    return 0;
}