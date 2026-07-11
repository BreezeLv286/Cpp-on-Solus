// liêt ke N so fibonacci dau tien

# include <stdio.h>
void infibonacci(int n)
{

   int f0=0, f1=1, fn;
    if (n<=0) 
	{

	return;

    }

printf("%d", f0);
if (n==1) return;

printf(" %d", f1);
for( int i=2; i<n; i++)
    {
	fn=f0+f1;
	printf(" %d", fn);
	f0=f1;
	f1=fn;
	
    }
    f0=f1;
    f1=fn;
}


int main()
{
	int n;
	scanf("%d", &n);
	if (n>30);
	{
		printf("n khong duoc lon hon 30\n");
	}
		infibonacci(n);
		return 0;
		
	
}
