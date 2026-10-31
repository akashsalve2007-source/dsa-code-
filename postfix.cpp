#include<iostream>
#include<cmath>
#include<cctype>
using namespace std;
class stack
{
    private: 
int arr[100];
int top;
     public:
     stack()
     {
        top=-1;
     }
     void push(int val)
     {
        top++;
        arr[top]=val;
     }
     int pop()
     {
        int p=arr[top];
        top--;
        return(p);
     }
};
int evaluate(char x,int op1,int op2)
{
    if(x=='+')
    return(op1+op2);
    if(x=='-')
    return(op1-op2);
    if(x=='*')
    return(op1*op2);
    if(x=='/')
    return(op1/op2);
    if(x=='%')
    return(op1%op2);
    if(x=='$')
    return(pow(op1,op2));
    return 0;
}
int main(void)
{
    stack s;
    char x;
    int op1,op2,val;
    cout<<"\nentre postfix expression:";
    while((x=getchar())!='\n')
    {
        if(isdigit(x))
        {
            s.push(x-48);
        }
        else
        {
            op2=s.pop();
            op2=s.pop();
            val=evaluate(x,op1,op2);
            s.push(val);
        }
    }
    val=s.pop();
    cout<<"\nanswer="<<val;
    return 0;
}
//output
PS D:\akash salve>     g++ postfix.cpp -o postfix
C:/FOSSEE/MSYS/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/11.2.0/../../../../x86_64-w64-mingw32/bin/ld.exe: cannot open output file postfix.exe: Permission denied
collect2.exe: error: ld returned 1 exit status
PS D:\akash salve> g++ postfix.cpp
PS D:\akash salve> .\postfix

entre postfix expression:623+-382/+*2$3+

answer=-2061737952