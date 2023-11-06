PROG = main.exe 
SRC = main.cpp struct.cpp objects.cpp classesMethods.cpp object6.cpp
CFLAGS = -g
LIBS = 
CC=g++

all: $(PROG)

$(PROG): $(SRC)
	$(CC) -o $@ $(CFLAGS) $(LDFLAGS) $(SRC)  $(LIBS) 

clean:
	rm -f $(PROG)

.PHONY: all clean