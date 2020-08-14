#include<stdio.h>
#include<conio.h>

void main(){
	void input(int[],int);
	int insertion_sort (int [],int);
	 int n,i,count,arr[100];
	 clrscr();

	printf("\nEnter the number of element you want to enter");
	 scanf("%d",&n);
	count++;

    printf("\n Enter element in array:-\n");
	for(i=0;i<n;i++){
	count++;
	scanf("%d",&arr[i]);

	}


  int count1=insertion_sort (arr,n);
int sum=count+count1;
printf ("\n The Counting value is :- %d",sum);
}






  int insertion_sort(int arr[],int n){
	int j,key,i,count=1;

	for(j=1;j<n;j++){
	 count++;


  key=arr[j];


   i=j-1;


	while(i>=0 && arr[i]>key){
		count++;
		 arr[i+1]=arr[i];

	 i=i-1;
	 }
	 arr[i+1]=key;
	  count++;
	  }
	  printf("\n The sorted Array is");
		for(i=0;i<n;i++){
			printf("%d",arr[i]);


		}

	return count;



}



