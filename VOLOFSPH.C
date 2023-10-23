void sphere();
void main()
{
 sphere();
 getch();
}
void sphere()
{
  int r;
  float vos;
  clrscr();
  printf("Enter vol of sphere");
  scanf("%d",&r);
  vos=4/3*3.14*r*r*r;
  printf("Volume of Sphere %.2f",vos);
}