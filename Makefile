target1: dependency1 dependency2
	command1
	command2
VARIABLE = flag compilation name files
$(VARIABLE)

VARIABLE = flag compile + name of files
VARIABLE := $(...) file.o
VARIABLE ::= more & $(...)
VARIABLE += more
--------------------------------------------------------------------------------------------------------
all: program # nazwa programu po kompilacji, przystawka all mowi ze nie ma zasady dla powstania tego
program: main.cpp file1.o file2.o # program docelowy zalezy od tych plikow
	gcc/g++ -g -Wall main.cpp file1.o file2.o -o program # 
file1.o: file1.cpp file1.h # ten plik zalezy od tych
	gcc/g++ -g -Wall -c file1.cpp -o file1.o # 
file2.o: file2.cpp # ten plik zalezy od tego
	gcc/g++ -g -Wall -c file2.cpp -o file2.o # 
clean: # usuwanie
	rm -f *.o program # usun wszystkie pliki .o programu docelowego po kompilacji
--------------------------------------------------------------------------------------------------------
COMPILER=gcc/g++
OPTIONS=-g -std=c++17 -pedantic -Wall -Wextra -Werror -Wshadow -Wconversion -Wunreachable-code
COMPILE=$(COMPILER) $(OPTIONS)

program: main.cpp
	$(COMPILE) main.cpp -o program
--------------------------------------------------------------------------------------------------------
BUILD=build

$(BUILD)/file2.o: file2.cpp
	gcc/g++ -g -Wall -c file2.cpp -o $(BUILD)/file2.o

build:
	mkdir -p $(BUILD)
--------------------------------------------------------------------------------------------------------
$@ expands to the target name, i.e. target1
$< expands to the first dependency, i.e. dependency1
$^ expands to the complete list of dependencies, i.e. dependency1 dependency2
%.o: %.cpp
	gcc/g++ -Wall -c $< -o $@ 
--------------------------------------------------------------------------------------------------------
COMPILER=gcc/g++
OPTIONS=-g -std=c++17 -pedantic -Wall -Wextra -Werror -Wshadow -Wconversion -Wunreachable-code
COMPILE=$(COMPILER) $(OPTIONS)
BUILD=build

# Compile main by default
all: program

# $(BUILD)/*.o expands to all .o files in the $(BUILD) directory
# In this case, we'll get $(BUILD)/file1.o $(BUILD)/file2.o
program: main.cpp $(BUILD)/file1.o $(BUILD)/file2.o
	$(COMPILE) $< $(BUILD)/*.o -o $@

$(BUILD)/file1.o: file1.cpp file1.h build
	$(COMPILE) -c $< -o $@

$(BUILD)/file2.o: file2.cpp build
	$(COMPILE) -c $< -o $@

# Make the build directory if it doesn't exist
build:
	mkdir -p $(BUILD)

# Delete the build directory and program
clean:
	rm -rf $(BUILD) program

# These rules do not correspond to a specific file
.PHONY: build clean
--------------------------------------------------------------------------
x:=foo
y:=$(x) bar # equivalent to y:=foo later
x:=later
ifeq ($(strip $(foo)),)
text-if-empty
endif
bar = true
foo = bar
ifdef $(foo)
frobozz = yes
endif
bar =
foo = $(bar)
ifdef foo
frobozz = yes
else
frobozz = no
endif
foo =
ifdef foo
frobozz = yes
else
frobozz = no
endif
conditional-directive-one #
text-if-one-is-true
else conditional-directive-two
text-if-two-is-true
else
text-if-one-and-two-are-false
endif
--------------------------------------------------------------------------
najwazniejsze syntaxyczne slowa kluczowe
VARIABLE = VALUE (flags compilation & name of files & directories)
docelowy plik : pliki
warunek pusty : nazwa programu
map = $(foreach a,$(2),$(call $(1),$(a)))
o = $(call map,origin,o map MAKE)
