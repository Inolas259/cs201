#include<stdio.h>
int main(){
int a[5000]={0},b[5000]={0},c[5000]={0};
 a[0]=0,b[0]=1;
int la=1,lb=1,lc=1;
int n,i,k,j,x,y,carry=0;
printf("Enter the number n for displaying nth fibonacci number\n");
scanf("%d",&n);
if(n==1){
    printf("0");
}
else if(n==2){
    printf("1");
}
else{
for(y=0;y<n-2;y++){
    
    la=lb;lb=lc;
    int l=lb,m=la;
    if(lb>la){
        for(i=la;i>=0;i--){
          a[i+1]=a[i];
        }
        a[0]=0;
    }
   
    

    for(x=lb-1;x>=0;x--){
              int sum=0;
             sum =(a[x]+b[x]+carry);
             if(sum>9){
                 carry=1;
                 c[x]=sum%10;
             }
             if(sum<=9){
                 carry=0;c[x]=sum;
             }
             if(x==0&&carry==1){
                 lc=lb+1;
              for(i=lb;i>=1;i--){
                  c[i]=c[i-1];
              }
              c[0]=1;}
              }carry=0;

              for(j=0;j<lb;j++){
              a[j]=b[j];
              }
              for(k=0;k<lc;k++){
                 b[k]=c[k];
              }

              }
              for(i=0;i<lc;i++){
             printf("%d",c[i]);
             }}
          
          return 0;

          }
