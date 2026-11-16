#include <stdio.h>
#include <string.h>
#include "zoo.h"

int main(){
    Animal a = saisir();
    printf("%d\n\n",a.faim);
    a.faim = nourrir(a);  
    printf("%d",a.faim);  
    return 0;
}