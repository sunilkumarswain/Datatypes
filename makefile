CC = gcc
CFLAGS  = -g -Wall

all: datatype.o dataExercise1.o dataExercise2.o dataExercise3.o dataExercise4.o dataExercise5.o dataExercise6.o dataExercise7.o dataExercise8.o dataExercise9.o dataExercise10.o \
	dataExercise11.o dataExercise12.o dataExercise13.o dataExercise14.o dataExercise15.o

datatype.o: datatype.c datatype.h 
	$(CC) $(CFLAGS) -c datatype.c

dataExercise1.o: dataExercise1.c datatype.h
	$(CC) $(CFLAGS) -c dataExercise1.c 

dataExercise2.o: dataExercise2.c datatype.h 
	$(CC) $(CFLAGS) -c dataExercise2.c

dataExercise3.o: dataExercise3.c datatype.h 
	$(CC) $(CFLAGS) -c dataExercise3.c

dataExercise4.o: dataExercise4.c datatype.h 
	$(CC) $(CFLAGS) -c dataExercise4.c

dataExercise5.o: dataExercise5.c datatype.h
	$(CC) $(CFLAGS) -c dataExercise5.c

dataExercise6.o: dataExercise6.c datatype.h
	$(CC) $(CFLAGS) -c dataExercise6.c

dataExercise7.o: dataExercise7.c datatype.h
	$(CC) $(CFLAGS) -c dataExercise7.c

dataExercise8.o: dataExercise8.c datatype.h
	$(CC) $(CFLAGS) -c dataExercise8.c

dataExercise9.o: dataExercise9.c datatype.h
	$(CC) $(CFLAGS) -c dataExercise9.c

dataExercise10.o: dataExercise10.c datatype.h
	$(CC) $(CFLAGS) -c dataExercise10.c

dataExercis11.o: dataExercise11.c datatype.h
	$(CC) $(CFLAGS) -c dataExercise11.c	

dataExercise12.o: dataExercise12.c datatype.h
	$(CC) $(CLAGS) -c dataExercise12.c

dataExercise13.o: dataExercise13.c datatype.h
	$(CC) $(CFLAGS) -c dataExercise13.c

dataExercise14.o: dataExercise14.c datatype.h
	$(CC) $(CFLAGS) -c dataExercise14.c

dataExercise15.o: dataExercise15.c datatype.h
	$(CC) $(CFLAGS) -c dataExercise15.c

clean:
	$(RM) *.o *~
