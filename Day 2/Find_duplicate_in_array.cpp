#include <bits/stdc++.h> 

using namespace std;

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
    sort(arr.begin(),arr.end());
    
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]==arr[i+1])
        {
            return arr[i];
        }
    }
    return 0;
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

        cout<<findDuplicate(arr,arr.size())<<endl;
    }

    return 0;
}
