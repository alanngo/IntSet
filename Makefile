a1: IntSet.o Assign01.o
	g++ IntSet.o Assign01.o -o a1
IntSet.o: IntSet.cpp IntSet.h
	g++ -Wall -ansi -pedantic -std=c++11 -c IntSet.cpp
Assign01.o: Assign01.cpp IntSet.h
	g++ -Wall -ansi -pedantic -std=c++11 -c Assign01.cpp

clean:
	rm -f Sandbox
test:
	./a1 auto < a1test.in > a1test.out

sandbox: Sandbox.cpp IntSet.h
	rm -f Sandbox 
	g++ -o Sandbox Sandbox.cpp IntSet.cpp

debug:
	./Sandbox

