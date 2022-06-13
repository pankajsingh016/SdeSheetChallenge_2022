#include<bits/stdc++.h>

using namespace std;

vector<vector<int>>mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
   vector<vector<int>> answer;
   sort(intervals.begin(),intervals.end());

    vector<int> temp = intervals[0];

   for(int i=0;i<intervals.size();i++)
   {
        if(intervals[i][0] <= temp[1])
        {
            temp[1] = max(intervals[i][1],temp[1]);
        } 

        else{
            answer.push_back(temp);
            temp = intervals[i]; 
        }

   }

   answer.push_back(temp);
   return answer;
}

int main()
{
    int N;
    cin>>N;

    vector<int> z(2);
    vector<vector<int>> intervals(N,z);
    for(int i=0;i<N;i++)
    {
        cin>>intervals[i][0];
    }
    for(int i=0;i<N;i++)
    {
        cin>>intervals[i][1];
    }

    mergeIntervals(intervals);

    // for(int i=0;i<N;i++)
    // {
    //     cout<<intervals[i][0]<<" "<<intervals[i][1];
    //     cout<<endl;
    // }

    return 0;
}