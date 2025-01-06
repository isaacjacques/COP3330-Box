
main: main.o box.o
	g++ -o main -std=c++11 main.o box.o

main.o: main.cpp
	g++ -c -std=c++11 main.cpp

box.o: box.h box.cpp
	g++ -c -std=c++11 box.h
	g++ -c -std=c++11 box.cpp

clean:
	-rm *.h.gch
	-rm *.o
