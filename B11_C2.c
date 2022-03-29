#include <stdio.h>
int main (){
	int n;
	printf("nhap n : ");
	scanf("%d",&n);
    if (n>10){
        printf("Nhap so nho hon 10 cho nhanh");
        return 0;
    }
	int a[n];
	for(int i=0;i<n;i++){
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	}
	int min=a[0];
	int max=a[0];
	for(int i=0;i<n;i++){
		if (max<a[i]){
			max=a[i];
		}
	}
	for(int i=0;i<n;i++){
		if (min>a[i]){
			min=a[i];
		}
	}
	printf("max : %d ",max);
	printf("min : %d ",min);
	int result=max-min;
	printf("\n %d\n",result);
}