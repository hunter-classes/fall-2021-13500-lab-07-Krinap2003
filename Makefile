main: main.o unindent.o
	g++ -o main main.o unindent.o

main.o: main.cpp 
	g++ -c -g main.cpp

unindent.o: unindent.cpp unindent.h
	g++ -c -g unindent.cpp

clena:
	rm -f main.o unindent.o