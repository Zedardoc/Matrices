#include <stdio.h>
#include <stdlib.h>

int i, j, filas, columnas, cam;
float k;

int main(){
	printf("Ingrese las filas que desea:");
	scanf("%d", &filas);
	printf("Ingrese las columnas que desea:");
	scanf("%d", &columnas);
	
	float m1[filas][columnas], m2[filas][columnas];
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			printf("Elemento [%d][%d]:\n", i, j);
			scanf("%f", &m1[i][j]);
		}
	}
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			printf("%2.f", m1[i][j]);
		}
		printf("\n");
	}
	printf("\nIngrese el numero de columna a modificar [0]-[%d]: ", columnas-1);
    scanf("%d", &cam);
    printf("Ingrese el factor para multiplciar:");
    scanf("%f", &k);
    
    for(i=0;i<filas;i++){
    	for(j=0;j<columnas;j++){
    		if(j==cam){
    			m2[i][j]=m1[i][j]*k;
			}
			else{
				m2[i][j]=m1[i][j];
			}
		}
	}
for(i=0;i<filas;i++){
	for(j=0;j<columnas;j++){
		printf("%f", m2[i][j]);
	}
	printf("\n");
}
	return 0;
}


