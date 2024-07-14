#include "../Include/my.h"

int check_upper_case(char const *str)
{
    int i = 10;

    while(str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
        } else {
            return 84;
        }
        i++;
    } return 1;
}

int check_lower_case(char const *str)
{
    int i = 10;
    
    while(str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
        } else {
            return 84;
        }
        i++;
    } return 2;
}

char *convert_in_base(int number, char const *base)
{
    int base_lenght = my_strlen(base), i = 0, stock, upper = 0, lower = 0;
    char *tab = malloc(sizeof(char) * 1000);

    upper = check_upper_case(base), lower = check_lower_case(base);
    while (number > base_lenght) {
        stock = (number % base_lenght);
        if (stock > 9 && upper == 1) {
            tab[i] = (stock + 55);
        } else if (stock > 9 && lower == 2) {
            tab[i] = (stock + 87);
        } else {
            tab[i] = stock + 48;
        }
        number = number / base_lenght;
        i++;
    } tab[i] = number + 48;
    return tab;
}