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
							 if (Codigos[i]<100 || Codigos[i] > 999) {
                				printf("El codigo debe tener 3 digitos.\n");
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
				scanf("%f", &NotasA[i]); 
					if(NotasA[i]<0 || NotasA[i]>5){
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
				scanf("%f", &NotasF[i]); 
					if(NotasF[i]<0 || NotasF[i]>5){
						printf("Aqui calificamos de 0 a 5 \n");
					}
					else{
						break;
					}
			 }
		 }
	 printf("Cantidad de alumnos: %d\n", Estu);
		 for(i=0;i<Estu;i++){
		 	printf("%d %d %.1f  %.1f\n", i+1, Codigos[i], NotasA[i], NotasF[i]);
		 }
		 
	//Imprimir el menu y datos
	while(1){
		 printf("Menu, escoja alguna de las siguientes opciones:\n");
		 printf("1. Promedio de Algebra:\n");
		 printf("2. Mayor Nota de fundamentos de programacion:\n");
		 printf("3. Cantidad de Alumnos Femeninos y Masculinos:\n");
		 printf("4. Buscar Nota mediante codigo:\n");
		 printf("5. Salir\n");
		 scanf("%d", &opcion);
		 switch(opcion){
		 	case 1:
		 		float promedio;
		 		for(int i = 0; i<Estu; i++){
		 			promedio += NotasA[i];
				 }
				 promedio = promedio/Estu;
				 printf("El promedio de algebra de todos los estudiantes fue de %.1f\n\n", promedio);
				break;
			 
			case 2:
				float nota;
				nota=0;
				for(int i = 0; i<Estu;i++){
					if(NotasF[i]>nota){
						nota = NotasF[i];
					}
				}
				printf("La mayor nota alcanzada en fundamentos fue %.1f\n\n", nota);
				break;
			case 3:
				printf("Femeninos: %d - Masculinos: %d\n\n", f, m);
				break;
			
			case 4:
				int codigo;
				int encontrado;
				encontrado = 0;
				printf("Especifique el codigo deseado: \n");
				scanf("%d", &codigo);
				for(int i=0;i<Estu; i++){
					if(codigo==Codigos[i]){
						printf("El codigo: %d - Algebra: %.1f - Fundamentos: %.1f\n", codigo, NotasA[i], NotasF[i]);
						encontrado = 1;
						break;
					}
				}
				if(encontrado == 0){
					printf("No se ha encontrado un alumno con ese codigo\n");	
				}
				break;
			
			case 5:
				return 1;
				break;
			
			default:
				printf("Opcion no existe\n");
				break;
			
		}
	}
 }
