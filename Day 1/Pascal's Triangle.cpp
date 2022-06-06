#include<iostream>
#include<vector>

using namespace std;

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
    vector<vector<long long int>> answer(n);
    
    for(int i=0;i<n;i++)
    {
        answer[i].resize(i+1);
        answer[i][0] = 1;
        for(int j=1;j<(i);j++)
        {
            answer[i][j] = answer[i-1][j-1] + answer[i-1][j];
        }
          answer[i][i] = 1;
    }
    
    return answer;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int N;
        cin>>N;

        vector<vector<long long int>> final_ans = printPascal(N);
        for(int i=0;i<N;i++)
        {
            int k = final_ans[i].size();
            for(int j=0;j<k;j++)
            {
                cout<<final_ans[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}