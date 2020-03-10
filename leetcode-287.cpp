/*************************************************************************
	> File Name: leetcode-287.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年03月10日 星期二 15时22分44秒
 ************************************************************************/


 int findDuplicate(int* nums, int numsSize){
    int  p = nums[0], q = nums[0];
    do {
        p = nums[p];
        q = nums[nums[q]];
    } while(p != q);
    int cnt = 0;
    do{
        cnt += 1;
        p = nums[p];
    }while (p != q);
    p = nums[0], q  =nums[0];
    while (cnt--) q = nums[q];
    while(p != q) {
        p = nums[p];
        q = nums[q];
    }
    return p;
}
