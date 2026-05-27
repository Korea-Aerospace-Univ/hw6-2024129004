#include <stdio.h>

int main()
{
    int arr1[20]={}, arr2[20]={}; //정수형 배열 arr1, arr2 선언, 초기화.
    int N;
    int *p=nullptr, *q=nullptr; // 포인터 변수 p,q 선언, 초기화.
    
    scanf("%d", &N); // 정수 N 입력받음.
    
    for(p=arr1; p<arr1+N; p++) scanf("%d", p); // 포인터 변수 p에 배열 arr1 가리키도록 저장.
    for(q=arr2; q<arr2+N; q++) scanf("%d", q); // 포인터 변수 q에 배열 arr2 가리키도록 저장.
    
    for (p=arr1,q=arr2+N-1; p<arr1+N,q>=arr2; p++,q--) { // 
        printf(" %d", *p+*q);
    }
    
    
    return 0;
}
