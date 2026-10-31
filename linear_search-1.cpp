#include<iostream>
using namespace std;
int linear_search(int a[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
        return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    int a[20];
    cout<<"enter the size of the array:";
    cin>>n;
    cout<<"enter"<<n<<"integers:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int x;
    cout<<"enter the target element to search for:";
    cin>>x;
    int location = linear_search(a,n,x);
    if(location!=-1)
    {
        cout<<"element"<<x<<"found at index:"<<location<<endl;
    }
    else
    {
        cout<<"element"<<x<<"not found in the array."<<endl;
    }
    return 0;
}
//output
PS D:\akash> g++ linear_search.cpp                  
PS D:\akash> ./linear_search
enter the size of the array:7
enter7integers:

1
2
3
4
5
6
7
enter the target element to search for:4
element4found at index:3