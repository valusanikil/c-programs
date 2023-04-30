#include <stdio.h>  
 int main()  
{  
    int n = 5;  
//    printf("Enter the number of rows");  
//    scanf("%d",&n);  
//    for(int i=0;i<n;i++)  
//    {  
//        for(int j=0;j<i;j++)  
//        {  
//            printf("*");  
//        }  
//        printf("\n");  
//    }  
//    for(int i=0;i<n;i++)  
//    {  
//        for(int j=i;j<n;j++)
//        {  
//            printf("*");  
//        }  
//        printf("\n");  
//    } 
    for(int i=0;i<=n;i++)  
    {  
        for(int j=0;j<i;j++)  
        {  
            printf("=");  
        }  
        printf("\n");  
        for(int k =0;k <=i;k++)  
        {  
            printf("*");  
        } 
    }  
      
    return 0;  
}  
