#include <stdio.h>
#include <stdlib.h>
#define N 10
//int BusquedaSecuencial(int Array[N],int num);
int BusquedaRecursiva(int Array[N],int num,int cont);
int main()
{
    int cont=0;
    int Array[N]={4,9,3,15,93,8,11,7,14,12},num;
    printf("Ingrese el numero que quiere encontrar en el arreglo:");
    scanf("%d",&num);
    //int aux=BusquedaSecuencial(Array,num);
    int aux=BusquedaRecursiva(Array,num,cont);
    printf("El numero deseado esta en la posicion: %d",aux);
}

int BusquedaSecuencial(int Array[N],int num)
{
    int Aux,i;
    for(i=0;i<N;i++)
    {
        if(Array[i]==num)
        {
            Aux=i;
            return(Aux);
        }
    }
}
int BusquedaRecursiva(int Array[N],int num,int cont)
{
    if(cont<N)
    {
        if(Array[cont]==num)
        {
            return(cont);
        }else
        {
            BusquedaRecursiva(Array,num,cont+1);
        }
    }
}
