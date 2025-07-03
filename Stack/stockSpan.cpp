#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> span(vector<int> v)
{
    stack< int> s;
    vector<int> ans(v.size());
    for(int i=0;i<v.size();i++)
    {
        while(s.size()>0&&v[s.top()]<v[i])
        {
            s.pop();
        }
        if(s.empty())
        {
            ans[i]=i+1;
        }
        else{
           ans[i]=i-s.top();
        }
        s.push(i);
    }
    return ans;
}
int main()
{
    vector<int> v ={100,80,60,75,85};
    
vector<int>res=span(v);
for(int x:res)
{
    cout<<x<<" ";
}
}