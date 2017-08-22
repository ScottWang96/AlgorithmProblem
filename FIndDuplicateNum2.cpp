//
//  main.cpp
//  test
//
//  Created by Scott on 2017/8/21.
//  Copyright © 2017年 Scott. All rights reserved.
//

#include <iostream>

int countRange(const int* numbers, int length, int start, int end)
{
 
    if(numbers == nullptr)
        return 0;
    
    int count = 0;
    
    for(int i = 0; i < length; i++)
    {
        if(numbers[i] >= start && numbers[i] <= end)
            ++count;
    }
    return count;
}

int getduplication(const int* numbers, int length)
{
    if(numbers == nullptr || length <= 0)
        return -1;
    
    int start = 1;
    int end = length - 1;
    
    while(start <= end)
    {
        int mid = (end + start) / 2;
        int count = countRange(numbers, length, start, mid);
        
        if(end == start)
        {
            if(count > 1)
                return start;
            else
                break;
        }
        
        if(count > (mid - start + 1))
            end = mid;
        else
            start = mid + 1;
    }
    return -1;
}

int main(int argc, const char * argv[]) {
    
    int data1[] = {1,2,3,4,1};
    int duplicateNum = getduplication(data1, 5);
    printf("duplicate number is %d", duplicateNum);
    return 0;
}
