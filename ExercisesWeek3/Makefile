PROG = program
SRC = main.cpp
CC = g++
CFLAGS= -c -Wall

all: $(PROG)

$(PROG): $(SRC)
	$(CC) $(SRC) -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -c $<

clean:
	rm -rf *.o