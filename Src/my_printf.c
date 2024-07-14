#include "../Include/my.h"

int my_printf(const char *format, ...)
{
    int i = 0, count = 0, stock = 0;
    char *stocks;

    va_list ptr_to_list;
    va_start(ptr_to_list, format);


    while (format[i] != '\0') {
        if (format[i] == '%' && format[i + 1] == 'c') {
            stock = va_arg(ptr_to_list, int);
            my_putchar((char)stock);
            break;
        }
        if (format[i] == '%' && format[i + 1] == 'd') {
            my_put_number(va_arg(ptr_to_list, int));
            break;
        }
        if (format[i] == '%' && format[i + 1] == 's') {
            my_putstr(va_arg(ptr_to_list, char *));
            break;
        }
        if (format[i] == '%' && format[i + 1] == 'o') {
            stocks = convert_in_base(va_arg(ptr_to_list, int), "01234567");
            my_putstr(my_revstr(stocks));
            free(stocks);
            break;
        }
        if (format[i] == '%' && format[i + 1] == 'X') {
            stocks = convert_in_base(va_arg(ptr_to_list, int), "0123456789ABCDEF");
            my_putstr(my_revstr(stocks));
            free(stocks);
            break;
        }
        if (format[i] == '%' && format[i + 1] == 'x') {
            stocks = convert_in_base(va_arg(ptr_to_list, int), "0123456789abcdef");
            my_putstr(my_revstr(stocks));
            free(stocks);
            break;
        }
        my_putchar(format[i]);
        i++;
    } return 0;
}
