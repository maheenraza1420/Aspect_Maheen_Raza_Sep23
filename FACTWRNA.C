int fact();
void main()
{
  int res;
  res=fact();
  printf("Fact is %d",res);
  getch();
}
int fact()
{
 int num,i,r=1;
 clrscr();
 printf("Enter no");
 scanf("%d",&num);
 for(i=1;i<=num;i++)
 {
     r=r*i;

 }
 return r;
}