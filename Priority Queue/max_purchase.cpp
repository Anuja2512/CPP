#include<bits/stdc++.h>
using namespace std;
int purchasemax(int arr[],int n,int sum)
{
    priority_queue<int,vector<int>,greater<int>>pq(arr,arr+n);
    int res=0;
    while(sum>=0&&pq.empty()==false&&pq.top()<=sum)
    {
        sum=sum-pq.top();
        pq.top();
        res++;
    }
    return res;
}
int main()
{
    int n,sum;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>sum;
    cout<<purchasemax(arr,n,sum);

return 0;
}


