# Common Instructions

+ Your project must be written in [C](https://en.wikipedia.org/wiki/C_(programming_language)).
+ Your project must be written in accordance with the [Norm](https://github.com/42School/norminette/blob/master/pdf/en.norme.pdf).
+ Your functions should not quit unexpectedly ([segmentation fault](https://en.wikipedia.org/wiki/Segmentation_fault), [bus error](https://en.wikipedia.org/wiki/Bus_error), double [free](https://man7.org/linux/man-pages/man1/free.1.html), etc) apart from undefined behaviors.
+ All [heap allocated memory space](https://en.wikipedia.org/wiki/C_dynamic_memory_allocation) must be properly freed when necessary. No [leaks](https://en.wikipedia.org/wiki/Memory_leak) will be tolerated.
+ If the subject requires it, you must submit a [Makefile](https://en.wikipedia.org/wiki/Make_(software)) which will compile your source files to the required output with the flags `-Wall`, `-Wextra` and `-Werror`, use `cc`, and your Makefile must not relink.
+ Your Makefile must at least contain the rules `$(NAME)`, `all`, `clean`, `fclean` and `re`.


# Mandatory part

| Program name | libftprintf.a |
| ------------ | ------------- |
| Turn in files | Makefile, *.h, */*.h, *.c, */*.c |
| Makefile | NAME, all, clean, fclean, re |
| External functs. | malloc, free, write, va_start, va_arg, va_copy, va_end |
| Libft authorized | Yes |
| Description | Write a library that contains ft_printf(), a function that will mimic the original printf() |

You have to recode the `printf()` function from libc.

The prototype of `ft_printf()` is:

```c
int ft_printf(const char *, ...);
```

Here are the requirements:

- Don’t implement the buffer management of the original printf().
- Your function has to handle the following conversions: `cspdiuxX%`
- Your function will be compared against the original printf().
- You must use the command `ar` to create your library.

Using the `libtool` command is forbidden.

- Your `libftprintf.a` has to be created at the root of your repository.

You have to implement the following conversions:

+ `%c` Prints a single character.
+ `%s` Prints a string (as defined by the [common C convention](https://en.wikibooks.org/wiki/C_Programming/String_manipulation)).
+ `%p` The void * pointer argument has to be printed in hexadecimal format.
+ `%d` Prints a decimal (base 10) number.
+ `%i` Prints an integer in base 10.
+ `%u` Prints an unsigned decimal (base 10) number.
+ `%x` Prints a number in hexadecimal (base 16) lowercase format.
+ `%X` Prints a number in hexadecimal (base 16) uppercase format.
+ `%%` Prints a percent sign.
