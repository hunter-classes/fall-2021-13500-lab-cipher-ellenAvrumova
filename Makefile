# Author: Ellen Avrumova
# Course: CSCI-135
# Instructor: Tong Yi & Mike Zamansky
# Assignment: Lab Cipher
# This is the make file for Lab Cipher.

main: main.o funcs.o
	g++ -o main main.o funcs.o -std=c++11

tests: tests.o funcs.o
	g++ -o tests tests.o funcs.o -std=c++11

funcs.o: funcs.cpp funcs.h
	g++ -c funcs.cpp -std=c++11

main.o: main.cpp funcs.h
	g++ -c main.cpp -std=c++11

tests.o: tests.cpp doctest.h funcs.h
	g++ -c tests.cpp funcs.cpp -std=c++11

clean:
	rm -f main.o funcs.o tests.o
