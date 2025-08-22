#include <iostream>

using namespace std;
int main(){
    int n;
    
    cin>>n;
    int candles[n];
    for(int i=0; i<n; i++){
        cin>> candles[i];
    }
    int small=INT16_MIN;
    for(int j=0; j<n;j++){
        if (candles[j]>small){
            small=candles[j];
        }
    }
    int ti=0;
    for(int a=0;a<n;a++){
        if(candles[a]==small){
            ti=ti+1;
            }
        }
    cout << ti;
    return 0;
}
