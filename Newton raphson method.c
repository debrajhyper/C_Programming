#include<stdio.h>
#include<math.h>
#define f(x) x*x*x-5*x-7
#define g(x) 3*x*x-5
#define e 0.0001
void main()
{
	float x0,x1,f0,g0,root;
	int i=1;
	printf("Using Newton Raphson method to find root of equation x^3-5x-7=0\n");
	printf("Enter values of x0\n");
	a:printf("x0: ");
	scanf("%f",&x0);
	printf("steps\tx0\tx1\tf0\tg0\n");
	b:f0=f(x0);
	g0=g(x0);
	x1=x0-(f0/g0);
	printf("%d\t%.4f\t%.4f\t%.4f\t%.4f\n",i,x0,x1,f0,g0);
	i++;
	if(fabs((x1-x0)/x1)<=e)
	{
		root=x1;
		printf("The root is %.4f",root);
		goto c;
	}
	else
	{
		x0=x1;
		goto b;
	}
	c:
	return 0;

}
