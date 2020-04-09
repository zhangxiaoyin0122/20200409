//常用模型
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
////二分查找
//int BinarySearch(int* str, int left,int right,int value) {
//	/*int left = 0;
//	int right = sizeof(str)/sizeof(str[0]) - 1;*/
//	int mid = 0;
//	while (left <= right) {
//		mid = (left + right) / 2;
//		if (str[mid] > value) {
//			right = mid - 1;
//		}
//		else if (str[mid] < value) {
//			left = mid + 1;
//		}
//		else {
//			return mid;
//		}
//	}
//	return -1;
//}
//int main() {
//	int str[] = { 1,2,3,4,5,6,7,9 };
//	int left = 0;
//	int right = sizeof(str) / sizeof(str[0]) - 1;
//	int ret = BinarySearch(str,left,right, 7);
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}

//冒泡排序
#include <stdio.h>
#include <stdlib.h>
void BubbleSort(int* arr, int size) {
	for (int bound = 0; bound < size; bound++) {
		for (int cur = size - 1; cur > bound; cur--) {
			if (arr[cur] < arr[cur - 1]) {
				int tmp;
				tmp = arr[cur];
				arr[cur] = arr[cur - 1];
				arr[cur - 1] = tmp;
			}
		}
	}
}
int main() {
	int arr[] = { 9,8,7,6,5,4,3,2,1 };
	int size = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, size);
	for (int i = 0; i < size; i++) {
		printf("%2d", arr[i]);

	}
	printf("\n");
	system("pause");
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main() {

	system("pause");
	return 0;
}