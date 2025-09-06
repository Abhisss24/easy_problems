#include<iostream>
using namespace std;
int main() {
    int a;
   cout<<"ENTER THE CHARACTER : ";
   cin>> a;
   if (isdigit(a)){
    cout<<a<<" IS A DIGIT";
   }
   else {
    cout<<a<<" IS NOT A DIGIT";
   }
    return 0;
}
