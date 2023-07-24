#include<stdio.h>
int main()
{
	
    int i,j,n,r,c,a;
    int k,x,h=0;
    
    // 1 step
    printf("          * * * * *\n");
    printf("          *         *\n");
    printf("          * * * * *\n");
    
    //2 step
    
    for( r = 1; r <= 2; r++)
    {
    	for( k = 1; k <=2; k++)
        {
    	 printf("");
    }
       printf("          *\n");
    }
 
       // 3 step
    for( r = 1; r <= 11; r++)
    {
        for( k = 1; k <=11-r; k++)
        {
            printf(" ");
        }
        printf("*");
        for( c = 2; c <= 2*r-2; c++)
        {
            printf(" ");
        }
        if(r>1) printf("*");
        printf("\n");
    } 
    // Start from 1 and continue till n
    for(i=1;i<=11;i++)
    {
        for(j=1;j<=11;j++)
        {
            // Print the '*' only if it border
            if(i==1||i==11||j==1||j==11)
                printf("* ");  // one Star, one Space
            else
                printf("  ");  // two Spaces
        }
        printf("\n");
    }
    
    return 0;
    
}
 

