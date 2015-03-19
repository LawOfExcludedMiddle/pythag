#include <stdio.h>
#include <math.h>

char *rs(size_t length);

int count = 1;

int fa;
int fb;
int fc;

int a1[3] = {1,-2,2};
int a2[3] = {2,-1,2};
int a3[3] = {2,-2,3};

int b1[3] = {1,2,2};
int b2[3] = {2,1,2};
int b3[3] = {2,2,3};

int c1[3] = {-1,2,2};
int c2[3] = {-2,1,2};
int c3[3] = {-2,2,3};

int current[100000000];

int count1 = 1;
int count2 = 2;
int count3 = 3;

int data = 3;

int ax;
int ay;
int az;

int bx;
int by;
int bz;

int cx;
int cy;
int cz;

int p;

int x = 3;
int y = 4;
int z = 5;

int counter = 1;

int num;
int l;

int main()
{
	printf("Primitive Pythagorean Triple Tree-Style Generator Version 1\n");
	printf("------------------------------------------------\n");
	printf("Copyright (C) 2015, Christo Keller\n\n");	

	FILE *f = fopen("triples.txt", "w");
	fprintf(f,"Primitive Pythagorean Triple Tree-Style Generator Version 1\n");
	fprintf(f,"------------------------------------------------\n");
	fprintf(f,"Copyright (C) 2015, Christo Keller\n\n");	

	printf("First A Value: ");
	scanf("%d", &fa);
	current[1] = fa;
	fprintf(f, "First A Value: %d\n", fa);

	printf("First B Value: ");
	scanf("%d", &fb);
	current[2] = fb;
	fprintf(f, "First B Value: %d\n", fb);

	printf("First C Value: ");
	scanf("%d", &fc);
	current[3] = fc;
	fprintf(f, "First C Value: %d\n", fc);

	printf("Number of Triples to Generate: ");
	scanf("%d", &num);
	fprintf(f, "Number of Triples to Generate: %d\n\n", num);

	// ---

	for(l=1; l<=num/3; l++)
	{
		x = current[count1];
		y = current[count2];
		z = current[count3];
		
		p = data+1;		
	
		ax = (a1[0]*x)+(a1[1]*y)+(a1[2]*z);
		ay = (a2[0]*x)+(a2[1]*y)+(a2[2]*z);
		az = (a3[0]*x)+(a3[1]*y)+(a3[2]*z);

		bx = (b1[0]*x)+(b1[1]*y)+(b1[2]*z);
		by = (b2[0]*x)+(b2[1]*y)+(b2[2]*z);
		bz = (b3[0]*x)+(b3[1]*y)+(b3[2]*z);

		cx = (c1[0]*x)+(c1[1]*y)+(c1[2]*z);
		cy = (c2[0]*x)+(c2[1]*y)+(c2[2]*z);
		cz = (c3[0]*x)+(c3[1]*y)+(c3[2]*z);

		current[p] = ax;
		current[p+1] = ay;
		current[p+2] = az;

		current[p+3] = bx;
		current[p+4] = by;
		current[p+5] = bz;

		current[p+6] = cx;
		current[p+7] = cy;		
		current[p+8] = cz;
		
		count1 = count1+3;
		count2 = count2+3;
		count3 = count3+3;
		
		data = data+9;

		printf("%d:   A=%d, B=%d, C=%d\n", counter, x, ay, az);
		fprintf(f, "%d:   A=%d, B=%d, C=%d\n", counter, x, ay, az);
		counter++;

		printf("%d:   A=%d, B=%d, C=%d\n", counter, bx, by, bz);
		fprintf(f, "%d:   A=%d, B=%d, C=%d\n", counter, bx, by, bz);
		counter++;		

		printf("%d:   A=%d, B=%d, C=%d\n", counter, cx, cy, cz);
		fprintf(f,"%d:   A=%d, B=%d, C=%d\n", counter, cx, cy, cz);
		counter++;
	}
	printf("Finished!");
	fprintf(f,"Finished!");
	fclose(f);
}


