#include<iostream>
#include<stack>
using namespace std;
bool isValid(string str)
{
    stack<char> stk;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='('||str[i]=='{'||str[i]=='[')
        {
            stk.push(str[i]);
        }
        else
        {
            if(stk.empty())
            {
                return false;
            }
           if((stk.top()=='('&&str[i]==')')||(stk.top()=='{'&&str[i]=='}')||(stk.top()=='['&&str[i]==']'))
           {
            stk.pop();
           }
           else{
            return false;
           }
        }
    }
    return stk.size()==0;
}
int main()
{
    cout<<isValid("[()");
}