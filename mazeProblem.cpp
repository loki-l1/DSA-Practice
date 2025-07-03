#include<iostream>
using namespace std;
void count (string p,int r, int c)
{
    if (r==1&&c==1)
    {
        cout<< p<<",";
        return;
    }
    if(r==1&&c>1)
    {
         count(p+'r',r,c-1);
         return;
    }
    if(c==1&&r>1)
    {
        count(p+'d',r-1,c);
        return;
    }
     count(p+'d',r-1,c);
     count(p+'r',r,c-1);
    
}
int main()
{
    count("",3,3);
}