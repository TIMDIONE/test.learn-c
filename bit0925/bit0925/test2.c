//# define _CRT_SECURE_NO_WARNINGS
//# include <stdio.h>
//# include <stdlib.h>
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 5;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right){
//		int mid = (left + right) / 2;
//		if (arr[mid] > k){
//			right = mid - 1;
//		}
//		else if (arr[mid] < k){
//			left = mid + 1;
//		}
//		else{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left>right){
//		printf("���ź���û�ҵ�\n");
//	}
//	system("pause");
//	return 0;
//
//}