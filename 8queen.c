#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int a[20];
bool Ok(int x2,int y2){
    for(int i = 1; i < x2 ;i++)
        if(a[i] == y2 || abs(i-x2) == abs(a[i] - y2) )
            return false;
    return true;
}
 
void Xuat(int n){
    for(int i=1;i<=n;i++)
        printf(" %d",a[i]);
    printf("\n");
}
 
void Try(int i,int n){
    for(int j = 1;j<=n;j++){
        // thử đặt quân hậu vào các cột từ 1 đến n
        if(Ok(i,j)){
            //nếu cách đặt này thỏa mãn thì lưu lại vị trí
            a[i] = j;
                        //nếu đặt xong quân hậu thứ n thì xuất ra một kết quả
            if(i==n) Xuat(n);
            Try(i+1,n);
        }
    }
}
 
int main(){
    int n = 6;
    Try(1,n);
    return 0;
}