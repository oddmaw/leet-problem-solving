int singleNumber(int* nums, int numsSize) {
    int single = nums[0];
    for(int i = 1; i < numsSize ; i++){
        single = single ^ nums[i];
    }
    return(single);
}