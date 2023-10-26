
CC = gcc
CFLAGS = -Wall -Werror

SRCS = lab1.c
OBJS = $(SRCS:.c=.o)

TARGET = explode

all: $(TARGET)

$(TARGET): $(OBJS)
    $(CC) $(CFLAGS) -o $@ $^

%.o: %.c
    $(CC) $(CFLAGS) -c $< -o $@

clean:
    rm -f $(OBJS) $(TARGET)