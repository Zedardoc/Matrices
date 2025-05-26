#include <stdio.h>
#include <stdlib.h>

//DECLARACIÓN Y DEFINICIÓN DE VARIABLES GLOBALES
int i, j, filas, columnas, cam;
float k;
//INICIO DEL PROGRAMA
int main(){
	//PEDIR FILAS Y COLUMNAS ALMACENANDO EN VARIABLES
	printf("Ingrese las filas que desea:");
	scanf("%d", &filas);
	printf("Ingrese las columnas que desea:");
	scanf("%d", &columnas);
	
	//RECORRER LA MATRIZ/ARRAY BIDIMENSIONAL RELLENANDO VALORES
	float m1[filas][columnas], m2[filas][columnas];
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			printf("Elemento [%d][%d]:\n", i, j);
			scanf("%f", &m1[i][j]);
		}
	}

	//IMPRIMIR LA MATRIZ/ARRAY BIDIMENSIONAL 
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			printf("%.2f ", m1[i][j]);
		}
		printf("\n");
	}

	//PEDIR EL NUMERO DE COLUMNA EL CUAL MODIFICAR
	printf("\nIngrese el numero de columna a modificar [1]-[%d]: ", columnas);
	//DEBE RESTARSE UNO A LA VARIABLE COLUMNA PORQUE EMPIEZA DESDE CERO
    scanf("%d", &cam);
	cam--;
	//PEDIMOS EL ESCALAR
    printf("Ingrese el escalar:");
    scanf("%f", &k);
    
	//SI EL NUMERO HACE PARTE DE LA OCLUMNA DESEADA EN LA FILA I, SE MULTIPLICA POR EL ESCALAR
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

	//IMPRIMIMOS LA NUEVA MATRIZ
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			printf("%.2f ", m2[i][j]);
		}
		printf("\n");
	}
	//ACABAMOS CON EL PROGRAMA
	return 0;
}


