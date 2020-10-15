# Makefile Sort Project

# Project Name
PROJ_NAME = sort-project

# Sources files *.cpp
C_SOURCE = $(wildcard ./src/*.cpp)

# Header files *.hpp
HPP_SOURCE = $(wildcard ./lib/*.hpp)

# Objects files
OBJ_FILE = $(subst .cpp,.o, $(subst src,bin,$(C_SOURCE)))

# Compiler
CC = g++

# Flags for compiler
CC_FLAGS = -c           \
	   -Wall        \
	   -std=c++11

# Clean all files Created in the compilation
RM = rm -rf

all: objFolder $(PROJ_NAME)

$(PROJ_NAME): $(OBJ_FILE) ./bin/main.o
	@ echo 'Building executable file: $@. Compiler: $(CC)'
	$(CC) -o ./bin/$@ $^
	@ echo ' '
	@ echo 'To run the binary file use "make run" or ./$(PROJ_NAME)'

./bin/%.o: ./src/%.cpp ./lib/%.h
	@ echo 'Building: $<. Compiler: $(CC)'
	$(CC) $< $(CC_FLAGS) -o $@
	@ echo ' '

./bin/main.o: main.cpp $(OBJ_FILE)
	@ echo 'Building: $<. Compiler: $(CC)'
	$(CC) $< $(CC_FLAGS) -o $@
	@ echo ' '

objFolder:
	@ mkdir -p bin
run:
	./bin/$(PROJ_NAME)

clean:
	@$(RM) ./bin/*
	@ rmdir bin
