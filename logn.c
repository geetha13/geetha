#include <stdio.h>
#include <stdlib.h>
void print(int arr[],int size)
{
int i,j;
printf("repeating elements are");
for(i=0;i<size;i++)
for(j=i+1;j<size;j++)
if(arr[i]==arr[j])
print("%d",arr[i])
}
int main()
{
int arr[]={4,2,4,5,6,6,2,1}
int arr_size=sizepf(arr);
print(arr,arr_size);
getch();
return 0;
}
