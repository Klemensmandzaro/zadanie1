#include <iostream>
using namespace std;
int main() {
    int a, suma;
    for (int i=0; i<18; i++)
    {
        cin>>a;
        if( a%2==0)
        {
            suma=suma+a;
        }
    }
    cout<<suma;

    return 0;
}
