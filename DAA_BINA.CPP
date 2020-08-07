#include<stdio.h>
#include<conio.h>
void main(){
		int binary_search(int[],int,int,int) ;
	int arr[100],i,start=0,end,mid,flag=0,count=0,searching_number,elemnt_number,count1;
		clrscr();
		printf("\n Enter number of Elements");
		scanf("%d",&elemnt_number);
		count++;
		printf("\nEnter elements in array");
		for(i=0;i<elemnt_number;i++){
			scanf("%d",&arr[i]);
		}
		printf("\n Enter element to search");
		scanf("%d",&searching_number);

		    /*	for(i=0;i<elemnt_number;i++){

				mid=(start+(end-1))/2;

				count++;
				if(arr[mid]==searching_number){
					flag=1;
					break;
				}
				else if(arr[mid] > searching_number){
					end=mid-1;
				}
				else
					start=mid+1;


		}


		       if(flag==1)

			printf("%d",mid);

       //	count++;*/
	count1=binary_search(arr,start,end,searching_number);
	int output=count1+count;
       printf("%d",output);
}
int binary_search(int arr[],int start,int end,int searching_number){
	int count1=0;
       int mid=(start+(end-1))/2;
	if(arr[mid]==searching_number){

		count1++;
	       //	return mid;
	}
	else if(arr[mid]>searching_number){
		binary_search(arr,start,mid-1,searching_number);
		count1++;

	}
	else {
	binary_search(arr,mid+1,end,searching_number);
	count1++;
	}
	return count1;
}


