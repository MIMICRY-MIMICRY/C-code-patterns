if (condition) { }
if (variable / value operation variable / value) { ... }
if (variable == NULL) / if (variable) / if (*variable)
if (FUNC() == 0 / FUNC() != ...)
if (variable = 5)
if (variable = FUNC() != 0)
if (variable = value, variable = value, variable operation variable)
if (sizeof(data type) == value / variable)
if ((data type)f == value / variable)
#define FUNC(variable) ((variable) > 0 && (variable) < 100)
if (FUNC(n))
#if defined(DEBUG)
  if (1) { ... }
#endif
else if (condition) { }
...
else { }
...
switch (...) {
  case 1: /* ... */ break;
  default: /* ... */
}
for (int i = 0; i < n; i++) { }
for (int i = 0; i < n; i++, printf("krok\n")) { }
for (int i = 0; i < n && (tab[i] = i * i); i++) ;
for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++) { }
for (data type variable = ...; variable operation variable; variable operation) { ... }
for (variable = ...; variable operation variable; variable operation) { }
for (data type variable = variable / value; variable operation operation value; ) { }
for (;;) { }
for (data type variable = value, variable = value; variable operation variable; variable operation, variable operation) { }
for (int i = 0; i < n; i++) suma += i;
while (condition) { }
while (1) { }
while (true) { }      // wymaga <stdbool.h> (C99+)
while (!0) { }         // rzadko spotykane, ale poprawne
while (flag) { }
while (ptr) { }              // dopóki ptr != NULL
while ((c = getchar()) != EOF) { }
while (fgets(line, sizeof(line), f)) { }
int result;
while ((result = compute()) != 0) { }
while (has_more_data()) { }
while (fscanf(f, "%d", &x) == 1) { }
while (i < n && arr[i] != 0) { }
while (!done) { }
while (i-- > 0) { } 
while (printf("."), i++ < n) { }
while (x -= 1) { }            // dopóki x != 0
while (i < n) suma += arr[i++];
while ((c = getchar()) != '\n' && c != EOF) ; // pusta instrukcja
while (i < n)
    while (j < m) { j++; }
do { } while (condition);
do i++; while (i < n);          // pojedyncza instrukcja jako ciało
struct Point p;
while (p) { }    // BŁĄD — nieskalarny typ
break;
continue;
goto label;
label: ;
return value;
