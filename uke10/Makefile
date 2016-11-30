CC = gcc
CFLAGS = -Wall -Wextra -std=c11
DEPS = hellomake.h
OBJS = hellomake.o hellofunc.o

all: hellomake

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

hellomake: $(OBJS)
	$(CC) -o hellomake $(OBJS) $(CFLAGS)

clean:
	rm -f hellomake *.o

remake: clean hellomake