#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define lld long long int
#define vi vector<int>
#define vii vector<vector<int>>

void sort012(int *arr, int n)
{
   //   Write your code here
    int zero = 0;
    int one = 0;
    int two = 0;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            zero++;
        }
        else if(arr[i]==1)
        {
            one++;
        }
        else{
            two++;
        }
    }
    
    for(int i=0;i<zero;i++)
            arr[i] = 0;
    for(int i=zero;i< (zero+one);i++)
            arr[i] = 1;
    for(int i=zero+one; i<(n);i++)
            arr[i] = 2;
    
}

int main()
{
    int t;
    cin>>t;
    while(t--)
        {
    
            int n;
            cin>>n;

            int arr[n];
            for(int i=0;i<n;i++)
            {
                cin>>arr[i];
            }

            sort012(arr,n);

            for(int i=0;i<n;i++)
            {
                cout<<arr[i]<<" ";
            }cout<<endl;
        }
    return 0;

}