#include <stdio.h>
#include <string.h>

char tracks [] [80] = {
	"Я оставил свое сердце",
	"Ньюйорк Ньюйорк - город, полный чудес",
	"Танц с мужланом",
	"Отсюда и до роддома",
	"Девчонка с острова Иводима",
};

void find_track(char search_for[])
{
	int i;
	for (i = 0; i < 5; i++) {
		if (strstr(tracks[i], search_for))
			printf("Песня номер %i: '%s'\n", i, tracks[i]);
	}
}

int main ()
{
	char search_for[80];
	printf("Искать: ");
	fgets (search_for, 80, stdin);
	search_for[strlen(search_for)-1] = '\0';
	find_track (search_for);
	return 0;
}
