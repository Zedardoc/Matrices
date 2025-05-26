#include <stdio.h>
#include <stdlib.h>

int i, j, filas, columnas, cam;
float k;

int main(){
	///Dimensiones de la matriz:
	printf("Ingrese las filas que desea:");
	scanf("%d", &filas);
	printf("Ingrese las columnas que desea:");
	scanf("%d", &columnas);
	///Elementos de la matriz
	float m1[filas][columnas], m2[filas][columnas];
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			printf("Elemento [%d][%d]:\n", i, j);
			scanf("%f", &m1[i][j]);
		}
	}
	///Impresión de la matriz
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			printf("%.2f ", m1[i][j]);
		}
		printf("\n");
	}
	printf("\nIngrese el numero de columna a modificar [1]-[%d]: ", columnas);///El Usuario decide la columna a cambiar
    scanf("%d", &cam);
	cam--;
    printf("Ingrese el escalar:");///escoge el factor por el cual se multiplicará
    scanf("%f", &k);
    
    for(i=0;i<filas;i++){
    	for(j=0;j<columnas;j++){
    		if(j==cam){///Este if permite que el factor solo multiplique a la columna que escoja el usuario
    			m2[i][j]=m1[i][j]*k;///Declaración de la nueva matriz
			}
			else{
				m2[i][j]=m1[i][j];///Si la columna que escoge el usuario no existe, entonces se imprime la matriz original
			}
		}
	}
	///impresión de la nueva matriz
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			printf("%.2f ", m2[i][j]);
		}
		printf("\n");///este print es escencial para que quede como una matriz, ya que si no se hiciese el salto de línea, todo queda en la misma línea
	}
	return 0;
}


