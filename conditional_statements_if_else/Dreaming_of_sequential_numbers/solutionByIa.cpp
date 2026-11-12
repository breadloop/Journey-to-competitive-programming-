/*All of this code was made by Gemini, I could understood the problem*/

#include <iostream>

using namespace std;

bool esEscalera(long long x) {
    return (x == 1 || x == 121 || x == 12321 || x == 1234321 || x == 123454321);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long N, A, B;
    if (!(cin >> N >> A >> B)) return 0;

    // 1. Estado inicial
    if (esEscalera(N)) {
        cout << "es escalera inicialmente\n";
        return 0;
    }

    // 2. Primer intento con división entera estándar
    long long firstTry = (N - A) / (B + 1);
    if (esEscalera(firstTry)) {
        cout << "es escalera despues del primer intento\n";
        return 0;
    }

    // 3. Segundo intento usando el resultado entero anterior
    long long secondTry = (firstTry - (A + B)) + 1;
    if (esEscalera(secondTry)) {
        cout << "es escalera despues del segundo intento\n";
        return 0;
    }

    cout << "nos rendimos\n";

    return 0;
}