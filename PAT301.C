main()
{
	int r,c,sp;
	char ch;
	clrscr();
	ch='A';
	for(r=1;r<=3;r++)
	{
	  for(sp=2;sp>=r;sp--)
	  {
	    printf(" ");
	  }
	  for(c=1;c<=r;c++)
	  {
	    printf("%c",ch);
	  }
	  printf("\n");
	  ch++;
	}
	getch();
}