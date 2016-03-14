#include<stdio.h>
#include<stdlib.h>
int PARTITION(int A[100],int p,int q){
    int x,temp=0,j=0,i=0;
    x=A[p];
    i=p;
    for(j=p+1;j<=q;j++){
                        if(A[j]<=x){
                             i=i+1;
                               temp=A[i];
                               A[i]=A[j];
                               A[j]=temp;     
                                    
                                    } }  
                                  temp=A[p];
                               A[p]=A[i];
                               A[i]=temp;     
                                     
                        return i;            
                       
    }
void QUICKSORT(int A[100],int p,int r){ //printf("agegrgt\n"); 
     int q;
     if(p<r){
             q=PARTITION(A,p,r);
            
     QUICKSORT(A,p,q-1);
      QUICKSORT(A,q+1,r); }
   // else return ; 
     }
int main(){
    
    int n=0,i=0,a[100];
    while(1){
             scanf("%d",&n);
             for(i=1;i<=n;i++){
               scanf("%d",&a[i]);               
                              }
                             
                      
                       QUICKSORT(a,1,n) ;  
                       for(i=1;i<n;i++)
                          printf("%d ",a[i]);
                          printf("%d\n",a[n]);
                       //printf("agegrgt\n");  
             }
    return 0;
    }

