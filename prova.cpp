#include <iostream>
#include <time.h>
#include "libreria_vettori.h"
#include <string>
#include <string.h>

using namespace std;

int n;
int x;
int a,b,c,d,e;

int main(){
    freopen("./file inutili/input/1", "r", stdin);
    freopen("./file inutili/output/7", "w", stdout);

    //cin>>n;
    //int v[n];

    /*//formare un vettore con gli elementi dati
    for (int i=0; i<n; i++){
        riempiVettore(v,n);

    }
    */


    /*//uno switch potrebbe sempre servire


    for(int i=0; i<n; i++){
        cin>>x;
        switch(x){
            case 1:
            cout<<"gennaio ";
            break;
            case 2:
            cout<<"febbraio ";
            break;
            case 3:
            cout<<"marzo ";
            break;
            case 4:
            cout<<"aprile ";
            break;
            case 5:
            cout<<"maggio ";
            break;
            case 6:
            cout<<"giugno ";
            break;
            case 7:
            cout<<"luglio ";
            break;
            case 8:
            cout<<"agosto ";
            break;
            case 9:
            cout<<"settembre ";
            break;
            case 10:
            cout<<"ottobre ";
            break;
            case 11:
            cout<<"novembre ";
            break;
            case 12:
            cout<<"dicembre ";
            break;
        }
    }
    */
   bool primo=true;
   int v=7269642987;
   for(int i =1; i<v/2; i++){
       if(v%i==0){
           primo=false;
       }
   }
   if(primo==true){
       cout<<"il numero è primo";
   }
   else{
       cout<<"il numero non è primo";
   }

}
