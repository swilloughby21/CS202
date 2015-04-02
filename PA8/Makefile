all: PA8

PA8: 8main.cpp 8imps.o
	g++ 8main.cpp 8imps.o -o PA8

8imps.o: 8imps.cpp
	g++ -c 8imps.cpp

clean: rm -rf *.o PA8
