run:	main.o Stack.o Arraystack.o
	g++ main.o Stack.o Arraystack.o -o run

main.o:	Stack.h Arraystack.h main.cpp
	g++ -c main.cpp

Stack.o:	Stack.h Stack.cpp
	g++ -c Stack.cpp

Arraystack.o:	Arraystack.h Arraystack.cpp
	g++ -c Arraystack.cpp

clear:
	rm *.o run 
