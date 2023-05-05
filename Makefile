CC=g++
CFLAGS=-c -Wall -O0

all: sort_bubble sort_selection

sort_selection: ArrayToSort.o sortmethod_selection.o sort_selection.o
	$(CC) ArrayToSort.o sortmethod_selection.o sort_selection.o -o sort_selection

sort_bubble: ArrayToSort.o sortmethod_bubble.o sort_bubble.o
	$(CC) ArrayToSort.o sortmethod_bubble.o sort_bubble.o -o sort_bubble

ArrayToSort.o: ArrayToSort.cpp
	$(CC) $(CFLAGS) ArrayToSort.cpp

sortmethod_bubble.o: ArrayToSort.o sortmethod_bubble.cpp
	$(CC) $(CFLAGS) sortmethod_bubble.cpp

sortmethod_selection.o: ArrayToSort.o sortmethod_selection.cpp
	$(CC) $(CFLAGS) sortmethod_selection.cpp

sort_bubble.o: sort_bubble.cpp
	$(CC) $(CFLAGS) sort_bubble.cpp

sort_selection.o: sort_selection.cpp
	$(CC) $(CFLAGS) sort_selection.cpp

clean:
	rm -rf sort_selection sort_bubble \
		ArrayToSort.o \
		sortmethod_bubble.o sort_bubble.o \
		sortmethod_selection.o sort_selection.o
