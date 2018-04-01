CC=g++
CFLAGS=-ggdb -std=c++11 -Wall -pedantic

H_FILES=CalcFramer.hpp FileHelpers.hpp
FILES=test_ice1.cpp CalcFramer.cpp FileHelpers.cpp

all: ice1tester

ice1tester: $(FILES) $(H_FILES)
	$(CC) $(CFLAGS) -o ice1tester $(FILES)

clean:
	rm -rf ice1tester submission.zip
