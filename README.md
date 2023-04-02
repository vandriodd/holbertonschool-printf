<div align="center">

<img src="https://apply.holbertonschool.com/holberton-logo.png" />
<h1> Printf project </h1>

> This repository contains the first team project in the Holberton School curriculum, where it is proposed to recreate the standard printf function in its most basic form.
  
</div>

<br>

<div align="center">

![sea-horse](https://user-images.githubusercontent.com/110431271/229328604-b8c19c26-54e9-48d6-946f-91b0337deece.png) ════════════════════ ![sea-horse](https://user-images.githubusercontent.com/110431271/229328604-b8c19c26-54e9-48d6-946f-91b0337deece.png) ════════════════════ ![sea-horse](https://user-images.githubusercontent.com/110431271/229328604-b8c19c26-54e9-48d6-946f-91b0337deece.png)

</div>

<br>
  
## Table of contents
* [About](#about)
* [Resources](#resources)
* [Requirements](#requirements)
* [Usage](#usage)
* [Authors](#authors)

## About
First, to know what the project is about, it is important to know what printf is. Printf _(print formatted)_ is a standard function that prints a message per screen using a **format string** that includes the instructions in the final string to be displayed. <br>
But how was it possible to recreate this function? Well, after acquiring knowledge about variadic functions, data structure, loops, etc _(see the [holbertonschool-low_level_programming repository](https://github.com/vandriodd/holbertonschool-low_level_programming))_, we simply approach the project by dividing it into small tasks, recognizing patterns and using logic. <br>
> You can do it too! ツ

<br>

Below we will specify a little more about the technical part.
  
## Resources
* printf (man 3 printf)
* write (man 2 write)
* va_start (man 3 va_start)
* va_end (man 3 va_end)
* va_arg (man 3 va_arg)

## Requirements
* Ubuntu 20.04 LTS
* All files should compile with gcc 9.4.0 with the following flags:
```bash
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```
* The use of global variables is not allowed
* Use [Betty's style](https://github.com/holbertonschool/Betty/wiki)

## Usage
### Prototype
```C
int _printf(const char *format, ...);
```
Like the standard printf function, _printf tracks the data associated with each argument behind the first argument and then formats the results using the rules described in the format string, which consists of a series of format conversions, each starting with the % followed _(ideally)_ by a conversion character _(see table below)_.
All text between one conversion and another must be printed literally.

<div align="center">

| **Types** |      **Output**     |
|:---------:|:-------------------:|
|     %c    |  Prints a character |
|     %s    |   Prints a string   |
|     %%    | Prints a percentage |
|     %d    |   Prints a number   |
|     %i    |   Prints a number   |

</div>

### Example cases

<details>
<summary> String </summary>

#### Input
```C
_printf("Pampered cows produce %s milk", "spoilt");
```
#### Output
```bash
Pampered cows produce spoilt milk
```
</details>

<details>
<summary> Number </summary>

#### Input
```C
_printf("I've drunk %d cups of coffee to do this", 4);
```
#### Output
```bash
I've drunk 4 cups of coffee to do this
```
</details>

<details>
<summary> Percentage </summary>

#### Input
```C
_printf("%%What's w%%rong?");
```
#### Output
```bash
%What's w%rong?
```
</details>

<div align="center">

## Authors
  
&ensp;[<img src="https://img.shields.io/badge/vandriodd-%23121011.svg?style=for-the-badge&logo=github&logoColor=white">](https://github.com/vandriodd)
&ensp;[<img src="https://img.shields.io/badge/Kiwizacxs-%23121011.svg?style=for-the-badge&logo=github&logoColor=white">](https://github.com/Kiwizacxs)

<br>

![sea-horse](https://user-images.githubusercontent.com/110431271/229328604-b8c19c26-54e9-48d6-946f-91b0337deece.png) ════════════════════ ![sea-horse](https://user-images.githubusercontent.com/110431271/229328604-b8c19c26-54e9-48d6-946f-91b0337deece.png) ════════════════════ ![sea-horse](https://user-images.githubusercontent.com/110431271/229328604-b8c19c26-54e9-48d6-946f-91b0337deece.png)

<br>

_Last updated: April 2, 2023_

</div>
