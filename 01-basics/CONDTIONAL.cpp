#include<bits/stdc++.h>
using namespace std;
int main() {
    int marks;
    cin >> marks;
    if ( marks<25){
        cout<< "You have failed";
    }
    else if ( marks < 50) {
        cout << "You secured grade D";
    }
    else if (marks < 75) {
        cout << "You secured grade C";
    }
    else {
        cout << "You secured grade A";
    }

    return 0;
}