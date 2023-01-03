build = $(wildcard build/*.o)

.PHONY: main

main: game.o load.o main.o moving.o user.o time.o
	gcc $(build) -o bin/main -lev -lm

game.o:
	gcc -c src/game.c -o build/game.o
load.o:
	gcc -c src/load.c -o build/load.o
main.o:
	gcc -c src/main.c -o build/main.o
moving.o:
	gcc -c src/moving.c -o build/moving.o
user.o:
	gcc -c src/user.c -o build/user.o
time.o:
	gcc -c src/timer.c -o build/timer.o