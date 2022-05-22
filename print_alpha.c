#include "main.h"

/**
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int print_string(va_list l, flags_t *f)
{
    char *s = va_arg(l, char *);

    (void)f;

    if (!s)
        s = "(null)";
    return (_puts(s));
}


int print_char(va_list l, flags_t *f)
{
    (void)f;
    _putchar(va_arg(l, int));
    return (1);
}
