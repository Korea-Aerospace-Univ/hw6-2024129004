#include <stdio.h>

int main()
{
    char arr[11]={};
    char *p, *q;
    
    int count, max=0;
    char result;
    
    scanf("%s", arr);

    for (p=arr; p<arr+10; p++) {
        count=0;
        for (q=arr; q<arr+10; q++) {
            if (*p==*q) {
                count++;
            }
        }
        if (count>max) {
            max=count;
            result=*p;
        }
    }
    
    printf("%c %d", result, max);
    
    return 0;
}
