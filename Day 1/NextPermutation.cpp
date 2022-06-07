#include<bits/stdc++.h>

using namespace std;

vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here.
    /*
     123
     132
     213
     231
     312
     321
    */
    
    int s = permutation.size();
    int i = s-2;
    for(;i>=0;i--)
    {
        if(permutation[i] < permutation[i+1])
        {
            break;
        }
    }
    if(i<0)
    {
       reverse(permutation.begin(),permutation.end());
        return permutation;
    }
    int j = s-1;
    for(;j>i;j--)
    {
        if(permutation[i]<=permutation[j])
        {
            break;
        }
    }
    swap(permutation[i],permutation[j]);
    reverse(permutation.begin()+1+i,permutation.end());
    return permutation;
}


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        vector<int>permute(n);
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            permute.push_back(x);  
        }

        vector<int> answer = nextPermutation(permute, permute.size());
        for(int i=0;i<answer.size();i++)
        {
            if(answer[i]!=0)
                cout<<answer[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}