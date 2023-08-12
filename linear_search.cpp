#include<stdio.h>

int linearsearch(int arr[],int n,int key,int *compcount){
	int i;
	for(int i=0;i<n;i++){
		(*compcount)++;
		if(arr[i]==key){
			return i;
		}
	}
	return -1;
}
int main(){
	int n,arr[100],key,compcount=0;
	printf("Enter size of array : ");
	scanf("%d",&n);
	printf("Enter elements of array : ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter key to be found ");
	scanf("%d",&key);
	int index=linearsearch(arr,n,key,&compcount);
	if(index==-1)
	{
		printf("Key not found");
	}
	else
	{
		printf("Key found at %d\n",index);
	}
	printf("\nTotal number of comparisons : %d",compcount);
	return 0;
}
