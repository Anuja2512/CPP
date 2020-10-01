#include<bits/stdc++.h>
using namespace std;
bool isBalanced(string str)
{
    stack<int>s;
    for(int i=0;i<str.length();i++)
        if(str[i]=='(')
            s.push(str[i]);
    else
    {
    if(s.empty())
        return 0;
        s.pop();
    }

if(!s.empty())
    return 1;
}

int main()
{
    string str="()()";
    cout<<isBalanced(str)<<endl;
    return 0;
}
