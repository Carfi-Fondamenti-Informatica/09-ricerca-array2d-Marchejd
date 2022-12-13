#include "lib.h"
int controllo (char ar[][20], char test[][20])
{
    int cont = 0;
    for (int i = 0; i<2; i++)
    {
        cont++;
        if (ar[i][20] == test[1][20])
        {
            cout<<"la posizione è : "<<cont<<endl;
        }
    }
}
