#include <bits/stdc++.h> 

using namespace std;

long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long cur_sum = 0;
    long long maxsum = 0;
    
    for(int i=0;i<n;i++)
    {
        cur_sum = cur_sum + arr[i];
        
        if(cur_sum < 0)
            cur_sum = 0;
        
        if(maxsum < cur_sum)
            maxsum = cur_sum;
    }
    
    return maxsum;
}


int main()
{
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }

    long long sum = maxSubarraySum(arr,N);
    cout<<sum<<endl;
    return 0;
}