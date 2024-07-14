#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int my_strlen(char const *str);
int my_putstr(char *str);
void my_putchar(char c);
int my_printf(const char *format, ...);
int my_put_number(int number);
char *convert_in_base(int number, char const *base);
char *my_revstr(char *str);
char *convert_in_upper_case(char *str);
char *convert_in_lower_case(char *str);
int check_lower_case(char const *str);
int check_upper_case(char const *str);