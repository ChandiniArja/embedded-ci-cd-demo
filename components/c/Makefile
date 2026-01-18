.PHONY: all clean test

CC = gcc
CFLAGS = -Wall -Wextra -O2

all:
	@echo "Building component C"
	$(CC) $(CFLAGS) -c main.c -o main.o

test:
	@echo "Running unit tests for component C"
	$(CC) $(CFLAGS) test.c main.c -o test_c
	./test_c

clean:
	@echo "Cleaning component C"
	rm -f *.o test_c
