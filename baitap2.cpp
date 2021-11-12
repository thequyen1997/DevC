#include <stdio.h>
float average(int s[],int n){
	float sum =0.0,avg;
	for(int i=0;i<n;i++){
		sum+=s[i];
		
	}
	avg=sum/n;
	return avg;
}
int main(){
	int n;
	printf("Moi nhap chieu dai so nguyen:");
	scanf("%d",&n);
	int s[n];
	for(int i=0;i<n;i++){
		printf("Moi nhap vi tri thu %d:",i);
		scanf("%d",&s[i]);
	}
	printf("Trung binh: %.2f",average(s,n));
	
}
