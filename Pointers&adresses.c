*pointer
*pointer=&adress
&adress
&adress->variable
variable->variable
*pointer=func(variable)
*pointer=variable->variable
variable->variable->variable
variable->variable->func(variable)
*pointer=&adress->variable
dp = &(s2->d[0]);
ncs = cs; // valid
cs = ncs; // violates modifiable lvalue constraint for =
pi = &ncs.mem; // valid
pi = &cs.mem; // violates type constraints for =
pci = &cs.mem; // valid
pi = a[0]; // invalid: a[0] has type "const int *"
