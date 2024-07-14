#include "../Include/my.h"

char *my_revstr(char *str)
{
    char *tab = malloc(sizeof(char) * (my_strlen(str) + 1));
    int i = my_strlen(str) - 1, j = 0;

    while (i >= 0) {
        tab[j] = str[i];
        i--, j++;
    } tab[j] = '\0';
    return tab;
}