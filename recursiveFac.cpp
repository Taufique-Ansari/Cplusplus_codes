#include <iostream>
using namespace std;

int fac(int n)
{
    if(n == 0){
        return 1;
    }
    int prevFac = fac(n-1);
    return n * prevFac;
}

int main()
{
    int n;
    cin>>n;

    cout<<fac(n);
}