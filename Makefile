EXE=Tetris
OBJECTS=main.o tetris.o
CC=gcc
FLAGS=-I./ -03 -lrt

$(EXE): $(OBJECTS)
		$(CC) $(FLAGS) $(OBJECTS) -o $(EXE)

%.o %.c
		$(CC) $(FLAGS) -c $< -o $@