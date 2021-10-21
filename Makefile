main: main.o unindent.o indent.o
	g++ -o main main.o unindent.o indent.o

main.o: main.cpp 
	g++ -c -g main.cpp 

unindent.o: unindent.cpp unindent.h
	g++ -c -g unindent.cpp 

indent.o: indent.cpp indent.h
	g++ -c -g indent.cpp
clean:
	rm -f main.o unindent.o indent.o fixed-unindented.cpp fixed-indented.cpp