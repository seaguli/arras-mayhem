# Makefile for COMP30023 Computer Systems - Assignment 1
# Made by Emmanuel Macario <macarioe@student.unimelb.edu.au>

CC     = gcc
CFLAGS = -Wall -pthread -g
OBJ    = server.o
EXE    = server

# Rule for compilation of the main program
$(EXE): $(OBJ)
	$(CC) $(CFLAGS) -o $(EXE) $(OBJ)

# Object file dependencies
server.o: server.h

# Remove executables and object files
clean:
	rm -f $(OBJ) $(EXE)
