CC = gcc
CFLAGS = -Wall -Wextra -g

hello: hello.c
	$(CC) $(CFLAGS) -o hello hello.c

clean:
	rm -f hello

.PHONY: clean
