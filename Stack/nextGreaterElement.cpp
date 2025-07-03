#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> nge(vector<int> arr)
{
    stack<int> s;
    vector<int> ans(arr.size());
    for(int i = arr.size() - 1; i >= 0; i--)
    {
        while(!s.empty() && s.top() <= arr[i])
        {
            s.pop();
        }
        if(s.empty())
            ans[i] = -1;
        else
            ans[i] = s.top();
        s.push(arr[i]);
    }
    return ans;
}

int main()
{
    vector<int> arr = {6, 8, 0, 1, 3};
    vector<int> res = nge(arr);
    for(int x : res) cout << x << " ";
    cout << endl;
}