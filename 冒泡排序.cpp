#include<stdio.h>

void sequence(int *a,int n){
	int i,t;
	for (i=0;i<n-1;i++) {
//		if (a[i]>a[i+1]){
//			t=a[i];
//			a[i]=a[i+1];
//			a[i+1]=t;
//			printf("%d ",i);
//		}
      	if (*(a+i)>*(a+i+1)){
			t=*(a+i);
			*(a+i)=*(a+i+1);
			*(a+i+1)=t;
			printf("%d ",i);
		}
		if (i==(n-2)) {
			printf("%d\n",n);
		}
	}
	if (n>1) {
		sequence(a,(n-1));
	}	
    
}

int main() {
	int number[100],i=0,count=0;
	
	scanf("%d",&count);
	for (i=0;i<count;i++) {
		scanf("%d",&number[i]);
	}
	
	sequence(number,count);
	
	for (i=0;i<count;i++) {
		printf("%d ",number[i]);
	}
	
	return 0;
}