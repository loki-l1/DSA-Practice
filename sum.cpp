#include<iostream>
using namespace std;
int getSum(int *arr,int size)
{
    if(size==0)
    {
        return 0;
    }
    if(size==1)
    {
        return arr[0];
    }
    int ans=arr[0]+getSum(arr+1,size-1);
    return ans;
}
int main()
{
    int arr[5]={1,3,4,8,9};
    int size=5;
    int sum=getSum(arr,size);
    cout<<sum<<endl;
}