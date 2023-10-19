main()
{
	int r,c;
	clrscr();
	for(r=69;r>=65;r--)
	{
	  for(c=65;c<=r;c++)
	  {
	    printf("%c",c);
	  }
	  printf("\n");
	}
	getch();
}