#include<stdio.h>
int binarySearch(int arr[],int len,int target);

int main()
{
	int arr[7] = {1,3,5,7,9,11,13};
	int index1 = binarySearch(arr,7,7);
	if(index1!=-1){
		printf("找到7了，下标是：%d\n",index1);
	}else printf("7没找到\n");
	
	int index2 = binarySearch(arr,7,4);
	if(index2 = -1){
		printf("4找到了，下标是：%d\n",index2);
	}
	else printf("4没找到\n");
	return 0;
}

int binarySearch(int arr[],int len,int target)
{
	int low = 0;
	int high = len-1;
		while(low<=high){
			int mid = (low + high)/2;
			if(arr[mid]==target){
				return mid;
			}
			else if(arr[mid]>target){
				high = mid -1;
			}else{
				low = mid + 1;
			}
		}
		return -1;
}
// test test 123
