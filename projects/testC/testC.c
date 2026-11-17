// hello.c
#include <conio.h>
#include <stdio.h>

char standart[2][10] = {"yo", "man"};

int main(void) {
    printf("%s\n", standart[1]);
	_getch();
    return 0;
}