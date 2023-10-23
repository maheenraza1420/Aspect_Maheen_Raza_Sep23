void force();
void main()
{
  clrscr();
  force();
  getch();
}
void force()
{
 int mass,acc;
 float force;
 printf("Enter mass and acc");
 scanf("%d%d",&mass,&acc);
 force=mass*acc;
 printf("Force is %f",force);
}