#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{  
    //previous nearest smallest element
    vector<int> v{1, 6, 4, 10, 2, 5};
    vector<int> ans;
    stack<int> s;
    s.push(v[0]);
    ans.push_back(-1);
    for(int i=1;i<v.size();i++)
    {
        while(!s.empty()&&s.top()>v[i])
        s.pop();
        if(s.empty()){s.push(v[i]);ans.push_back(-1);}
        else
        {
            ans.push_back(s.top());
            s.push(v[i]);
        }
    }
    for(auto x:ans)
    cout<<x<<" ";
    return 0;
}