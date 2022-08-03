#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{  //previous nearest greatest element
    vector<int> v{10, 4, 2, 20, 40, 12, 30};
    stack<int> s;
    s.push(v[0]);
    vector<int> ans;
    ans.push_back(-1);
    for(int i=1;i<v.size();i++)
    {
        while((!s.empty())&&v[i]>s.top())
        {
           s.pop(); 
        }
        if(s.empty())
        {
            s.push(v[i]);
            ans.push_back(-1);
        }
        else if(v[i]<s.top())
        {
            ans.push_back(s.top());
            s.push(v[i]);
           
        }
    }
    
    for(auto x:ans)
    cout<<x<<" ";
    
    return 0;
}