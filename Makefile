CC=g++

all: sortalgs

sortalgs: ArrayToSort.o bubble_sort.o
	$(CC) ArrayToSort.o bubble_sort.o -o sortalgs

ArrayToSort.o: ArrayToSort.cpp
	$(CC) -c ArrayToSort.cpp

bubble_sort.o: bubble_sort.cpp
	$(CC) -c bubble_sort.cpp

clean:
	rm -rf sortalgs ArrayToSort.o bubble_sort.o
