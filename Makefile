Aces:First_Page.o Second_Page.o main.o 
	gcc First_Page.o Second_Page.o main.o -o Aces -lSDL -lSDL_image -lSDL_ttf -lSDL_mixer
main.o:main.c 
	gcc -c main.c 
Second_Page.o:Second_Page.c
	gcc -c Second_Page.c
First_Page.o:First_Page.c 
	gcc -c First_Page.c 
