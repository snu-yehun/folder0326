CC = g++
CFLAGS = -c -g
LDFLAGS = 
OBJECTS = EX01.o EX02.o EX03.o EX04.o EX05.o EX06.o EX07.o EX08.o 

all : program

program : $(OBJECTS)
	$(CC) $(LDFLAGS) -o EX01 EX01.o 
	$(CC) $(LDFLAGS) -o EX02 EX02.o 
	$(CC) $(LDFLAGS) -o EX03 EX03.o 
	$(CC) $(LDFLAGS) -o EX04 EX04.o 
	$(CC) $(LDFLAGS) -o EX05 EX05.o 
	$(CC) $(LDFLAGS) -o EX06 EX06.o 
	$(CC) $(LDFLAGS) -o EX07 EX07.o 
	$(CC) $(LDFLAGS) -o EX08 EX08.o 

EX08.o : EX08.cpp
	$(CC) $(CFLAGS) EX08.cpp

EX07.o : EX07.cpp
	$(CC) $(CFLAGS) EX07.cpp

EX06.o : EX06.cpp
	$(CC) $(CFLAGS) EX06.cpp

EX05.o : EX05.cpp
	$(CC) $(CFLAGS) EX05.cpp

EX04.o : EX04.cpp
	$(CC) $(CFLAGS) EX04.cpp

EX03.o : EX03.cpp
	$(CC) $(CFLAGS) EX03.cpp

EX02.o : EX02.cpp
	$(CC) $(CFLAGS) EX02.cpp

EX01.o : EX01.cpp
	$(CC) $(CFLAGS) EX01.cpp

clean :
	del $(OBJECTS) *.exe
