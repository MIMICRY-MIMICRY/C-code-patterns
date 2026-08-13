auto // allowed only for objects declared at block scope. Defaults - automatic storage duration & no linkage.
alignof // 
alignas //
break // the enclosing loop or switch
bool // Holding the two value true & false. 0.5 valuates to true.
case // Executed according to an integral value.
complex // Required header. Declared complex numbers.
char // character UTF-16 & UTF-32
char8_t // UTF-8 unsigned integer type
char16_t // UTF-16 unsigned integer type
char32_t // UTF-32 unsigned integer type
const // placed read-only memory by the compiler. If the address of a const never taken - not be stored at all. Non-const (converted)-> pointer const (same & compatible type)
continue // introduce to next step of loop
clock_t //
constexpr double // Two compatible types compile time.
consteval // Declares a function or function template to be an immediate function. (directly or indirectly) produce a compile time constant expression. An immediate function is a constexpr function, subject to its requirements as the case may be.
constinit // Declares a variable with static or thread storage duration. Be applied to structured binding declarations. Is also applied to the uniquely-named variable introduced by the declaration.
constexpr // Linkage appropraite to its declarations & exist at runtime to its address taken. Compiler use -> any other constant expression. Is checked at compile time. Float-point -> evaluated float-point envinroment.
constexpr pointers //
constexpr atomic types //
constexpr volatile types //
constexpr restrict pointers //
default // 
do //
double // Declaration of two types compatible. 
double _Complex //
double const //
double long
double long long
decltype(auto) //
else //
enum //
extern // Static duration and external linkage (unless already declared internal). Used with variable & function declaration in both file and block scope. Declared remains internal. Otherwise no-linkage & no scope -> linkage is external.
float //
float _Complex
for
goto //
if
inline // Compiler can and usually do ignore presence or absence (inline specifier) for the purpose of optimization. Avoiding the overhead of a function call - replace call with its body. 
int //
int8_t i8
int8_t
int16_t
int32_t
int64_t
intmax_t
int_least8_t
int_least16_t
int_least32_t
int_least64_t
int_least*_t
int_fast8_t
int_fast16_t
int_fast32_t
int_fast64_t
int_fast*_t
intptr_t
long // will doing longer default structures.
long double
long double _Complex
nullptr // non-lvalue constant can be converted to a pointer types or bool.
off_t
ptrdiff_t
printf
register // Allowed for declared at block scope including func parameter lists. Automatic storage duration & no linkage. Additionaly hints the optimizer to store the value of this variable in the cpu register if possible. Cannot address-of operator & alignas & register arrays not (convertible) to pointers
return // Zwraca wartosci
restrict // Compiler is free to ignore any or all aliasing implications "uses restrict". Avoid restrict-qualified pointers are not violated.
short // Will be shorter all types
size_t //
signed //
signed char
sizeof // return the size in bytes. 
static //
struct //
switch //
std::nullptr_t
std::byte
static //
static_assert //
static inline //
ssize_t //
sig_atomic_t //
scanf
type //
typedef // cannot be static or extern.
typeof // return name data type of operand. Without conversions are applied to expression.
typeof_unqual // 
time_t //
thread_local
union // The value of at most one members can be stored in a union at any one time. Struct prawie = union (tylko inaczej).
unsigned // Przechowywanie wartosci ujemnych.
unsigned char //
uchar_t //
uint //
uint8_t u8 //
uint8_t
uint16_t
uint32_t
uint64_t
uint_least8_t
uint_least16_t
uint_least32_t
uint_least64_t
uint_fast8_t
uint_fast16_t
uint_fast32_t
uint_fast64_t
uintmax_t
uintptr_t
void // Typ ktory nie zwraca zadnej wartosci. Tylko wykonuje.
volatile // Wylacza optymalizacje. Czas trwania jest wydluzony.
while //
wchar_t //
__attribute__ // compiler gcc specific extensions
_Atomic int a; // compiler gcc specific extensions
_Alignas // compiler gcc specific extensions
_Alignof // compiler gcc specific extensions
_Atomic // compiler gcc specific extensions
_Bool b; // compiler gcc specific extensions
_BitInt // compiler gcc specific extensions
_Decimal32 // compiler gcc specific extensions
_Decimal64 // compiler gcc specific extensions
_Decimal128 // compiler gcc specific extensions
_Generic // compiler gcc specific extensions
_Noreturn // compiler gcc specific extensions
_Static_assert // compiler gcc specific extensions
__typeof__ // compiler gcc specific extensions
_Thread_local // compiler gcc specific extensions
%d //signed decimal integer
%i //signed decimal integer
%o // unsigned octal integer
%u // unsigned decimal integer
%x // unsigned hexadecimal (small letter)
%X // unsigned hexadecimal (capital letter)
%f // integer including decimal point
%e // signed floating point (using e notation)
%E // signed floating point (using E notation)
%g // the shorter between %f and %e
%G // the shorter between %f and %E
%c // character
%s // string
%p // pointer
%% // prints % character
%ld or %li // Long
%lf // Double
%Lf // Long double
%lu // unsigned int or unsigned long
%li or %lid // Long long
%llu // unsigned long long
