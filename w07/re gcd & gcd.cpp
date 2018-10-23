#include<stdio.h>

int rgcd(int a,int b){
    if(b%a==0)
        return a;
    else
        return rgcd(b%a,a);
}

int gcd(int a,int b){
    int ans;
    for(int i=1;i<=a;i++){
        if(b%i==0&&a%i==0){
            ans=i;
        }
    }
    return ans;
}

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("rgcd(%d,%d) = %d\n",a,b,rgcd(a,b));
    printf("gcd(%d,%d) = %d\n\n",a,b,gcd(a,b));
}
