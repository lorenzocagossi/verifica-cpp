#include <iostream>
#include <time.h>
#include "libreria_vettori.h"

using namespace std;

int n;
int x;
int somma=0;

int main(){
    freopen("./input/3", "r", stdin);
    freopen("./output/3", "w", stdout);

    cin>>n;
    int v[n];

    for (int i=0; i<n; i++){
        riempiVettore(v,n);

    }

    for(int i=0; i<n; i++){
        if(v[i]%2==0){
            v[i]=v[i]/2;
        }
        else{
            v[i]=v[i]*2;
        }
    }

    stampaVettore(v,n);
}
