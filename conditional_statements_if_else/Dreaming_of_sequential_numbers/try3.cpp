#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double N;
    double A;
    double B;    

    cin >> N >> A >> B;

    //this part was made by ia, I couldnt undertood
    double r = sqrt(N);
    long long rInt = round(r);

    double operation1try = (N-A)/(B+1);
    double firsTry = sqrt(operation1try);                   
    long long firstTryRound = round(firsTry);
    
    double operation2try = (operation1try - (A + B))+1;
    double secondTry = sqrt(operation2try);
    long long secondTryRound = round(secondTry);


    //verify if its a perfect square root
    if(pow(rInt, 2) == N){
        cout << "es escalera inicialmente" << '\n';
    }
    else if( pow(firstTryRound, 2) == operation1try){ //verify if its a perfect square root
        cout << "es escalera despues del primer intento" << '\n';
    }
    else if(pow(secondTryRound, 2) == operation2try){ //verify if its a perfect square root
        cout << "es escalera despues del segundo intento" << '\n';
    }
    else{
        cout << "nos rendimos";
    }
    
    return 0;
}