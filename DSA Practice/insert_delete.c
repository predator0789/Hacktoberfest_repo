#include <stdio.h>
int main()
{
    int i,n,pos1,pos2,val1;
	printf("Enter the number of elements in the array:-\n");
	scanf("%d",&n);
	int arr[n+2];
	printf("Enter the elements of the array:-\n");
	for(i=0;i<n;i++)
	{
	    scanf("%d",&arr[i]);
	}
	printf("Enter the position where the element is to be inserted:-\n");
	scanf("%d",&pos1);
	printf("Enter the element which is to be inserted:-\n");
	scanf("%d",&val1);
	if(pos1>=0&&pos1<=n)
	{
	    for(i=n;i>pos1;i--)
	    {
	        arr[i]=arr[i-1];
	    }
	    arr[pos1]=val1;
	}
	else
	{
	    printf("Please enter valid position\n");
	}
	printf("The elements of the array after insertion:-\n");
	for(i=0;i<=n;i++)
	{
	    printf("%d ",arr[i]);
	}
	printf("\nEnter the position of the element to be deleted:-\n");
	scanf("%d",&pos2);
	if(pos2>=0&&pos2<=n)
	{
	    for(i=pos2;i<=n;i++)
	    {
	        arr[i]=arr[i+1];
	    }
	}
	else
	{
	    printf("Please enter valid position\n");
	}
	printf("The elements of the array after deletion:-\n");
	for(i=0;i<n;i++)
	{
	    printf("%d ",arr[i]);
	}
	return 0;
}