## Table of Contents
- [Includes](#includes)
    - [stdio.h](#stdioh)
    - [stdbool.h](#stdboolh)
    - [math.h](#mathh)
        - [Functions](#functions)
- [Strings and Variables](#strings-and-variables)
    - [Strings](#strings)
    - [Variables](#variables)
    - [Integers](#integers)

## Includes
### stdio.h
This is needed for the printf and scanf functions
```c
#include <stdio.h>
```
### stdbool.h
This is needed for the bool type
```c
#include <stdbool.h>
```
### math.h
This is needed for the math functions (sqrt, pow, etc.)
```c
#include <math.h>
```

#### Functions
- sqrt(x) - Returns the square root of x
- pow(x, y) - Returns x to the power of y
- abs(x) - Returns the absolute value of x
- ceil(x) - Returns the smallest integer greater than or equal to x
- floor(x) - Returns the largest integer less than or equal to x
- round(x) - Returns the value of x rounded to the nearest integer
- sin(x) - Returns the sine of x (x is in radians)
- cos(x) - Returns the cosine of x (x is in radians)
- tan(x) - Returns the tangent of x (x is in radians)
- asin(x) - Returns the arc sine of x (x is in radians)
- acos(x) - Returns the arc cosine of x (x is in radians)
- atan(x) - Returns the arc tangent of x (x is in radians)
- atan2(y, x) - Returns the arc tangent of y/x (y and x are in radians)
- exp(x) - Returns the value of Ex
- log(x) - Returns the natural logarithm (base E) of x
- log10(x) - Returns the common logarithm (base 10) of x
- fmod(x, y) - Returns the remainder of x/y
- min(x, y) - Returns the smallest of x and y
- max(x, y) - Returns the largest of x and y
- rand() - Returns a pseudo-random number between 0 and RAND_MAX
- srand(x) - Seeds the random number generator used by rand() with the value x
- M_PI - Pi (3.14159265358979323846)
- M_E - Euler's number (2.71828182845904523536)
- M_LOG2E - Logarithm of e to base 2 (1.44269504088896340736)
- M_LOG10E - Logarithm of e to base 10 (0.434294481903251827651)
- M_LN2 - Natural logarithm of 2 (0.693147180559945309417)

Thats a lot and theres more omfg imma stop this here

## Strings and Variables
### Strings
Strings are a sequence of characters. They are declared like this:
```c
char string[10];
```
this creates a string with a length of 10 characters. You can also initialize it with a value like this:
```c
char string[10] = "Hello";
```
This creates a string with a length of 10 characters and a value of "Hello". You can also do this:
```c
char string[] = "Hello";
```
This creates a string with a length of 6 characters and a value of "Hello". The length is 6 because the compiler automatically adds a null character at the end of the string.

### Variables
Variables are used to store values. They are declared like this:
```c
int x;
```
This creates an integer variable called x. You can also initialize it with a value like this:
```c
int x = 5;
```
This creates an integer variable called x with a value of 5. You can also do this:
```c
int x;
x = 5;
```
This creates an integer variable called x and thn later set the value to 5.

### Integers
Integers are whole numbers. They are declared like this:
```c
int x;
```
This creates an integer variable called x. You can also initialize it with a value like this:
```c
int x = 5;
```
This creates an integer variable called x with a value of 5. You can also do this:
```c
int x;
x = 5;
```
This creates an integer variable called x and thn later set the value to 5.
