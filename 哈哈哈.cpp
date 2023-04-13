#include<stdio.h>
int AB(int n){
	int a[105][105],i,j;
	while(scanf("%d",&n)!=EOF){	
	if(n==0) break;
		for(i=0;i<n;i++){
			for(j=0;j<=i;j++){
				if(i==1||j==i) a[i][j]=1;
				else a[i][j]=a[i-1][j]+a[i-1][j-1];
					printf("%d",a[i][j]);
					if(j!=i) printf(" ");
		}
		printf("\n");
		}	
	}
}
int main(){
	int n;
	AB(n);
	return 0;
}
