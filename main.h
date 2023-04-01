#ifndef MAIN_H
#define MAIN_H

/* Libraries */
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/* Prototypes */
int _printf(const char *format, ...);
int _write(char c);
int aux_conv(char c, va_list args);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_number(va_list args);

/**
 * struct fInst - contains formatting instructions for the final str in stdout
 * @cc: conversion character
 * @f: func pointer that relates the cc to the corresponding function
 */

typedef struct fInst
{
	char *cc;
	int (*f)(va_list args);
} format_t;

#endif
