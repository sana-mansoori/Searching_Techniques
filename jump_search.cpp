#include<stdio.h>
int jumpsearch(int arr[],int n,int key){
	int p=1,i=0,pos;
	while(true){
		if(i>n){
			pos=n-1;
			break;
		}
		else if(arr[i]>=key){
			pos=i;
			break;
		}
		else
		i=2*p++;
	}
	int start=pos/2;
	int flag=0;
	for(int j=start;j<=pos;j++)
	{
		if(arr[j]==key){
			flag=1;
			return j;
		}
	}
	return -1;
}
int main(){
	int n,arr[100],key;
	printf("Enter size of array : ");
	scanf("%d",&n);
	printf("Enter elements of array : ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter key to be found ");
	scanf("%d",&key);
	int index=jumpsearch(arr,n,key);
	if(index==-1)
	{
		printf("Key not found");
	}
	else
	{
		printf("Key found at %d\n",index);
	}
	return 0;
}
