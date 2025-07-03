#include<iostream>
using namespace std;
bool linear(int *arr,int size,int target)
{
    if(size==0)
    {
        return 0;
    }
    if(arr[0]==target)
    {
        return 1;
    }
    else
    {
     return linear(arr+1,size-1,target);
    }
    return 0;
}
int main()
{
    int arr[5]={2,5,4,7,6};
    int size=5;
    int target;
    cout<<"Enter Target"<<endl;
    cin>>target;
    bool ans=linear(arr,size,target);
    if(ans==true)
    {
        cout<<"Target found"<<endl;
    }
    else{
        cout<<"Target not found"<<endl;
    }
}