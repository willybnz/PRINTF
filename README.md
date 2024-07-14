#

## Description 

Printf est une fonction système en C qui permet d’afficher des chaînes de caractères à l'écran.Elle appartient à la librairie <stdio.h>  et pour pouvoir l'utiliser il faut inclure cette dernière.

Voici le prototype de la fonction : 

`int printf(const char* formart, …);` 

Voici une petite utilisation de cette fonction en langage C :

```c
#include <stdio.h>

int main(void)
{
    printf("Hello world\n");
}
```