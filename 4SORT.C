main()
{
int a,b,c,d,e;
clrscr();
printf("Enter 4 no:");
scanf("%d%d%d%d",&a,&b,&c,&d);
if(a>b)
{ e=a;
  a=b;
  b=e;
}
if(b>c)
{ e=b;
  b=c;
  c=e;
}
if(c>d)
{e=c;
 c=d;
 d=e;
}

  if(a>b)
{ e=a;
  a=b;
  b=e;
}
if(b>c)
{ e=b;
  b=c;
  c=e;
}
if(c>d)
{
 e=c;
 c=d;
 d=e;
}
 if(a>b)
{ e=a;
  a=b;
  b=e;
}
if(b>c)
{ e=b;
  b=c;
  c=e;
}
if(c>d)
{e=c;
 c=d;
 d=e;
}
 printf("Sorted elements are:%d %d %d %d",a,b,c,d);
 getch();
 }



