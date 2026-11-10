#include <iostream>

using namespace std;

int main(){
    double a;
    double b;
    double c;
    
    cin >> a >> b >> c;
    
    double case1 = (a/b) + c;
    double case2 = (a/b) - c;

    //Take out the possible fake of b 
    if(b == 0){
        cout << "indefinido" << '\n';
        return 0;
    }

    //if both cases have the same value c = 0
    if(case1 == case2){
        cout << case1 << '\n';
    }
    else{
        cout << case1 << " " << case2 << '\n';
    }

    return 0;
}