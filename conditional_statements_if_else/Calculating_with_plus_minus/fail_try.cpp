#include <iostream>

using namespace std;

int main(){
    int a;
    int b;
    int c;

    int case1 = (a/b) + c;
    int case2 = (a/b) - c;

    cin >> a >> b >> c;

  //Take out the possible fakes 
    if(a == 0 || b == 0){
        cout << "indefinido" << '\n';
    }

    if(c == 0){ 
        cout << a / b << '\n';
    }
    else{
        cout << case1 << " " << case2;
    }



}