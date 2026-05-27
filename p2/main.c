#include <stdio.h>

int main()
{
    int arr1[20]={}, arr2[20]={}; //정수형 배열 arr1, arr2 선언, 초기화.
    int N; // 정수형 변수 N 선언.
    int *p=nullptr, *q=nullptr; // 포인터 변수 p,q 선언, 초기화.
    
    scanf("%d", &N); // 정수 N 입력받음.
    
    for(p=arr1; p<arr1+N; p++) scanf("%d", p); // 포인터 변수 p를 배열 arr1에 연결, arr1에 N개의 정수 입력받음.
    for(q=arr2; q<arr2+N; q++) scanf("%d", q); // 포인터 변수 q에 배열 arr2에 연결, arr2에 N개의 정수 입력받음.
    
    for (p=arr1,q=arr2+N-1; p<arr1+N,q>=arr2; p++,q--) { // 포인터 변수 p가 arr1[0]부터 배열 순서대로, 포인터 변수 q가 arr2[N-1]부터 배열 역순으로 가리키도록 저장해 p는 1씩증가, q는 1씩 감소하도록해 두 배열 원소들을 역방향으로 더함.
        printf(" %d", *p+*q);
    }
    
    
    return 0;
}
