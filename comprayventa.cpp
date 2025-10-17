#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int minPrice = INT_MAX, best = 0;
    for (int p : prices) {
        if (p < minPrice) minPrice = p;
        else best = max(best, p - minPrice);
    }
    return best;
}

int main() {
    int n;
    cout << "Ingrese la cantidad de dias: ";
    cin >> n;

    vector<int> prices(n);
    cout << "Ingrese los precios separados por espacio:\n";
    for (int i = 0; i < n; i++) cin >> prices[i];

    int resultado = maxProfit(prices);
    cout << "La ganancia maxima posible es: " << resultado << endl;

    return 0;
}
