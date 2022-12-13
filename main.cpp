#include <iostream>
#include "lib.h"
using namespace std;
int main(){
char l[2][20]; //10 nomi con lunghezza massima 20 caratteri
    for (int i=0; i<2; i++)
    {
                cin >> l[i];
    }
    char ins[1][20];
    cout<<"inserire il nome da cercare : "<<endl;
    cin >> ins[1][20];
    controllo(l,ins);
  return 0;
}
