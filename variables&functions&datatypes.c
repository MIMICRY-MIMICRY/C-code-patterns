specifier variable = value
modifier variable = value
operators variable = value
qualificator variable = value

specifier variable = value
specifier specifier variable = value
specifier qualificator variable = value
specifier qualificator qualificator variable = value
specifier specifier variable = value
specifier specifier qualificator qualificator variable = value
specifier specifier qualificator variable = value

qualificator variable = value
qualificator specifier variable = value
qualificator specifier specifier variable = value
qualificator qualificator variable = value
qualificator qualificator specifier variable = value
qualificator qualificator specifier specifier variable = value

specifier function()
specifier specifier function()
specifier specifier specifier function()
specifier qualificator function()
specifier qualificator qualificator function()
specifier specifier qualificator qualificator function()

qualificator function()
qualificator specifier function()
qualificator specifier specifier function()
qualificator specifier specifier specifier function()
qualificator qualificator function()
qualificator qualificator specifier function()
qualificator qualificator specifier specifier function()

// Specifier
auto //
bool //
char //
constexpr //
double //
extern //
enum //
float //
int //
inline // before function specifier
long //
register //
static //
struct //
static_assert //
thread_local //
typedef //
void //
union //

// Modifier
short //
signed //
unsigned //

// Qualificator
const // 
restrict //
volatile //
constexpr //

// Operator
alignas
alignof
sizeof //
typeof //
typeof_unqual //

// Statements
function(...){
  body...
}
// Control flow blocks
std::...::...::...
// Identifiers
number, value, alphabet 
