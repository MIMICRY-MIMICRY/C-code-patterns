blueprint;
bool has_ns_capability(struct task_struct *t,
		       struct user_namespace *ns, int cap);

constexpr function() {};

constexpr double function() {};

constexpr volatile function() {};

constexpr restrict function() {};

volatile function() {};

volatile struct {double variable; char line;}; 
function() {};

volatile const function();

volatile int function();

enum Day {monday};
int function(void){
	enum Day today = monday;
};

typeof function() {};

typeof_unqual function() {};

typedef unsigned long ulong;
typedef struct {double variable; double variable;}Point;
int function(void) {};
typedef struct toto toto;
toto const* toto_zero(void) [[unsequenced]];

static void function(variable);

struct objects {char name; int val; float digit;}; 
void function(){
	struct objects object = {"",0,0.0};
};

static_assert function() {};

static inline function() {};

inline function(variable) {};

union functions 
{
	double function;
	bool function;
	void fucntion;
} function();

void function(void){};
