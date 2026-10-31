#include<iostream>
using namespace std;
int binary_search(int a[],int n,int x)
{
    int first = 0;
    int iast = n-1;
    int mid;
    while(first<=iast)
    {
        mid=(first+iast)/2;
        if(a[mid]==x)
        {
            return mid;
        }
        else if(a[mid]<x)
        {
            first=mid+1;
        }
        else
        {
            iast=mid-1;
        }
    }
        return -1;
    }
    int main()
    {
        int n,x;
        int a[20];
        cout<<"enter the size of the array:";
        cin>>n;
        cout<<"enter"<<n<<"sorted integers:\n";
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cout<<"entre the target element to search for:";
        cin>>x;
        int position= binary_search(a,n,x);
        if(position!=-1)
        cout<<"element found at position:"<<endl;
        else
        cout<<"element not found."<<endl;
        return 0;
    }
    //output
 PS D:\akash> ./binary_search 
enter the size of the array:5
enter5sorted integers:
1
2
3
4
5
entre the target element to search for:1
element found at position:   