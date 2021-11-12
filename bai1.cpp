#include<stdio.h>
int main(){
	int n;
	printf("so phan tu cua day so: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("nhap vao so thu %d:\n",i);
		scanf("%d",&arr[i]);
	    }
	int sochan=0;
	for(int i=0;i<n;i++){
		if(arr[i]%2==0)
		sochan=arr[i];
		}
	if(sochan==0){
	    printf("khong co so chan nao trong day");
	}else 
	    printf("so chan cuoi cung la:%d",sochan);
}
