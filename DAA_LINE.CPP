#include<stdio.h>
#include<conio.h>
void main(){
int linear_search(int[100],int);
	int count=0,arr[100],i,n,num,sum;
	clrscr();
	printf("Enter number of input");
	scanf("%d",&n);
	count++;
	for(i=0;i<n;i++){
	count++;
	printf("Enter Element");
	count++;
	scanf("%d",&arr[i]);
	count++;
	}
//	printf("Enter element to search");
  //	scanf("%d",&num);
/*	for(i=0;i<n;i++){
	count++;
	if(arr[i]==num)
	printf("Number is at position %d",i);


	count++;
	} */


	sum= linear_search(arr,n);
	int output=count+sum;
	printf("Number of count is:-%d ",output);

}

int linear_search(int arr[],int n){
	int i,num,count1=0;
		printf("Enter element to search");
	scanf("%d",&num);
	for(i=0;i<n;i++){
	count1++;
	if(arr[i]==num)

	count1++;

	}
	return count1;
}

