#include<bits/stdc++.h>
using namespace std;
struct compare
{
    bool operator()(pair<int,int>p1,pair<int,int>p2)
    {
        if(p1.second==p2.second)
            return p1.first>p2.first;
        else
            return p1.second<p2.second;
    }
};
void kfrequent(int arr[],int n,int k)
{
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    vector<pair<int,int>>freq(mp.begin(),mp.end())
    priority_queue<pair<int,int>,vector<pair<int,int>>,compare>pq(freq.begin(),freq.end());
    for(int i=0;i<n;i++)
    {
        cout<<pq.top().first<<" ";
        pq.pop();
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
    kfrequent(arr,n,k);
    return 0;
}
