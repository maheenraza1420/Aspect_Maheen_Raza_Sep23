 void main()
 {
	int r,sp,s;
	clrscr();
	for(r=1;r<=3;r++)
	{
	  for(sp=2;sp>=r;sp--)
	  {
	    printf(" ");
	  }
	  for(s=1;s<=r;s++)
	  {
	    printf("*");
	  }
	  printf("\n");
	}
	getch();
 }
