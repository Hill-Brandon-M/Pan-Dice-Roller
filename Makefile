CC = g++

CCFLAGS = -Wall -g -static -static-libgcc -static-libstdc++ -o

source = ./src
includes = ./src/includes

name = panRoller.exe

all:
	$(CC) $(CCFLAGS) $(name) $(source)/drng.cpp $(includes)/die.h $(includes)/die.cpp
