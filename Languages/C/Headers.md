# C Headers and Libraries

## Standard Headers

### stdio.h

#### printf

- Declaration: `int printf(const char *format, ...);`

- Description: Prints formatted output to the standard output stream (stdout).

- Parameters:
  - `format`: A string that specifies the format of the output.
  - `...`: Additional arguments that correspond to the format specifiers in the `format` string.
- Return Value: The number of characters printed (excluding the null terminator).
- Flags for Format Specifiers:
  - `%d`: Integer
  - `%f`: Floating-point number
  - `%c`: Character
  - `%s`: String
  - `%p`: Pointer
  - `%x`: Hexadecimal number
  - `%o`: Octal number
  - `%u`: Unsigned integer
  - `%e`, `%E`: Scientific notation
  - `%g`, `%G`: Compact representation
  - `%a`, `%A`: Hexadecimal floating-point number
  - `%n`: Number of characters printed so far
  - `%%`: Percent sign
- Example:
  - Normal usage:
	```c
	int num = 42;
	printf("The answer is %d\n", num);
	// Output: The answer is 42
	```
  - Using width and precision specifiers:
	```c
	double pi = 3.14159;
	printf("The value of pi is %.2f\n", pi);
	// Output: The value of pi is 3.14
	```
  - Using flags:
	```c
	int num = 42;
	printf("The answer is %+d\n", num);
	// Output: The answer is +42
	```
  - Using positional specifiers:
	```c
	int num1 = 10, num2 = 20;
	printf("The numbers are %2$d and %1$d\n", num1, num2);
	// Output: The numbers are 20 and 10
	```
  - Using width and precision specifiers with positional specifiers:
	```c
	double pi = 3.14159;
	printf("The value of pi is %1$.2f\n", pi);
	// Output: The value of pi is 3.14
	```

#### scanf

- Declaration: `int scanf(const char *format, ...);`

- Description: Reads formatted input from the standard input stream (stdin).

- Parameters:
  - `format`: A string that specifies the format of the input.
  - `...`: Pointers to variables where the input values will be stored.
- Return Value: The number of input items successfully matched and assigned.
- Flags for Format Specifiers:
  - `%d`: Integer
  - `%f`: Floating-point number
  - `%c`: Character
  - `%s`: String
  - `%p`: Pointer
  - `%x`: Hexadecimal number
  - `%o`: Octal number
  - `%u`: Unsigned integer
- Example:
  - Normal usage:
	```c
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	```
  - Reading multiple values:
	```c
	int num1, num2;
	printf("Enter two numbers: ");
	scanf("%d %d", &num1, &num2);
	```
  - Reading a string:
	```c
	char name[50];
	printf("Enter your name: ");
	scanf("%s", name);
	```
  - Reading a line of text:
	```c
	char line[100];
	printf("Enter a line of text: ");
	scanf("%[^\n]", line);
	```
  - Reading a character:
	```c
	char ch;
	printf("Enter a character: ");
	scanf(" %c", &ch);
	```


### stdlib.h
### string.h
### math.h
### time.h

## Defining and Using Custom Headers

### Header Files

#### Declaration

- Header files in C are used to declare functions, variables, and macros that can be shared across multiple source files.

- Header files typically have a `.h` extension and contain declarations without definitions.

- Header files are included in source files using the `#include` preprocessor directive.



## Including Libraries
## Conditional Compilation
## Preprocessor Directives
### #define and #undef
### #include
### #ifdef, #ifndef, #endif
