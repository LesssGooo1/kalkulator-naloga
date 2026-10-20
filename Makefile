CC = gcc
CFLAGS = -Wall -Wextra -Iinclude

all: build/calc

build/calc: src/main.c src/calc.c include/calc.h
	@mkdir -p build
	$(CC) $(CFLAGS) src/main.c src/calc.c -o build/calc -lm

build/test_calc: tests/test_calc.c src/calc.c include/calc.h
	@mkdir -p build
	$(CC) $(CFLAGS) tests/test_calc.c src/calc.c -o build/test_calc -lm

test: build/test_calc
	./build/test_calc

clean:
	rm -rf build

.PHONY: all test clean
