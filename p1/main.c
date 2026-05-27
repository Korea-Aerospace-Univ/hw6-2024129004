#include <stdio.h>

int main()
{
    char arr[10]={};
    char *p=nullptr, *q=nullptr;
    
    int count=0, max=0;
    char result;
    
    for (int *p=arr; p<arr+10; p++) scanf("%c", p);
    
    for (int *p=arr; p<arr+10; p++) {
        for (int *q=arr; q<arr+10; q++) {
            if (*p==*q) {
                count++;
            }
        if (count>max) {
            max=count;
            result=*p;
        }
    }
    
    printf("%c %d", result, max);
    
    return 0;
}
