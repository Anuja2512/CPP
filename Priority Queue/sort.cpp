#include<bits/stdc++.h>
using namespace std;
void mysort(int arr[],int n)
{
    //priority_queue<int>pq(arr,arr+n); //max heap
    priority_queue<int,vector<int>,greater<int>>pq(arr,arr+n); //min heap
    for(int i=0;i<n;i++)
    {
        arr[i]=pq.top();
        cout<<pq.top()<<" ";
        pq.pop();
    }

}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];

    }
    mysort(arr,n);
 return 0;
}
