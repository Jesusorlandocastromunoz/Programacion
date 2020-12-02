#include <iostream>
#include <cstdlib>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	
int main(int argc, char** argv) {
	
	int n =0;
	int min=0;//valor minimo
    int max=0;//valor maximo
    int valor;
    
    cout <<" digite el valor de n";
    cin>>n;
    int matriz [n][n];
    
    for (int fila =0; fila < n; fila++)
    {
        for (int columna = 0; columna < n;columna++)
        {
            cout <<" digite el valor ";
            cin>>valor;
            matriz[fila][columna]= valor;
        }
    }

	min = matriz[0][0];
	max = matriz[0][0];
    for (int fila =0; fila < n; fila++)
    {
        for (int columna = 0; columna < n;columna++)
        {
            if(matriz[fila][columna]<min){
                min=matriz[fila][columna];
            }
            if(matriz[fila][columna]>max){
                max=matriz[fila][columna];
            }
        }
       cout<<endl;
    }

    float promedio = (min+max)/2.0;
    cout<< "el minimo es" << min<<endl;
    cout<< "el mayor es" << max<<endl;
    cout<< "el promedio es " << promedio<<endl;
    
 //getch();
system("pause");
return 0;
}
