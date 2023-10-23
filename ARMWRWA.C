int arm(int n);
void main()
{
	int num,t,res;
	clrscr();
	printf("Enter any number: ");
	scanf("%d",&num);
	t=num;
	res= arm(num);
	if(t==res)
	{
	  printf("No is Armstrong");
	}
	else
	{
	  printf("No is not Armstrong");
	}
	getch();
}
int arm(int n)
{
	int r,sum=0;
	for(;n>0;n=n/10)
	{
	  r=n%10;
	  sum= sum+(r*r*r);
	}
	return sum;
}