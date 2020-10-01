#include<bits/stdc++.h>
using namespace std;
int klarge(int arr[],int n,int k)
{
    priority_queue <int>pq(arr,arr+n);//max heap
//<int,vector<int>,greater<int>>  min heap
    while(k>0)
    {
        pq.top();
        cout<<pq.top()<<endl;
        pq.pop();
        k--;
    }
}

int main()
{
    int n,k;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cin>>k;
    klarge(arr,n,k);
   // cout<<ans<<endl;
    return 0;
}
