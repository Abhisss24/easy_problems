#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cout<<"ENTER THE 1ST NUMBER - ";
    cin >> a ;
    cout<<"ENTER THE 2NDST NUMBER - ";
    cin >> b ;
   c= a;
   a=b;
   b=c;
   cout<<"THE VALUE OF a AND b AFTER SWAPPING IS "<< a <<" AND " << b << " RESPECTIVELY";
    return 0;
}
