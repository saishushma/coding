#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{  
    //next nearest smallest element
    vector<int> v{1, 6, 4, 10, 2, 5};
    vector<int> ans;
    stack<int> s;
    s.push(v[v.size()-1]);
    ans.push_back(-1);
    for(int i=v.size()-2;i>-1;i--)
    {
        while(!s.empty()&&s.top()>v[i])
        s.pop();
        if(s.empty()){
            ans.push_back(-1);
            s.push(v[i]);
        }
        else
        {
            ans.push_back(s.top());
            s.push(v[i]);
        }
    }
    reverse(ans.begin(),ans.end());
    for(auto x:ans)
    cout<<x<<" ";
    return 0;
}