main()
{
	int r,c;
	char ch='E';
	clrscr();
	for(r=5;r>=1;r--)
	{
	  for(c=1;c<=r;c++)
	  {
	    printf("%c",ch);
	  }
	  printf("\n");
	  ch--;
	}
	getch();
}