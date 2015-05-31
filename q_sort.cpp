#include <iostream>
using namespace std;

void q_sort(int *arr,int head,int end)
{
    if (head >= end) return;
    int pivot = arr[(head + end) / 2];
    swap(arr[(head + end) / 2],arr[end]);
    int p1 = head, p2 = end-1;
    while (p1 < p2)
    {
        while (arr[p1] < pivot && p1 < p2) p1++;
        while (arr[p2] > pivot && p1 < p2) p2--;
        swap(arr[p1],arr[p2]);
    }
    swap(arr[p2],arr[end]);
    q_sort(arr, head, p1 - 1);
    q_sort(arr, p1 + 1, end);
}


int main(int argc, char const *argv[])
{
    int arr[10] = {4,8,1,2,5,10,9,11,17,20};
    int line;
    scanf("%d",&line);
    q_sort(arr, 0, 9);
    for (int i = 0; i < 10; i++)
        printf("%d ",arr[i]);
    printf("\n");
    return 0;
}
