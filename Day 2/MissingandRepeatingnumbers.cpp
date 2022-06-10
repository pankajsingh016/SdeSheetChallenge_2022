#include<bits/stdc++.h>

using namespace std;

#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	int freq[n+1] = {0};
    for(int i=0;i<n;i++)
    {
        freq[arr[i]]++;
    }
     
    int M,R;
    for(int i=1;i<n+1;i++)
    {
        if(freq[i]==0)
        {
             M = i;
        }
        
        if(freq[i]>=2)
        {
            R = i;
        }
    }
    pair<int,int> ans;
    ans = make_pair(M,R);
    return ans;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        pair<int,int> ans = missingAndRepeating(arr,n);
        cout<<ans.first<<" "<<ans.second<<endl;
    }

    return 0;
}