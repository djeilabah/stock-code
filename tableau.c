#include<stdio.h>
#define taille 5

int main()
{ 
    int T[taille]={10,16,38,58,200};
    int *P;
    int i;
    P = T;
    for ( i = 0; i<taille; i++)
    {
        printf("%d\n",*(T+i));
    }
    
    return 0;
}