NAME = levenshtein

CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = src/main.c src/levenshtein.c src/print_matrix.c

all: bin/MacOS/$(NAME) bin/Windows/$(NAME).exe

bin/MacOS/$(NAME): $(SRC) bin/MacOS
	$(CC) $(CFLAGS) $(SRC) -o bin/MacOS/$(NAME)

bin/Windows/$(NAME).exe: $(SRC) bin/Windows
	$(CC) $(CFLAGS) $(SRC) -o bin/Windows/$(NAME).exe

bin/MacOS:
	mkdir -p bin/MacOS

bin/Windows:
	mkdir -p bin/Windows

clean:
	rm -rf bin

re: clean all

.PHONY: all clean re