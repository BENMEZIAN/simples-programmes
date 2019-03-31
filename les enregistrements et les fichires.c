#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	     FILE *f; char c='A'; int i;
	     
	    f=fopen("resultat.txt","w+");
	    
	    if(f!=NULL){
	    	i=0;
	      while(i<10){
	        fputc(c+i,f);	
	      	i++;
		  }
		  fseek(f,1,SEEK_SET);
		  fputc('X',f);
		  fclose(f);
		}
	
	    system("pause"); 
	
	return 0;
}
                        //la sortie ou la résultats de l'exécution est: AXCDEFGHIJ
