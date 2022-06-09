#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define lld long long int
#define vi vector<int>
#define vii vector<vector<int>>


#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int s = prices.size();
    int max_diff = 0;
    int minm = INT_MAX;

// Comment Code have O(n^2) time complexity 
//     for(int i=0;i<s;i++)
//     {
//         for(int j=0;j<s;j++)
//         {
//             if(i<j)
//             {
//                 max_diff = max(prices[j]-prices[i], max_diff);
//             }
//         }
//     }
//     if(max_diff < 0)
//         max_diff = 0;

//below code have O(n) time complexity;
    for(int i=0;i<s;i++)
    {
        minm = min(minm,prices[i]);
        max_diff = max(prices[i]-minm, max_diff);
    }
    if(max_diff < 0)
        max_diff = 0;
    return max_diff;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
        {
            int n;
            cin>>n;

            vi price;

            for(int i=0;i<n;i++)
            {
                cin>>price[i];
            }

        }
    return 0;

}