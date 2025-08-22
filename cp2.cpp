#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int ar[n];
    for (int a = 0; a < n; a++) {
        cin >> ar[a];
    }
    int b;
    cin >> b;
    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += ar[i];
    } 
    
    int actual = (sum - ar[k]) / 2;

    if (actual == b) {
        cout << "Bon Appetit";
    } else {
        cout << b - actual;
    }
    
    return 0;
}
