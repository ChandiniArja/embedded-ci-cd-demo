.PHONY: all clean test

CC = gcc
CFLAGS = -Wall -Wextra -O2

all:
	@echo "Building component A"
	$(CC) $(CFLAGS) -c main.c -o main.o

test:
	@echo "Running unit tests for component A"
	$(CC) $(CFLAGS) test.c main.c -o test_a
	./test_a

clean:
	@echo "Cleaning component A"
	rm -f *.o test_a


