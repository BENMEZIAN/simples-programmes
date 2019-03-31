#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct fiche{
	char nom[21];
	char prenom[21];
	int age; 
	float note;	
}fiche;


int main(int argc, char **argv[]) {
	
	   fiche f;
	   
	   printf("SAISIE D'UNE FICHE\n");
	   printf("nom :");
	   gets(f.nom);
	   printf("prenom :");
	   gets(f.prenom);
	   printf("age :"); 
	   scanf("%d",&f.age);
	   printf("note :");
	   scanf("%f",&f.note);
	   
	   printf("\nlecture de la fiche:\n");
	   printf("le nom est:%s\n",f.nom);	
	   printf("le prenom est:%s\n",f.prenom);
	   printf("l'age est:%d\n",f.age);
	   printf("la note est:%f\n",f.note);
	   
	   system("pause");
	
	
		return 0;
}
