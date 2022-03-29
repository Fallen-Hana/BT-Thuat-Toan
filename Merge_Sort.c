#include<stdlib.h>
#include<stdio.h>
void merge(int arr[], int l, int m, int r) //gộp hai mảng con arr[l...m] và arr[m+1..r]
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
    int L[n1], R[n2];
	// copy dữ liệu sang các mảng tạm
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2) // tiến hành gộp mảng
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) // nếu mảng l còn thì coppy vào arr
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)// tương tự cái trên 
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int l, int r) // l là số trái, r là số phải 
{
    if (l < r)
    {
        int m = l+(r-l)/2; // tránh tràn số ra khi l và r lớn 
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r); 
        merge(arr, l, m, r);
    }
}
void xuatmang(int arr[], int size){
	int i;
    for (i=0; i < size; i++){
    	printf("%d",arr[i]);
    	printf("\t");
      }
}
int main (){
	int n ;
	printf("\n nhap phan tu mang \n");
	scanf("%d",&n);
	int a[n];
	for(int i =0 ;i<n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("\n mang chua sap xep la \n ");
	xuatmang(a,n);
	mergeSort(a,0,n);
	printf("\n mang sau khi sap xep la \n ");
	xuatmang(a,n);
}