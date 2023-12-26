#include <stdio.h>

int main()
{
	FILE *file1 = fopen("divide2.txt", "w");
	FILE *file2 = fopen("divide3.txt", "w");
	FILE *file3 = fopen("divide7.txt", "w");
	int i = 0;
	while(i < 100){
		if (i % 2 == 0){
			fprintf(file1, "%d, ", i);
		}
		if (i % 3 == 0){
                        fprintf(file2, "%d, ", i);
                }
		if (i % 7 == 0){
                        fprintf(file3, "%d, ", i);
                }
		i++;
	}
	fclose(file1);
	fclose(file2);
	fclose(file3);
return 0;
}
