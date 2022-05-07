#include <stdio.h>
int fn(int a,int b){
	int i;
	while(a%b!=0){
		i=a%b;
		a=b;
		b=i;
	}
	return b;
}
int main(){
	int n,i,j,c=0;
	scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(fn(a[i],a[j])==1){
				c++;
			}
		}
	}
	printf("%d",c);
	return 0;
} 
