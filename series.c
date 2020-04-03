/*series*/

#include<stdio.h>
#include<math.h>

int main()
{
    printf("1)Fibonacci\n>>1,1,2,3,5,...\n\n2)Factorial Series\n>>1!,2!,3!,...\n\n3)(1*1),(2*2),(3*3),...\\n4)1,5,6,8,11,11,16,14,...\\n(5)Sum of:\t1+2^1+2^2+2^3+...+2^n\n");
    printf("Type the number for the particular series.");
    int j,term;
    scanf("%d",&j);
    int a,b,c[5];
    switch (j)
    {
    case 1:
        printf("For:%d\n",j);
        printf("Enter the number of terms.")
        scanf("%d\n",&term);
        a[0],b[0]=1;
        
        printf("Series is %d,%d,",&a[0],b[0]);
        for (int i = 0; i <= term; i++)
        {
            c[0]=a[0]+b[0];
            printf("%d,",c[0]);
            a[0]=b[0];
            b[0]=c[0];
            printf("%d,%d,%d",c[0],a[0],b[0],);
        }
        break;

    case 2:
        printf("For:%d\n",j);
        printf("Enter the number of terms.")
        scanf("%d\n",&term);
        printf("Series is\t");
        for (int i = 0; i <= term; i++)
        {
            c[1]=1;
            int n = i;
            for (j = 0; j <=n; ++j)
            {
                c[1] *= j;
            }
            printf("%d,"&c[1]);
        }
        break;

    case 3:
        printf("For:%d\n",j);
        printf("Enter the number of terms.")
        scanf("%d\n",&term);
        printf("Series is\t")
        for (int i = 0; i <= term; i++)
        {
           a[1] = i;
           
           printf("(%d*%d),"a[1],a[1]);
        }
        
        
        break;

    case 4:
        printf("For:%d\n",j);
        printf("Enter the number of terms.")
        scanf("%d\n",&term);
        a[2] = 1;
        b[2] = 5;
        printf("Series is\t %d,%d,",&a[2],b[2]);
        for (int i = 1; i <= term; i++)
        {
           
           c[2] = c[2] + i;
           printf("%d,",&c[2]);
        }
        
        break;

    case 5:
        printf("For:%d\n",j);
        printf("Enter the number of terms.")
        scanf("%d\n",&term);
        
        printf("Series is\t %d,%d,",&a[2],b[2]);
        for (int i = 1; i <= term; i++)
        {
           a[3]=1;
           b[3]=pow(2,i);
           b[3]+=b[3];
           c[3]=a[1]+b[3];

          
        }
        printf("Sum of the series is: %d",c[3]);
        break;        
    default:
        printf("Invalid Entry,Enter any number from 1 to 5.")
        break;
    }
    return 0;
}
