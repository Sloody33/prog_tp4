#include <stdio.h>
#include <string.h>
#include "zoo.h"

Animal saisir(){
    Animal a ;
    printf("Indiquez son nom :");
    scanf("%s",&a.nom);
    getchar();

    printf("Indiquez son age (0 a 500) : ");
    scanf("%d",&a.age);
    getchar();
    while (a.age < 0 || a.age >500)
    {
        printf("Indiquez un pourcentage de faim valide (0 a 500) : ");
        scanf("%d",&a.age);
        getchar();
    }
    
    printf("Indiquez son habitat  (terrestre, aquatique ou volant) : ");
    scanf("%s",&a.habitat);
    getchar();
     while ((strcmp(a.habitat,"terrestre")) != 0 && (strcmp(a.habitat,"aquatique")) != 0 &&(strcmp(a.habitat,"volant")) != 0)
    {
        printf("Indiquez un niveau de sante valide (terrestre, aquatique ou volant) : ");
        scanf("%s",&a.habitat);
        getchar();
    }
    
    printf("Indiquez son niveau de sante (bon, moyen, mauvais) : ");
    scanf("%s",&a.sante);
    getchar();
     while ((strcmp(a.sante,"bon")) != 0 && (strcmp(a.sante,"mauvais")) != 0 &&(strcmp(a.sante,"moyen")) != 0)
    {
        printf("Indiquez un niveau de sante valide (bon, moyen, mauvais) : ");
        scanf("%s",&a.sante);
        getchar();
    }
    
    printf("Indiquez son pourcentage de faim (0 a 100) : ");
    scanf("%d",&a.faim);
    getchar();
    while (a.faim < 0 || a.faim >100)
    {
        printf("Indiquez un pourcentage de faim valide (0 a 100) : ");
        scanf("%d",&a.faim);
        getchar();
    }
    
    

    return a;
}

int nourrir(Animal a){
    if (a.faim > 30)
    {
        return a.faim-30;
    } else {
        return 0;
    }
}