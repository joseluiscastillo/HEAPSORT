//HEAPSORT
//ESTE ALGORITMO PERMITE ORDENAR UN ARREGLO MEDIANTE EL ALGORITMO HEAPSORT
//ORGANIZANDO EL ARREGLO POR MONTICULOS
#include <iostream>
#define max 100
using namespace std;

int main()
{
    int A[max],j,item,temp,i,k,n;
    cout<<"POR FAVOR INGRESE LA CANTIDAD DE ELEMENTOS DEL ARREGLO: ";
    cin>>n;
    for(i=1; i <= n; i++)
    cin >> A[i];

    for(k = n; k > 0; k--)
    {
        for(i = 1; i <= k; i++)
        {
            item = A[i];
            j = i/2;
            while(j>0 && A[j]<item)
            {
                A[i] = A[j];
                i = j;
                j = j/2;
            }
            A[i] = item;
        }
        temp = A[1];
        A[1] = A[k];
        A[k] = temp;
    }
    cout<<"EL ORDEN DEL ARREGLO ES EL SIGUIENTE:"<<endl;
    for(i = 1; i <= n; i++)
    cout<<A[i] << endl;
    return 0;
}

//#include<iostream>


using namespace std;
void leeCadena(int cant,int n[])
{
    int i;
    for(i=0;i<cant;i++)
    {
        cout<<"Ingresa numero "<<i+1<<": ";
        cin>>n[i];
    }

}

void muestraCadena(int cant,int n[])
{
    int i;
    for(i=0;i<cant;i++)
    {
        cout<<n[i]<<endl;
    }
}
