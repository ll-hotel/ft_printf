# Common Instructions
+ Your project must be written in C.
+ Your project must be written in accordance with the [Norm](https://github.com/42School/norminette/blob/master/pdf/fr.norme.pdf).
  If you have bonus files/functions, they are included in the norm check and you will receive a 0 if there is a norm error inside.
+ Your functions should not quit unexpectedly (segmentation fault, bus error, double free, etc) apart from undefined behaviors. If this happens, your project will be considered non functional and will receive a 0 during the evaluation.
+ All heap allocated memory space must be properly freed when necessary. No leaks will be tolerated.
+ If the subject requires it, you must submit a Makefile which will compile your source files to the required output with the flags `-Wall`, `-Wextra` and `-Werror`, use `cc`, and your Makefile must not relink.
+ Your Makefile must at least contain the rules `$(NAME)`, `all`, `clean`, `fclean` and `re`.


# Mandatory part
You have to recode the `printf()` function from libc.

The prototype of `ft_printf()` is:

```c
int ft_printf(const char *, ...);
```

Here are the requirements:

- Don’t implement the buffer management of the original printf().
- Your function has to handle the following conversions: cspdiuxX%
- Your function will be compared against the original printf().
- You must use the command ar to create your library.

Using the libtool command is forbidden.

- Your libftprintf.a has to be created at the root of your repository.

You have to implement the following conversions:

+ `%c` Prints a single character.
+ `%s` Prints a string (as defined by the common C convention).
+ `%p` The void * pointer argument has to be printed in hexadecimal format.
+ `%d` Prints a decimal (base 10) number.
+ `%i` Prints an integer in base 10.
+ `%u` Prints an unsigned decimal (base 10) number.
+ `%x` Prints a number in hexadecimal (base 16) lowercase format.
+ `%X` Prints a number in hexadecimal (base 16) uppercase format.
+ `%%` Prints a percent sign.
