#include <stdarg.h>
#include <stdio.h>

void print_all(const char * const format, ...)
{
    va_list args;
    va_start(args, format);

    char c;
    int i;
    double f;
    char *s;
    unsigned int index = 0;

    while (format && format[index])
    {
        switch (format[index])
        {
            case 'c':
                c = va_arg(args, int);
                printf("%c", c);
                break;
            case 'i':
                i = va_arg(args, int);
                printf("%d", i);
                break;
            case 'f':
                f = va_arg(args, double);
                printf("%f", f);
                break;
            case 's':
                s = va_arg(args, char *);
                if (s == NULL)
                    printf("(nil)");
                else
                    printf("%s", s);
                break;
            default:
                break;
        }

        if (format[index + 1])
            printf(", ");

        index++;
    }

    printf("\n");
    va_end(args);
}

