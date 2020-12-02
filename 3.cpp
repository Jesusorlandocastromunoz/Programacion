#include <iostream>
#include <cstdlib>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void Mediana(int *vector,int n)
{
	int aux;
	int i;
	int j;
	int pos;
	float mediana;
	for (i=0; i<n-1; i++)
	{
	   for (j=i+1; j<n; j++)
	  {
	    if(vector[i]>vector[j])
	    {
	     aux = vector[i];
	     vector[i] = vector[j];
	     vector[j] = aux;
	    }
	  }
	}
	
	if((n%2)==0)
	{
		
		pos = n/2;
		mediana = (vector[pos-1]+vector[pos])/2.0;
	}
	else
	{
		pos = (n+1)/2;
		mediana = vector[pos-1];
	}
	 cout<<"la mediana es"<<mediana;
}	
int main(int argc, char** argv) {
	
	int n =0;
	int valor;
    
    cout <<" digite el tamaño del vector";
    cin>>n;
    int Vector [n];
    int *aux;
    for (int fila =0; fila < n; fila++)
    {
       cout <<" digite el valor ";
    	cin>>valor;
    	Vector[fila]=valor;
    }
    aux = Vector;
    Mediana(aux,n);
 
system("pause");
return 0;
}
