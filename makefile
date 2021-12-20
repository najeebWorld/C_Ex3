.PHONY = all clean 
CC=gcc
OBJS=q1.o  q2.o q3.o main.o
EXEC=stringProg
DEBUG = -g
CFLAGS = -Wall -Werror $(DEBUG)

all : $(EXEC)
$(EXEC): $(OBJS)
	$(CC) $(OBJS) -o $(EXEC)
q1.o: q1.c q1.h
	$(CC) $(CFLAGS) -c q1.c
q2.o: q2.c q2.h
	$(CC) $(CFLAGS) -c q2.c
q3.o: q3.c q3.h
	$(CC) $(CFLAGS) -c q3.c
main.o: main.c q1.h q2.h q3.h
	$(CC) $(CFLAGS) -c main.c

clean:
	rm -f *.o *.a stringProg