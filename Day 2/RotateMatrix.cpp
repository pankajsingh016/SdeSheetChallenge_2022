#include<bits/stdc++.h>

using namespace std;


void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,m;
        cin>>n>>m;

        vector<vector<int>> arr(n);
        for(int i=0;i<n;i++)
        {
            vector<int>xi(m);
            for(int i=0;i<m;i++)
            {
                cin>>xi[i];
            }
            arr.push_back(xi);
        }

        rotateMatrix(arr,n,m);

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }

    }
    return 0;
}