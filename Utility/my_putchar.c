#include "../Include/my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
    return;
}