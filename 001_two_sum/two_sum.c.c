#include<stdio.h>


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            if(nums[i] + nums[j] == target){
                int *arr=malloc(2*sizeof(int));
                arr[0]=i;
                arr[1]=j;

                *returnSize=2;
                return arr;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}

/*
I am supposed to find two numbers whos sum will be equal to the target. Ive brute forced the solution by using a nest for loop
and trying to go through the array elements which will give me the target when added.

the array name is arr, ive allocated 8 bytes of memory using the malloc function in the heap segment(2x8), i am supposed to 
return the indexes of the original array elements that equal to the sum of given target!, so ill be storing the first element
in the arr[0] index and second element in the arr[1] index, and will return the array ive created(arr).
*/