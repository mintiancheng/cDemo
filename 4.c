#include <stdio.h>
int main(){
    int a,b,i,j,c;
    scanf("%d %d",&a,&b);
    c=a*b;
    while(a%b!=0){
        i=a%b;
        a=b;
        b=i;
    }
    printf("%d %d",b,c/b);
    return 0;
}
