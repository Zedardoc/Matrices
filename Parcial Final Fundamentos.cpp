#include<conio.h>
#include<stdlib.h>
#include<stdio.h>


int Estu, i, m=0, f=0, j, gen, opcion;
 int main(){
 	printf("Bienvenido, promedio de notas\n");
 		while(1){	
 			printf("Ingrese la cantidad de alumnos:\n");
 			scanf("%d", &Estu);
 				if(Estu<=0 || Estu>=100){
 					printf("Cantidad no esta dentro del limite");
	 			}
				 else{
	 			break;
	 			}
	 	}
	 	float NotasA[Estu], NotasF[Estu];
	 	int Codigos[Estu];
	 	printf("Ingrese los codigos de los alumnos:\n");
	 		for(i=0;i<Estu;i++){
	 			while (1) {
           				 printf("Alumno[%d]: ", i + 1);
			        	 scanf("%d", &Codigos[i]);
							 if (Codigos[i] < 0 || Codigos[i] > 999) {
                				printf("El codigo debe estar entre 0 y 999.\n");
                				continue;
            				}
					for (j = 0; j < i; j++) {
		                		if (Codigos[j] == Codigos[i]) {
		                    		printf("Codigo repetido. Ingrese uno nuevo.\n");
		                    		break;
		                		}
	            			}
		            		if (j == i) { 
		                	break;    
		            		}
	        		}	
			}
	 	printf("Ingrese el genero de los alumnos, 0-Fem, 1-Masc:\n");
	 	for(i=0;i<Estu;i++){
	 		while(1){
	 			printf("Alumno[%d]:", i+1);
	 			scanf("%d", &gen);
		 			if(gen==0 || gen==1){
		 				if(gen==0){
		 					f++;
					 }
					 	else{
					 		m++;
					 }
		 			break;
					}
					else{
					printf("Opcion no coincide\n");
					}
				 	}
			}
		printf("Ingrese las notas de algebra de cada alumno:\n");
		 for(i=0;i<Estu;i++){
		 	while(1){
		 		printf("Alumno[%d]:", i+1);
				scanf("%f", &NotasA[Estu]); 
					if(NotasA[Estu]<0 || NotasA[Estu]>5){
						printf("Aqui calificamos de 0 a 5");
					}
					else{
						break;
					}
			 }
		 }
		 printf("Ingrese las notas de Fundamentos de cada alumno:\n");
		 for(i=0;i<Estu;i++){
		 	while(1){
		 		printf("Alumno[%d]:", i+1);
				scanf("%f", &NotasF[Estu]); 
					if(NotasF[Estu]<0 || NotasF[Estu]>5){
						printf("Aqui calificamos de 0 a 5\n");
					}
					else{
						break;
					}
			 }
		 }
	 printf("Cantidad de alumnos: %d\n", Estu);
		 for(i=0;i<Estu;i++){
		 	printf("%d. %d	%d  %3.f  %3.f\n", i+1, Codigos[i], gen[i], NotasA[i], NotasF[i]);
		 }
	 printf("Menu, escoja alguna de las siguientes opciones:\n");
	 printf("1. Promedio de Algebra:\n");
	 printf("2. Mayor Nota de fundamentos de programacion:\n");
	 printf("3. Cantidad de Alumnos Femeninos y Masculinos:\n");
	 printf("5. Buscar Nota mediante codigo:\n");
	 scanf("%d", &opcion);
	 switch(opcion){
	 	case 1:{
	 		
			break;
		 }
		case 2:{
			
			break;
		}
		case 3:{
			
			break;
		}
		case 4:{
			
			break;
		}
		case 5:{
			
			break;
		}
		default:{
			printf("Opcion no existe");
			break;
		}
	 
}
	
 	
 	
 	
 	
 	
 	
 	
 	return 0;
 }
