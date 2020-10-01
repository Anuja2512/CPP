#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.size()<<endl;
    cout<<s.top()<<endl;  //as its stack it fills as 1st no. go to bottom
    s.pop();
    cout<<s.top();
    return 0;
}
/*
    30      20
            --
    --
    20      10
    --
    10



*/
