all : main.o
	g++ main.o -o Week01
main.o : main.cpp
	g++ -c main.cpp -o main.o
clean :
	rm -f *.o Week01