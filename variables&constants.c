specifier memory control _ specifier type _ constant type qualificator _ variable ->
auto int ... float double long bool char ... signed & unsigned & short + void & sizeof
register int ... float double long bool char ... signed & unsigned & short + void & sizeof
static int ... float double long bool char ... signed & unsigned & short + void & sizeof
extern int ... float double long bool char ... signed & unsigned & short + void & sizeof

const int ... float double long bool char ... signed & unsigned & short + void & sizeof
constexpr int ... float double long bool char ... signed & unsigned & short + void & sizeof
constexpr double ...
consteval ...
constinit ...
constexpr pointers ... *pointer = &adress of variable ... *pointer
constexpr atomic types ...
constexpr volatile types ...
constexpr restrict pointers ... *pointer = &adress of variable ... *pointer
volatile int ... float double long bool char ... signed & unsigned & short + void & sizeof
restrict int ... float double long bool char ... signed & unsigned & short + void & sizeof
enum int ... float double long bool char ... signed & unsigned & short + void & sizeof

int float double long bool char
long double
long double _Complex
double long long

signed & unsigned & short int ... float double long bool char
signed char

auto
...
const
...
typeof ... void int ... float double long bool char ... signed & unsigned & short
typeof_unqual ... void int ... float double long bool char ... signed & unsigned & short
typedef ... void int ... float double long bool char ... signed & unsigned & short
sizeof ... void int ... float double long bool char ... signed & unsigned & short

void int ... float double long bool char ... signed & unsigned & short ...

inline auto ... const ... typeof ... void ... signed & unsigned & short int ... float double long bool char

nullptr
enum

void & sizeof int signed & unsigned & short & double & long & long
void & sizeof float signed & unsigned & short & double & long & long
void & sizeof bool
void & sizeof char short & long & long

union auto const typeof int ... float double long bool char ... signed & unsigned & short

struct ...

static ...
static_assert ...
static inline ...

size_t ...
ssize_t ...

auto ... const ... void int8_t i8
auto ... const ... void int8_t ... intmax_t
auto ... const ... void int_least8_t ...
auto ... const ... void int_least*_t
auto ... const ... void int_fast8_t ... int_fast*_t
auto ... const ... void intptr_t
auto ... const ... void nullptr *pointer = &adress of variable
auto ... const ... void uchar_t
auto ... const ... void uint
auto ... const ... void uint8_t u8 ...
auto ... const ... void uint_least8_t
auto ... const ... void uint_fast8_t
uintmax_t
uintptr_t
uint_least*_t
uchar_t

typedef typeof((int*)nullptr - (int*)nullptr) ptrdiff_t;

alignas  do   int  struct  while
alignof  double  long  switch  _Atomic
auto  else  nullptr  thread_local  _BitInt
bool  enum  register  true  _Complex
break  extern  restrict  typedef  _Decimal128
case  false  return  typeof  _Decimal32
char  float  short  typeof_unqual  _Decimal64
const  for  signed  union  _Generic
constexpr  goto  sizeof  unsigned  _Imaginary
continue  if  static  void  _Noreturn
default  inline  static_assert  volatile

Keyword  Alternative Spelling
alignas  _Alignas
alignof  _Alignof
bool  _Bool
static_assert  _Static_assert
thread_local  _Thread_local

int
float
double
double long
double long long
bool
char
long
long long
long int
long long int
long double
long long double
short
int8_t i8
...
int8_t
...
intmax_t
int_least8_t
...
int_least*_t
int_fast8_t
...
int_fast*_t
intptr_t
uint
uint8_t
...
uint8_t u8
...
uint_least8_t
...
uint_least*_t
uint_fast8_t
...
uintmax_t
uintptr_t
uchar_t ui8_fast;
uchar8_t ui8;
...
uchar8_t u8
...
uchar_least_t ui8_least;
...
uchar_least8_t ui8_least;
...
uchar_least*_t ui8_least;
uchar_fast_t ui8_fast;
...
uchar_fast8_t ui8_fast;
...
uchar_fast*_t ui8_fast;
ucharmax_t ui8_max;
char8_t
...
char8_t i8
...
char_least_t i8_least;
...
char_least8_t i8_least;
...
char_least*_t i8_least;
char_fast8_t ui8_fast;
...
char_fast*_t i8_fast_least;
...
wchar_t

auto // Automatic storage duration (C) or type deduction (C++11).
register // Obsolete hint to store variable in a CPU register (removed in C++17)
static // Gives static storage duration and internal linkage (file scope) or class-wide scope.
extern // Declares a variable with external linkage, defined elsewhere.
const // Declares a read‑only (immutable) variable.
const int 
constexpr // Specifies that a value/function must be evaluated at compile time (C++11).
constexpr double ...
consteval ... // Declares an immediate function, called only at compile time (C++20).
constinit ... // Asserts that a variable is initialized at compile time (C++20).
constexpr pointers ... *pointer = &adress of variable ... *pointer
constexpr atomic types ...
constexpr volatile types ...
constexpr restrict pointers ... *pointer = &adress of variable ... *pointer
volatile // Prevents compiler optimizations; value may change unexpectedly (hardware, interrupts).
volatile struct 
volatile int
volatile const int
restrict // C99 qualifier; promises that the pointer does not alias others (optimisation hint).
enum // Defines an enumerated type with a set of named constants.

signed // Explicitly allows negative values for integral types (default for int).
unsigned // Disallows negative values; range starts at 0.
unsigned int
unsigned long int
usigned long long int
typeof // GCC/clang extension (now C23) to get the type of an expression.
typeof_unqual // C23: typeof but removes const/volatile/restrict qualifiers.
typedef // Creates an alias for an existing type.
sizeof // Compile‑time operator returning size in bytes of a type/object.
union // A type where members share the same memory location.
struct // A composite type with separate memory for each member.
static ... // General placeholder for static applied to variables, functions, or members.
static_assert ... // Compile‑time assertion; fails if condition is false (C++11/C11).
static inline ... // Inline function with internal linkage (local to translation unit).
size_t ... // Unsigned integer type, result of sizeof (standard C/C++).
ssize_t ... // Signed integer type for sizes/counts (POSIX; can hold -1 for errors).
inline // Suggests that the compiler should expand the function in place.
nullptr // Type‑safe null pointer literal (C++11).
union
struct
static_assert
static inline
void // Represents “no type” — used for functions returning nothing or generic pointers (void*).
ptrdiff_t // Signed integer type for the result of subtracting two pointers.




Type Specifiers
Podstawowe: char, int, float, double, void.
Znakowe i wielkościowe: signed, unsigned, short, long.
Złożone i własne: struct, union, enum, typedef.
Nowsze standardy (C99+): _Bool (w nagłówku jako bool), _Complex, _Atomic.
Type Qualifiers
const – oznacza, że wartość jest tylko do odczytu (Twoja konstanta).
volatile – informuje kompilator, że wartość może zmienić się nagle (np. przez sprzęt), więc kompilator nie może jej optymalizować.
restrict (od C99) – wskazówka dla kompilatora, że dany wskaźnik jest jedynym, który odnosi się do danego obszaru pamięci (pomaga w optymalizacji).
_Atomic (od C11) – oznacza, że operacje na zmiennej są niepodzielne (współbieżność).
Storage Class Specifiers
auto – domyślna zmienna lokalna na stosie (rzadko używane słowo kluczowe).
register – sugestia dla kompilatora, by trzymać zmienną w rejestrze procesora, a nie w RAM-ie.
static – zachowuje wartość zmiennej między wywołaniami funkcji lub ogranicza widoczność globalną do jednego pliku.
extern – informuje, że zmienna lub funkcja jest zdefiniowana w innym pliku.
_Thread_local (od C11) – zmienna unikalna dla każdego wątku.
Function Specifiers
inline – sugestia dla kompilatora, by wstawiał kod funkcji bezpośrednio w miejsce jej wywołania (zamiast skakać do niej w pamięci).
_Noreturn (od C11) – informacja, że funkcja nigdy nie wraca do miejsca wywołania (np. funkcja kończąca program lub wchodząca w nieskończoną pętlę).
typeof - uzywa tego samego typu w nowej deklaracji. to znak dla kompilatora ze kopiuje istniejacy typ do nowego.
