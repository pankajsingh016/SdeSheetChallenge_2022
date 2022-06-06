// # Day 1

// Approach : Set the Complete row and column to -1 for which the the row had to made 0. Then, again at the last 
// change the value of -1 to 0.
#include<bits/stdc++.h>
using namespace std;

void print(vector<vector<int>> matrix)
{

    int m = matrix.size();
    int n = matrix[0].size();


    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

void setRowCol(vector<vector<int>> &mat,int x,int y)
{
    int m = mat.size();
    int n = mat[0].size();

    for(int i=0;i<m;i++)
    {
        if(mat[i][y]!=0)
        {
            mat[i][y] = -1; 
        }
    }

    for(int j=0;j<n;j++)
    {
        if(mat[x][j]!=0)
        {
            mat[x][j] = -1;
        }
    }
}

void setZeros(vector<vector<int>> &matrix)
{
    int m = matrix.size();
    int n = matrix[0].size();

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(matrix[i][j]==0)
              {  
                  matrix[i][j] = -1;
                  setRowCol(matrix,i,j);
              }
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(matrix[i][j]==-1)
            {
                matrix[i][j] = 0;
            }
        }
    }

    print(matrix);

}

//input code

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,m;
        cin>>n>>m;

        vector<vector<int>> matrix;

      for(int i=0;i<n;i++)
        {
            vector<int> v1;
            for(int j=0;j<m;j++)
            {
                int x;
                cin>>x;

                v1.push_back(x); 
            }
            matrix.push_back(v1);
        }

        setZeros(matrix);
    }

    return 0;
}