CC = cc
SRC = *.c
Name = my_printf

all:
	$(CC) -o $(Name)  $(SRC) -lm

clean:
	rm -f $(Name) *~ 