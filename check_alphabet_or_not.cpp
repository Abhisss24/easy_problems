#include<iostream>
using namespace std;
int main() {
    char a;
   cout<<"ENTER THE CHARACTER : ";
   cin>> a;
   if (isalpha(a)){
    cout<<a<<" IS A ALPHABET";
   }
   else {
    cout<<a<<" IS NOT A ALPHABET";
   }
    return 0;
}
