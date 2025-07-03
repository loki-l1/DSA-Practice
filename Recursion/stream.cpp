#include<iostream>
using namespace std;
void skip(string p, string up)
{
    if(up.empty())
    {
        cout<<p;
        return;
    }
    else{
        char ch=up.at(0);
        if(ch=='a')
        {
            skip(p,up.substr(1));
        }
        else
        {
            skip(p+ch,up.substr(1));
        }
    }
}
string skip1parameter(string up)
{
    if(up.empty())
    {
        return up;
    }
    else
    {
        char ch=up.at(0);
        if(ch=='a')
        {
            return skip1parameter(up.substr(1));
        }
        else{
            return ch+skip1parameter(up.substr(1));
        }
    }
}
string skipSubstring(string up)
{
    if(up.empty())
    {
        return up;
    }
    else
    {
        string skipStr="abc";
        if(up.find(skipStr)==0)
        {
            return skipSubstring(up.substr(skipStr.length()));
        }
        else
        {
            return up[0]+skipSubstring(up.substr(1));
        }
    }
}
int main()
{
    skip("","abbacdh");
    cout<<endl;
    cout<<skip1parameter("abbacdh");
    cout<<endl;
    cout<<skipSubstring("abcxxabcxxabcdebabc");
}