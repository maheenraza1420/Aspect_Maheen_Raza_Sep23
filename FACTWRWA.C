int fact();
void main()
{
  int res,num;
  clrscr();
  printf("Enter no");
  scanf("%d",&num);
  res=fact(num);
  printf("Fact is %d",res);
  getch();
}
int fact(int a)
{
 int i,r=1;
 clrscr();

 for(i=1;i<=a;i++)
 {
     r=r*i;

 }
 return r;
}