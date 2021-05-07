OBJS	= sqrBaseRectBlocks.o sphericalBlocks.o rectBlocks.o main.o cylindricalBlocks.o cuboidBlocks.o
SOURCE	= sqrBaseRectBlocks.cpp sphericalBlocks.cpp rectBlocks.cpp main.cpp cylindricalBlocks.cpp cuboidBlocks.cpp
HEADER	= sqrBaseRectBlocks.h sphericalBlocks.h rectBlocks.h cylindricalBlocks.h cuboidBlocks.h
OUT	= Makefile
CC	 = g++
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

sqrBaseRectBlocks.o: sqrBaseRectBlocks.cpp
	$(CC) $(FLAGS) sqrBaseRectBlocks.cpp 

sphericalBlocks.o: sphericalBlocks.cpp
	$(CC) $(FLAGS) sphericalBlocks.cpp 

rectBlocks.o: rectBlocks.cpp
	$(CC) $(FLAGS) rectBlocks.cpp 

main.o: main.cpp
	$(CC) $(FLAGS) main.cpp 

cylindricalBlocks.o: cylindricalBlocks.cpp
	$(CC) $(FLAGS) cylindricalBlocks.cpp 

cuboidBlocks.o: cuboidBlocks.cpp
	$(CC) $(FLAGS) cuboidBlocks.cpp 


clean:
	rm -f $(OBJS) $(OUT)