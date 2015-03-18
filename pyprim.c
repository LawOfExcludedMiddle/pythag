#include <stdio.h>
#include <math.h>

int count = 1;
int used[214748364];
int s;
int t;

int amin;
int amax;

int bmin;
int bmax;

int cmin;
int cmax;

bool isPrimitive(int x, int y, int z);
int euclid(int n, int p);
int myPow(int f, int g);

int main()
{
	printf("Primitive Pythagorean Triple Generator Version 2\n");
	printf("------------------------------------------------\n");
	printf("Copyright (C) 2015, Christo Keller\n\n");

	printf("Minimum A Value: ");
	scanf("%d", &amin);

	printf("Maximum A Value: ");
	scanf("%d", &amax);

	printf("Minimum B Value: ");
	scanf("%d", &bmin);

	printf("Maximum B Value: ");
	scanf("%d", &bmax);

	printf("Minimum C Value: ");
	scanf("%d", &cmin);

	printf("Maximum C Value: ");
	scanf("%d", &cmax);

	// ---

	for(int a = amin; a < amax; a++)
	{
		for(int b = bmin; b < bmax; b++)
		{
			for(int c = cmin; c < cmax; c++)
			{
				int pa = a*a;
				int pb = b*b;
				int pc = c*c;

				if((pa+pb)==pc)
				{
					if(isPrimitive(a, b, c))
					{
						if(t != 1)
						{
							int power = log10(b);
							s = a*myPow(10,power+1)+b;
							power = log10(a);
							t = b*myPow(10,power+1)+a;
							
							if(used[s]!=1&&used[t]!=1)
							{
								if(count<10){printf("00%d:   A=%d, B=%d, C=%d\n", count, a, b, c);}
								else if(count>=100){printf("%d: A=%d, B=%d, C=%d\n", count, a, b, c);}
								else{printf("0%d:   A=%d, B=%d, C=%d\n", count, a, b, c);}
								used[s]=1;
								used[t]=1;
								count++;
							}
						}
					}
				}
			}
		}
	}
}

bool isPrimitive(int x, int y, int z)
{
	if(euclid(x, y)==1&&euclid(x,z)==1&&euclid(y,z)==1)
	{
		return true;
	}
}

int euclid(int n, int p)
{
	a:
	
	if(p==0)
	{
		return n;
	}

	if(n>p)
	{
		n=n-p;
		goto a;
	}
	else
	{
		p=p-n;
		goto a;
	}	
}

int myPow(int f, int g)
{
     if (g == 0) return 1;
     if (g == 1) return f;

     int tmp = myPow(f, g/2);
     if (g%2 == 0) return tmp * tmp;
     else return f * tmp * tmp;
}
