#include <bits/stdc++.h> 
using namespace std;

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) 
{
	// Write your code here.    
    vector<int> answer;
    int i=0;
    int j=0;
    
    while(i<(n) && j<(m))
    {
        if (arr2[i] == arr1[j])
        {
            answer.push_back(arr2[i]);
            i++;
            answer.push_back(arr1[j]);
            j++;
        }
        else if(arr2[i] < arr1[j])
        {
            answer.push_back(arr2[i]);
            i++;
        }
        else{
            answer.push_back(arr1[j]);
            j++;
        }
    }
    
    while(i<n)
    {
        answer.push_back(arr2[i]);
        i++;
    }
    while(j<m)
    {
        answer.push_back(arr1[j]);
        j++;
    }
    
    return answer;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int M,N;
        cin>>M>>N;
        vector<int>arr1(M);
        for(int i=0;i<M;i++)
        {
            cin>>arr1[i];
        }
        
        vector<int>arr2(N);
        for(int i=0;i<N;i++)
        {
            cin>>arr2[i];
        }

        vector<int>answer = ninjaAndSortedArrays(arr1,arr2,M,N);
        for(int i=0;i<(M+N); i++)
        {
            cout<<answer[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}