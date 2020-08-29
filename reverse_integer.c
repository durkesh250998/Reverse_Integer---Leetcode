#include<stdio.h>
void reverse(int);
int main(){
            int i;
            scanf("%d\n",&i);
           
            reverse(i);
}
void reverse(int i){
                
                int j,k;
                int n=0,z=0,s=0;
                int a;
                a=i;
                for(j=0;i!=0;j++){
                       
                        i=i/10;
                        n+=1;          
                }
                
                for(k=0;k<n;k++){     
                         
                         z=a%10;
                        
                         a=a/10;
                         
                         s=s*10;
                         s=s+z;
                        
                         
                         
                }
                printf("%d",s);
                
}
