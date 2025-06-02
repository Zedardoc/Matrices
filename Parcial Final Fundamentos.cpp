#include<conio.h>
#include<stdlib.h>
#include<stdio.h>

///Declaracion de variables globales
int Estu, i, m=0, f=0, j, gen, opcion;
int main(){
 	printf("Bienvenido, promedio de notas\n");
 		while(1){///Digita la cantidad de alumnos hasta que ponga un valor dentro del limite	
 			printf("Ingrese la cantidad de alumnos:\n");
 			scanf("%d", &Estu);
 				if(Estu<=0 || Estu>=100){
 					printf("Cantidad no esta dentro del limite");
	 			}
				 else{
	 			break;///Rompe el bucle al digitar un valor que cumpla los requisitos
	 			}
	 	}
	 	float NotasA[Estu], NotasF[Estu];///Declaracion de los Arrays
	 	int Codigos[Estu];
	 	printf("Ingrese los codigos de los alumnos:\n");
	 		for(i=0;i<Estu;i++){
	 			while (1) {///Pide datos a ingresar hasta que llegue a la cantidad de alumnos. Aqui se pide el codigo
           				 printf("Alumno[%d]: ", i + 1);
			        	 char code[3];
						char ch;
						int j = 0;
						while (1) {
					       ch = getch();
					
					        // Si presiona ENTER, se termina la entrada
					        if (ch == 13) {
					            if(j==3){
					            	break;
								}
								else{
									printf("\nTe faltan digitos, ingresa el codigo de nuevo\n");
									j=0;
								}
					        }
					
					        // Solo permitir números
					        if(j<=2){
						        if (ch >= '0' && ch <= '9') {
						            if (j < 19) {  // Evitar desbordamiento del arreglo
						                code[j] = ch;
						                j++;
						                printf("*");
						            }
						        }
					        }
					        else{
					        	printf("\nHas alcanzado los digitos maximos\n");
							}
					    }
							
						    code[j] = '\0';  // Terminar la cadena
						    Codigos[i] = atoi(code); //convertir un char* a entero
						    printf("\n");
						    
								for (j = 0; j < i; j++) {///Agregamos un nuevo iterador que nos permite revisar los codigos ingresados
		                			if (Codigos[j] == Codigos[i]) {///si se repite, le pide al usuario que digite uno nuevo
		                    			printf("Codigo repetido. Ingrese uno nuevo.\n");
		                    			break;///Este break rompe el for, para que asi entre de nuevo al while
		                		}
	            			}
		            		if (j == i) { 
		                	break;///Este break rompe el while, para que después siga iterandose el For y asi pide un codigo nuevo
		            		}
	        		}	
			}
	 	printf("Ingrese el genero de los alumnos, 0-Fem, 1-Masc:\n");
	 	for(i=0;i<Estu;i++){
	 		while(1){///Pide el genero de los alumnos hasta que pida el de todos
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
						printf("Opcion no coincide\n");///Si se ingresa un valor diferente de 0 o 1, se lo volverá a pedir
				}
			}
		}
		printf("Ingrese las notas de algebra de cada alumno:\n");
		 for(i=0;i<Estu;i++){
		 	while(1){///Pide las notas de algebra de los alumnos
		 		printf("Alumno[%d]:", i+1);
				scanf("%f", &NotasA[i]); 
					if(NotasA[i]<0 || NotasA[i]>5){///La nota debe estar entre 0 y 5
						printf("Aqui calificamos de 0 a 5\n");
					}
					else{///Si la nota cumple la condición, entonces pide la nota del siguiente alumno, y así hasta completar las iteraciones
						break;
					}
			 }
		 }
		 printf("Ingrese las notas de Fundamentos de cada alumno:\n");
		 for(i=0;i<Estu;i++){
		 	while(1){///Pide las notas de Fundamentos los alumnos
		 		printf("Alumno[%d]:", i+1);
				scanf("%f", &NotasF[i]); 
					if(NotasF[i]<0 || NotasF[i]>5){///La nota debe estar entre 0 y 5
						printf("Aqui calificamos de 0 a 5 \n");
					}
					else{///Si la nota cumple la condición, entonces pide la nota del siguiente alumno, y así hasta completar las iteraciones
						break;
					}
			 }
		 }
	printf("||||Datos registrados exitosamente||||\n");	 
	 	printf("|||Cantidad de alumnos: %d|||\n", Estu);
			 for(i=0;i<Estu;i++){///Imprime los datos registrados anteriormente
		 		printf("|%d |%d |%.1f | %.1f|\n", i+1, Codigos[i], NotasA[i], NotasF[i]);
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
		 	case 1:///si opcion==1
		 		float promedio;
		 		for(int i = 0; i<Estu; i++){
		 			promedio += NotasA[i];///Con ayuda del for, se suman todos los datos del array
				 }
				 promedio = promedio/Estu;
				 printf("||El promedio de algebra de todos los estudiantes fue de %.1f||\n\n", promedio);
				break;
			 
			case 2://si opcion==2
				float nota;
				nota=0;
				for(int i = 0; i<Estu;i++){
					if(NotasF[i]>nota){///El for permite que se comparen las notas del array con la variable nota
						nota = NotasF[i];///la variable se declara como la nota mayor que se obtuvo anteriormente en el for, y así hasta que se revisen todas
					}
				}
				printf("||La mayor nota alcanzada en fundamentos fue %.1f||\n\n", nota);
				break;
			case 3:///si opcion==3
				printf("Femeninos: |%d| - Masculinos: |%d|\n\n", f, m);///Anteriormente, ya se habian declarado los iteradores. Por cada 0, f++
				break;												//por cada 1, m++
			
			case 4:///si opcion==4
				i = 0;
				int codigo;
				codigo = 0;
				int encontrado;
				encontrado = 0;
				printf("Especifique el codigo deseado: \n");
				char code[4];
				char ch;
				while (1) {
			        ch = getch();
					
					// Si presiona ENTER, se termina la entrada
			        if (ch == 13) {
			            if(i==3){
			            	break;
						}
						else{
							printf("\nTe faltan digitos, ingresa el codigo de nuevo\n");
							i=0;
						}
			        }
			
			        // Solo permitir números
			        if(i<=2){
				        if (ch >= '0' && ch <= '9') {
				            if (i < 19) {  // Evitar desbordamiento del arreglo
				                code[i] = ch;
				                i++;
				                printf("*");
				            }
				        }
			        }
			        else{
			        	printf("\nHas alcanzado los digitos maximos\n");
					}	
			    }
			
			    code[i] = '\0';  // Terminar la cadena
			
			    codigo = atoi(code);  // Convertir la cadena a entero
				printf("\n");
				for(int i=0;i<Estu; i++){
					if(codigo==Codigos[i]){///Se empieza a comparar el codigo pedido con los ya ingresados
						printf("El codigo: %d - Algebra: %.1f - Fundamentos: %.1f\n", codigo, NotasA[i], NotasF[i]);
						encontrado = 1; ///Si se encuentra el codigo ingresado en el array, entonces se pintan sus datos y la variable es = 1
						break;
					}
				}
				if(encontrado == 0){///Si despues de comparar con todos los codigos no se encuentra alguno, entonces la variable "encontrado" seguira siendo 0
					printf("No se ha encontrado un alumno con ese codigo\n");///Y si la variable es 0, entonces se imprime que no se encontro el codigo
				}
				break;
			
			case 5:///si opcion==5
				return 1;///Finaliza el programa
				break;
			
			default:
				printf("Opcion no existe\n");
				break;
			
		}
	}
 }
