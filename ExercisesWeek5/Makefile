PROG = program
SRC = main.cpp students.cpp
CC = g++
CFLAGS= -g -std=c++17

all: $(PROG)

$(PROG): $(SRC)
	$(CC) $(SRC) -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -c $<

clean:
	rm -rf *.o