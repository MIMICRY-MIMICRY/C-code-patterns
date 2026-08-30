blueprint;

int function() {};

float function() {};

double function() {};

double long function() {};

double long long function() {};

bool has_ns_capability(struct task_struct *t, struct user_namespace *ns, int cap);

char function() {};

long function() {};

long long function() {};

long int function() {};

long long int function() {};

long double function() {};

long long double function() {};

short function() {};

static int allocinfo_ioctl_get_next(struct seq_file *m, void __user *arg) {};

static long allocinfo_ioctl(struct file *file, unsigned int cmd, unsigned long __arg) {};

static void mn_itree_inv_end(struct mmu_notifier_subscriptions *subscriptions) {};

static inline p4d_t *p4d_alloc_track(struct mm_struct *mm, pgd_t *pgd, unsigned long address, pgtbl_mod_mask *mod_mask) {};

static int process_vm_rw_single_vec(unsigned long addr,
				    unsigned long len,
				    struct iov_iter *iter,
				    struct page **process_pages,
				    struct mm_struct *mm,
				    struct task_struct *task,
				    int vm_write) {};

const struct cpumask *cpumask_of_node(int node) {};

static void numa_update_cpu(unsigned int cpu, bool remove) {};

constexpr function() {};

constexpr double function() {};

constexpr volatile function() {};

constexpr restrict function() {};

volatile function() {};

volatile struct {double variable; char line;}; 
function() {};

volatile const function();

volatile int function();

volatile const int function() {};

restrict function() {};

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

typedef struct structname {
	int field1;
	float field2;
	char * field3;
	struct structname * field4;
} typename;

typedef struct bond {
	unsigned short a1, a2;
	unsigned char eparis;
	atom *atoms;
	double x1, x2, y1, y2, z, len, dx, dy;
	bond *bonds, **bond_ptrs;
} bond;

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

void log_event(int event_type, double) {};

void procesuj(int dane, [[maybe_unused]] int debug_id) {};

void printf(const char* format, ...) {};

void zaawansowana_funkcja([[maybe_unused]] const int, typeof(int) b, ...);

void reset_handler(nullptr_t ptr) {};

void kopiuj(int dest[restrict static 10], const int src[restrict static 10]);

void modyfikuj(typeof(wzorcowa_zmienna) *ptr) {*ptr=100;};

void zapisz_dane([[gnu::nonnull]] int *adres_docelowy) {*adres_docelowy=5;};

void alokuj(int **ptr); – używany, gdy funkcja ma zmienić adres, na który wskazuje oryginalny wskaźnik.

void wykonaj(int (*operacja)(int, int));

void przetworz(char*, int); – w definicji funkcji nie musisz nazywać wskaźnika, jeśli z niego nie korzystasz.

void tlb_remove_table_sync_rcu(void) {synchronize_rcu();};

tlb_change_page_size(tlb, huge_page_size(hstate_vma(vma)));

funkcja(&zmienna)

address -> replace & allocate
value -> change e. move bits in left or right or change & replace
