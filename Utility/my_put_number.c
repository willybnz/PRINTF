#include "../Include/my.h"

int my_put_number(int number)
{
    char *tab = malloc(sizeof(char) * 1000);
    int stock = 0, i = 0, j = 0;
    if (number >= 0 && number <= 9) {
        my_putchar(number + 48);
        return 0;
    }
    if (number > 9) {
        stock = number;
        while (stock >= 10) {
            tab[i] = (stock % 10) + 48; 
            stock = stock / 10;
            i++;
        } tab[i] = stock + 48;
        j = my_strlen(tab) - 1;

        while (j >= 0) {
            my_putchar(tab[j]);
            j--;
        } free(tab);
    } return 0;
}