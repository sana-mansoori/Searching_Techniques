#include<stdio.h>
void binary_search(int arr[],int n,int k,int *compcount)
{int i,flag=0,j;
for(i=0;i<n;i++)
	{for(j=0;j<n-1-i;j++)
	if(arr[j]>arr[j+1])
	{int temp=arr[j];
	arr[j]=arr[j+1];
	arr[j+1]=temp;
	}
	}
	printf("the sorted arrays is :");
	for(i=0;i<n;i++){
	printf(" %d",arr[i]);
}
int low=0;
int high=n-1;
int mid=(low+high)/2;
for(i=0;i<n;i++)
{(*compcount)++;
if(arr[i]<mid)
{high=mid-1;
flag=1;
}
else if(arr[i]>mid)
{low=mid+1;
flag=1;
}
else if(arr[i]==mid)
{flag=1;
}
else
{flag=0;
}
}
if(flag==1)
{printf("\nthe no. %d is present in array \n",k);
}
else{
	printf("Key not found");
}
}

int main()
{
	int n,i,k,compcount=0;
	printf("enter the size of array: ");
	scanf("%d",&n);
	int arr[n];
	printf("enter element of array :");
	for(i=0;i<n;i++){
	scanf("%d",&arr[i]);
	}
	printf("enter no. to be searched :");
	scanf("%d",&k);
	binary_search(arr,n,k,&compcount);
	printf("\nTotal number of comparisons : %d",compcount);
	return 0;
}

