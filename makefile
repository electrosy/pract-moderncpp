main.o: main.cpp Record.h	
	g++ main.cpp Record.cpp -o testproj.out

Record.o:
	g++ -c Record.cpp
