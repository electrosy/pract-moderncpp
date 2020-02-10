main.o: main.cpp Record.h Rand_int.h
	g++ main.cpp Record.cpp Rand_int.cpp -o testproj.out

Record.o:
	g++ -c Record.cpp

Rand_int.o:
	g++ -c Rand_int.cpp
