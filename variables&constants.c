specifier memory control _ specifier type _ constant type qualificator _ variable ->

int float double long bool char
long double _Complex

size_t ...
ssize_t ...

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
signed char
unsigned int
unsigned long int
unsigned long long int
unsigned char
unsigned _BitInt(N)
long
long long
long int
long long int
short
//
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
//
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
//
auto variable = value, (function())(variable)
auto // Automatic storage duration (C) or type deduction (C++11).
auto p = (struct { int x; } *)0; //
auto p = (struct s { int x; } *)0; //
auto alignas (struct s *) x = 0; //
register // Obsolete hint to store variable in a CPU register (removed in C++17)
static // Gives static storage duration and internal linkage (file scope) or class-wide scope.
extern // Declares a variable with external linkage, defined elsewhere.
extern const volatile int real_time_clock; //
const // Declares a read‑only (immutable) variable.
const int 
constexpr // Specifies that a value/function must be evaluated at compile time (C++11).
constexpr double // 
constexpr unsigned int uint_max = -1U; //
constexpr _Decimal32 small = DEC64_TRUE_MIN * 0; // constraint violation
constexpr char8_t u8string[] = { u8"\xFF", }; //
consteval // Declares an immediate function, called only at compile time (C++20).
constinit // Asserts that a variable is initialized at compile time (C++20).
constexpr pointers *pointer = &adress of variable ... *pointer
constexpr atomic types
constexpr volatile types
constexpr restrict pointers *pointer = &adress of variable ... *pointer
constexpr struct // 
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
struct s {int i; const int ci;};
struct s s;
const struct s cs;
volatile struct s vs;
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


variable = value;
variable = variable;
variable = function();
variable alignas(0);
variable alignas(8);
variable alignas(float);
variable alignas(struct_float);
variable alignas(alignof(8));
variable alignof(max_align_t);
auto thread_local register extern restrict const constexpr volatile static variable = variable;
auto thread_local register extern restrict const constexpr volatile static variable = function(&address; variable->variable;);
nullptr static variable = variable;
nullptr static variable = function(&address, variable->variable;);
static static_assert signed int float double long bool char variable = variable;
static static_assert signed int float double long bool char variable = function();
static static_assert unsigned int float double long bool char variable = variable;
static static_assert unsigned int float double long bool char variable = function();
static inline bool function(struct name *pointer) {return true;};
static inline void function(struct name *pointer) {};
typedef 
typeof 
typeof_unqual 
sizeof 
extern bool mirrored_kernelcore;
void memblock_free_pages(unsigned long pfn, unsigned int order);
void *memmap_alloc(phys_addr_t size, phys_addr_t align, phys_addr_t min_addr, int nid, bool exact_nid);
void __meminit __init_single_page(struct page *page, unsigned long pfn, unsigned long zone, int nid);
#define mm_slot_entry(ptr, type, member);
static void tlb_remove_table_smp_sync(void *arg) {};
call_rcu(&batch->rcu, tlb_remove_table_rcu);
seq = READ_ONCE(interval_sub->invalidate_seq);
is_invalidating = seq == subscriptions->invalidate_seq;
hlist_for_each_entry_srcu(subscription, &mm->notifier_subscriptions->list, hlist, srcu_read_lock_held(&srcu)) {};
nodemask_t physnode_mask = numa_nodes_parsed;
u64 size;
static inline p4d_t *p4d_alloc_track(struct mm_struct *mm, pgd_t *pgd, unsigned long address, pgtbl_mod_mask *mod_mask) {};
unsigned long pa = addr & PAGE_MASK;
unsigned long start_offset = addr - pa;
unsigned long nr_pages;
extern void __shuffle_free_memory(pg_data_t *pgdat);
static u64 zswap_pool_limit_hit;


// Type Specifiers
Podstawowe: char, int, float, double, void.
Znakowe i wielkościowe: signed, unsigned, short, long.
Złożone i własne: struct, union, enum, typedef.
Nowsze standardy (C99+): _Bool (w nagłówku jako bool), _Complex, _Atomic.
// Type Qualifiers (const, constexpr, volatile, restrict, _Atomic)
const – oznacza, że wartość jest tylko do odczytu (Twoja konstanta).
volatile – informuje kompilator, że wartość może zmienić się nagle (np. przez sprzęt), więc kompilator nie może jej optymalizować.
restrict (od C99) – wskazówka dla kompilatora, że dany wskaźnik jest jedynym, który odnosi się do danego obszaru pamięci (pomaga w optymalizacji).
_Atomic (od C11) – oznacza, że operacje na zmiennej są niepodzielne (współbieżność).
// Storage Class Specifiers (auto, constexpr, extern, register, static, thread_local, typedef)
auto – domyślna zmienna lokalna na stosie (rzadko używane słowo kluczowe).
register – sugestia dla kompilatora, by trzymać zmienną w rejestrze procesora, a nie w RAM-ie.
static – zachowuje wartość zmiennej między wywołaniami funkcji lub ogranicza widoczność globalną do jednego pliku.
extern – informuje, że zmienna lub funkcja jest zdefiniowana w innym pliku.
_Thread_local (od C11) – zmienna unikalna dla każdego wątku.
// Function Specifiers (inline, _Noreturn, typeof, typeof_unqual)
inline – sugestia dla kompilatora, by wstawiał kod funkcji bezpośrednio w miejsce jej wywołania (zamiast skakać do niej w pamięci).
_Noreturn (od C11) – informacja, że funkcja nigdy nie wraca do miejsca wywołania (np. funkcja kończąca program lub wchodząca w nieskończoną pętlę).
typeof - uzywa tego samego typu w nowej deklaracji. to znak dla kompilatora ze kopiuje istniejacy typ do nowego.

thread_local may appear with static or extern,
auto may appear with all the others except typedef, and
constexpr may appear with auto, register, or static.

[[deprecated]] void f [[deprecated]] (void); // valid
ncs = cs; // valid
cs = ncs; // violates modifiable lvalue constraint for =
pi = &ncs.mem; // valid
pi = &cs.mem; // violates type constraints for =
pci = &cs.mem; // valid
pi = a[0]; // invalid: a[0] has type "const int *"
