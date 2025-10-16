#include <stdio.h>
#include <stdlib.h>
int GCD(int a,int b){
    if(b==0) return a;
    return GCD(b,a%b);
}
int main(){
    int a,b;
    printf("\n read values for a and b: ");
    scanf("%d%d",&a,&b);
    printf("\n GCD of %d %d is %d\n",a,b,GCD(a,b));
    return 0;
}

