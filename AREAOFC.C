void circle();
void main()
{
 circle();
 getch();
}
void circle()
{
 int r;
 float aoc;
 clrscr();
 printf("Enter radius");
 scanf("%d",&r);
 aoc=3.14*r*r;
 printf("%f Radius is",aoc);
}
