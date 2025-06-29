# GBA Emulator Makefile
# TODO: Add build configuration 

CC = gcc
CFLAGS = -Iinclude -Wall -Wextra
LDFLAGS = -lSDL2

SRC = src/main.c src/cpu.c src/mem.c src/video.c
OBJ = $(SRC:.c=.o)

gba_emu: $(OBJ)
	$(CC) -o $@ $^ $(LDFLAGS)

clean:
	rm -f $(OBJ) gba_emu