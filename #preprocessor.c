#include <location file / libs>
#include "location file"
#define NAME VARIABLE
#define NAME FUNC
#define NAME VARIABLE value / ""
#define NAME FUNC value / ""
#define NAME FUNC(x) ((x)*(x))
#define NAME FUNC(a, b) ((a) > (b) ? (a) : (b))
#define NAME VARIABLE/FUNC(..., ...) ...##... / #...
#define NAME(...) NAME(...)
#define NAME VARIABLE/FUNC(..., ...) printf(..., __VA_ARGS__)
#define NAME VARIABLE/FUNC(..., ...) kprintf("... " ... "...", __FILE__, __LINE__, ##__VA_ARGS__)
#define NAME VARIABLE/FUNC(...) fprintf(..., __VA_ARGS__)
#define putchar(A) putc(A, stdout)
#define NAME FUNC(..., ...) do { \ ...; \ ...; \ ...; \ } while (...)
#undef NAME FUNC
#ifdef NAME FUNC
#ifndef NAME FUNC
#elifdef NAME FUNC
#elifndef NAME FUNC
#embed "location file" limit(...) prefix(..., ) suffix(, ...)
#embed <location file> limit(...) prefix(..., ) suffix(, ...)
#if condition
#elif condition
#else condition
#endif condition
#pragma GCC warning "..."
#pragma once
#error "comment"
#line 100
#warning "..." / ...
#define X defined(DEBUG)
#if defined(DEBUG)
