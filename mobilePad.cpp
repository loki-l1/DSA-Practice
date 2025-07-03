#include<iostream>
using namespace std;
void pad(string p,string up)
{
    if(up.empty())
    {
        cout<<p<<",";
        return;
    }
    int digit=up.at(0)-'0';
    for(int i=(digit-1)*3;i<digit*3;i++)
    {
        char ch=(char)('a'+i);
        pad(p+ch,up.substr(1));
    }
}
int main()
{
    pad("","12");
}