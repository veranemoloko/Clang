#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int majorityElement(int *nums, int numsSize)
{
    qsort(nums, numsSize, sizeof(int), comp); 
    return nums[numsSize / 2];
}

int main()
{
    int nums[] = {2,2,1,1,1,2,2};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    printf("%d\n", majorityElement(nums, numsSize));

    return 0;
}