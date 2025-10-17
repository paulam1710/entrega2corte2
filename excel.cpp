#include <bits/stdc++.h>
using namespace std;

// Función que convierte el título de columna (por ejemplo "AB") a número
int titleToNumber(string columnTitle) {
    long result = 0;
    for (char c : columnTitle) {
        int val = c - 'A' + 1;   // Convierte 'A' -> 1, 'B' -> 2, ..., 'Z' -> 26
        result = result * 26 + val;
    }
    return (int)result;
}

int main() {
    string titulo;
    cout << "Ingrese el titulo de la columna (por ejemplo A, AB, ZY): ";
    cin >> titulo;

    // Convertir a mayúsculas por seguridad (en caso de que el usuario escriba en minúsculas)
    for (auto &c : titulo) c = toupper(c);

    int numero = titleToNumber(titulo);
    cout << "El numero correspondiente a la columna " << titulo << " es: " << numero << endl;

    return 0;
}
