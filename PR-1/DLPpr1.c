#include<stdio.h>


void main()
{   int count=0;
    int n;
    scanf("%d",&n);
    char string[n];
   scanf("%s",&string);
    if(n<2)
    {
        printf("Not valid");
    }else if(string[n-1]=='b'&&string[n-2]=='b') {
        for(int i=0;i<n-2;i++)
        {
            if(string[i]!='a')
            {

                printf("Not Valid");
                return 0;
            }
            if(string[i]=='a')
            {
                printf("a");
            }

        }

         printf("Valid");


    }
    else{
        printf("Not valid");
    }
}
