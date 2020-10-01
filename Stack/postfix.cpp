#include<bits/stdc++.h>
using namespace std;
int evaluatePostfix(string);

int evaluatePostfix(string str)
{
    stack<int>s;
    int n=str.length();
    for(int i=0;i<n;i++)
    {
        if(isdigit(str[i]))
            s.push(str[i]-'o');
        else
        {

            int val1=s.top();
            s.pop();
            int val2=s.top();
            s.pop();
            char op=str[i];
            cin>>op;
    switch(op)
    {
    case'+':
        s.push(val2+val1);
        break;
    case'-':
        s.push(val2-val1);
        break;
    case'*':
        s.push(val2*val1);
        break;
    case'/':
        s.push(val2/val1);
        break;
    case '5':
        s.push(val2%val2);
        break;
     }
    }
  }
}
int main()
{
    string str="23/*=9-";
    cout<<evaluatePostfix(str)<<endl;
    return 0;
}
