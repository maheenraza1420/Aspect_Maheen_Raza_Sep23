int arm();
void main()
{
 int res;
 res=arm();
 if(res==0)
 {
  printf("Armstrong");
 }
 else
 {
   printf("Not Armstrong");
 }
  getch();
}
 int arm()
 {
   int num,sum=0,r,temp;
   clrscr();
   printf("Enter no");
   scanf("%d",&num);
   temp=num;
   for(;num>0;num=num/10)
   {
     r=num%10;
     sum=sum+(r*r*r);
   }
     if(sum==temp)
     {
       return 0;
     }
    else
    {
     return 1;
    }

   }