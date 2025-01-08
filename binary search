\\binary search
#include<stdio.h>
int main(){
	int n ,num,low,mid,high;
	printf("enter the number of element in array : ");
	scanf("%d",&n);
	int arr[n];
	printf("enetr the elements :\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("The array is :\n");
	for(int i=0;i<n;i++){
		printf("%d   ",arr[i]);
	}
	printf("\n");
	printf("Enter element to serch :  ");
	scanf("%d",&num);
	low=0,high=n-1;
	while(low<=high){
		mid=(low+high)/2;
		if(arr[mid]==num){
			printf("number found at : %d",mid+1);   
			break;
		}
		else if (arr[mid]>num)
		high=mid-1;
		else
		low=mid+1;
	}
	return 0;
	
return 0;	
}
