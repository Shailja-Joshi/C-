//Fibonacci Sequence Up to a Certain Number

#include <iostream>

using namespace std;
void fib(int n)          //will print all Fibonacci series until n
{
    int f1=0,f2=1,nextterm=0;
    cout<<f1<<","<<f2<<',';
    nextterm=f1+f2;
    while(nextterm<=n)
    {
        cout<<nextterm<<",";
        f1=f2;
        f2=nextterm;
        nextterm=f1+f2;
        
    }
}
int main()
{
    int n;
    cin>>n;
    fib(n);
    return 0;
}

