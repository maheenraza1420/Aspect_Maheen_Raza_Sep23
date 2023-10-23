void main()
{
	int arr[]={22,55,33,1};
	int i,j,temp,k;
	clrscr();
      /* Bubble Sort
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
      */
     /*Selection sort
      for(i=0;i<3;i++)
      {
	 for(j=i+1;j<4;j++)
	 {
	    if(arr[i]>arr[j])
	    {
	     temp=arr[i];
	     arr[i]=arr[j];
	     arr[j]=temp;
	    }
	 }

      }
      */
      for(k=1;k<=3;k++)
      {
	for(j=k;j>=1;j--)
	{
	    if(arr[j]<arr[j-1])
	    {
		temp=arr[j];
		arr[j]=arr[j-1];
		arr[j-1]=temp;
	    }
	}
      }
	for(j=0;j<4;j++)
	{
		printf("\n%d ",arr[j]);
	}
}