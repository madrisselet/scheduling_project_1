CC=gcc
CFLAGS=-Wall -Wextra -Werror -pedantic
LDFLAGS=
SOURCES=main.c load_display_data.c
HEADERS=main.h
OBJECTS=$(SOURCES:.c=.o)
NAME=schedule

all: $(SOURCES) $(NAME)
    
$(NAME): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

%.o: %.c $(HEADERS)
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
