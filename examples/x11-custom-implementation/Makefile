CFLAGS=-g -Wall -Werror -std=c++11 -DSOGL_MAJOR_VERSION=4 -DSOGL_MINOR_VERSION=5
CC=g++
LDLIBS=-lX11 -ldl -lGL

all:
	$(CC) $(CFLAGS) -o x11-custom-implementation x11-custom-implementation.cc $(LDLIBS)
