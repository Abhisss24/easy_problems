#include <iostream>
using namespace std;
int main() {
    float b,e,a;
    int i;
    cout<<"ENTER THE BASE  ";
    cin>>b;
    cout<<"ENTER THE EXPONENT  ";
    cin>>e;
    a=1;
    for (i=0;i<e;i++){
        a=a*b;
    }
    cout<<"THE POWER OF THE GIVEN VALUE IS : "<<a; 
 return 0;
}
