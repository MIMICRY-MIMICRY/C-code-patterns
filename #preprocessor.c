#include <location file / libs>
#include "location file"
#define NAME VARIABLE
#define NAME FUNC
#define NAME VARIABLE value / ""
#define NAME FUNC value / ""
#define NAME FUNC(x) ((x)*(x))
#define NAME FUNC(a, b) ((a) > (b) ? (a) : (b))
#define NAME VARIABLE/FUNC(..., ...) ...##... / #...
#define NAME func(...) NAME func(...)
#define NAME variable NAME func(variable)
#define NAME variable value
#define	CCP_VSIZE 16
#define	CCP_VMASK		((unsigned int)((1 << CCP_VSIZE) - 1))
#define	CCP_VERSION(v, r)	((unsigned int)((v << CCP_VSIZE) \
					       | (r & CCP_VMASK)))
// Makro zwracające wskaźnik do funkcji
#define URUCHOM_DLA(x) funkcja_docelowa
// Wywołanie w kodzie wygląda tak:
URUCHOM_DLA(x)(y); 
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
