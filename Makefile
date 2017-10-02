CC=gcc
FLAGS = -W -Wall

session4:session4.c
	$(CC) $(FLAGS) $^ -o $@
