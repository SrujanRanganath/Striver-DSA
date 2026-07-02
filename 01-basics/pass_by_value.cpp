#include<bits/stdc++.h>
using namespace std;

int sum(int num1, int num2){
   return num1+num2;
}
void doSomething(int &num){
   num=num+5;
   cout<<num<<endl;
   num=num+5;
   cout<<num<<endl;
   num=num+5;
   cout<<num<<endl;
}
int main() {
   int num=10;
   doSomething(num);
   cout<<num<<endl;

   return 0;
    }
   