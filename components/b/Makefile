.PHONY: all clean test

CC = gcc
CFLAGS = -Wall -Wextra -O2

all:
	@echo "Building component B"
	$(CC) $(CFLAGS) -c main.c -o main.o

test:
	@echo "Running unit tests for component B"
	$(CC) $(CFLAGS) test.c main.c -o test_b
	./test_b

clean:
	@echo "Cleaning component B"
	rm -f *.o test_b
