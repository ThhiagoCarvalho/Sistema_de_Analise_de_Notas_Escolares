#include<stdio.h> 
#include<stdio.h> 
#include<string.h> 
#include<math.h> 
#include<stdlib.h> 
   char dscpl[3][100]; 
   float medias[3][4], tpt[3] , notaex; 
   int x,y; 
   int aux[3]; 
   
	void disciplina(){ 
	int cont; 
		for(cont=1;cont<=3;cont++){ 
			printf("digite o %d nome de alguma disciplina: \n",cont); 
			gets(dscpl[cont-1]);
			printf("============================================\n") ;  
		}	 
		system("cls");	 
	} 
	 
	void mediasbim(char*s, int posic){ 
	int cont;
		printf ("~~~\tMATERIA:%s\t~~~~~\n\n",s) ;
		for(cont=1;cont<=4;cont++){ 
		
			printf("digite as notas obtidas no %d bimestre:\n",cont); 
			scanf("%f",&medias[posic][cont-1]); 
			printf("============================================\n") ; 
			while(medias[posic][cont-1] >10 || medias[posic][cont-1]<0){
				printf("digite NOVAMENTE as notas obtidas no %d bimestre:\n",cont); 
				scanf("%f",&medias[posic][cont-1]); 
				printf("============================================\n") ;
			}
		}	 
		system("cls");	 
	} 
	
	float somapontos(int posic){ 
	float s;
	int cont;
	s=0;
		for(cont=0;cont<=3;cont++){ 
			s=s+medias[posic][cont];
		}
	return s; 
	} 
	 
	void examefinal( float &x,int y){	 
	x = 10 - (x / 4);	 
	} 
	
	main () { 
	
	disciplina (); 
	for(x=0;x<=2;x++){ 
		mediasbim(dscpl[x],x); 
	}  
	for(x=0;x<=2;x++){ 
			tpt[x]=somapontos(x);	 
	}	 

	for(x=0;x<=2;x++){ 
		if (tpt[x]>=24){ 
			printf ("PARABENS!!, aprovado(a) na disciplina: %s \n",dscpl[x]) ; 
			printf("============================================\n") ;  
		}else{ 
			if (tpt[x]<15){  
				printf ("QUE PENA!, retido(a) na disciplina: %s\n",dscpl[x]);  
				printf("============================================\n") ; 	 
			}else{  
				if ( (tpt[x]<24) && (tpt[x]>=15) ){  
				    aux[x]=1 ;  
					printf("EXAME FINAl, na disciplina: %s\n ",dscpl[x]); 
					printf("============================================\n") ;  
					examefinal(tpt[x],x) ;                      
				}  
			}  
		}  
	} 	 
	printf("\n");
	for(x=0;x<=2;x++){ 
		if(aux[x]==1){ 
			printf("digite a nota obtida do exame da materia: %s\n",dscpl[x]);  
			scanf ("%f",&notaex) ; 
			while(notaex>10 || notaex<0){
				printf("digite NOVAMENTE a nota obtida do exame da materia: %s\n",dscpl[x]);  
				scanf ("%f",&notaex) ; 
					printf("============================================\n") ;  	
			}
			if (notaex>=tpt[x]){  
	   			printf("PARABENS!! APROVADO NA MATERIA %s\n",dscpl[x]) ; 
	   				printf("============================================\n") ;  
			}else{ 
	   			printf("RETIDO NA MATERIA: %s\n",dscpl[x]); 
	   				printf("============================================\n") ;  
			}  
		} 	 
	} 
	 
}
