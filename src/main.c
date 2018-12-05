#include <stdio.h>

int main()
{

    int age;  //seulement des nombres
   
    char prenom [100]; //seulement des lettres
    char nom[100];
    
    printf(" nom? prenom? "); 
    scanf("%s",&prenom);
    scanf("%s",&nom);
    scanf("%d",&age);

    printf("%s %s %d", prenom,nom, age);  
    
}
