run:	main.o Arraystack.o editar.o
	g++ main.o Stack.o editar.o -o run

main.o:	Arraystack.h editar.h main.cpp
	g++ -c main.cpp

editar.o:	editar.h editar.cpp
	g++ -c editar.cpp

Arraystack.o:	Arraystack.h Arraystack.cpp
	g++ -c Arraystack.cpp

clear:
	rm *.o run 
