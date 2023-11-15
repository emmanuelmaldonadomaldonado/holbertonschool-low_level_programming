#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Print anything.
 * @format: A list of types of arguments passed to the function.
 * @...: The variable number of arguments to be printed.
 */
void print_all(const char * const format, ...) {
	va_list args;
	unsigned int i = 0;
	char *separator = "";
	const char *cur_fmt;

	va_start(args, format);

	while (format != NULL && format[i] != '\0') {
		cur_fmt = &format[i];

		switch (cur_fmt[0]) {
		case 'c': {
			printf("%s%c", separator, va_arg(args, int));
			break;
		}
		case 'i': {
			printf("%s%d", separator, va_arg(args, int));
			break;
		}
		case 'f': {
			printf("%s%f", separator, va_arg(args, double));
			break;
		}
		case 's': {
			char *str = va_arg(args, char *);
			if (str == NULL) {
				printf("%s(nil)", separator);
			} else {
				printf("%s%s", separator, str);
			}
			break;
		}
		default:
			i++;
			continue;
		}

		separator = ", ";
		i++;
	}

	printf("\n");
	va_end(args);
}
