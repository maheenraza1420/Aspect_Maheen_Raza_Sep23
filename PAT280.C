void main()
{
	int r,c;
	char ch='A';
	clrscr();
	for(r=1;r<=3;r++)
	{
	  for(c=1;c<=5;c++)
	  {
	    if(c==1)
	    {
	    printf("%c",ch);
	    }
	    else
	    {
	      printf("%c",ch+32);
	    }
	  }
	  printf("\n");
	  ch++;
	}
	getch();
}
