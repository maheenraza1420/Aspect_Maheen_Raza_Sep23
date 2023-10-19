main()
{
	int r,c;
	char ch;
	clrscr();
	for(r=5;r>=1;r--)
	{
	  ch='E';
	  for(c=1;c<=r;c++)
	  {
	    printf("%c",ch);
	    ch--;
	  }
	  printf("\n");
	}
	getch();
}