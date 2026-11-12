#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float N;
    float A;
    float B;    

    cin >> N >> A >> B;

    float firsTry = (N-A)/(B+1);
    float secondTry = (firsTry - (A + B)) +1;

    //verify if its a perfect square root
    if(sqrt(N) == round(sqrt(N))){
        cout << "es escalera inicialmente" << 'n';
    }
    else if( sqrt(firsTry) == round(sqrt(firsTry))){ //verify if its a perfect square root
        cout << "es escalera despues del primer intento" << '\n';
    }
    else if(sqrt(secondTry) == round(sqrt(secondTry))){ //verify if its a perfect square root
        cout << "es escalera despues del segundo intento" << '\n';
    }
    else{
        cout << "nos rendimos";
    }
    
    return 0;
}