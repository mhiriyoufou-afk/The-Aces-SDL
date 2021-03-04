Aces:load.o main.o 
	gcc load.o main.o -o Aces -lSDL -lSDL_image -lSDL_ttf -lSDL_mixer
main.o:main.c 
	gcc -c main.c 
load.o:load.c 
	gcc -c load.c 
