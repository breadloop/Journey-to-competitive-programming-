#include <iostream>

using namespace std;

int main(){
    long int A;
    long int B;
    long int C;

    cin >> A >> B >> C;

    if( A == B && B == C){ // if all the numbers are equal
        cout <<  0;
        return 0;
    }
    
    else if(A == B || A == C || B == C){ // two numbers equal
        cout << 1;
    }
    else if(A < B && B < C ){ //the perfect case
        cout << 0;
    }
    else if( A > B && B > C){ 
        cout << 1;
    }
    else if( A > B && B < C){ // this depends on the case 
        if(A < C){
            cout << 1;
        }
        else{
            cout << 2;
        }
    }
    else if( A < B  && B> C){
        if(C < A){
            cout << 2;
        }else{
            cout << 1;
        }
    }
    else{
        cout << "indefinido";
    }

}