//
//  main.cpp
//  test
//
//  Created by Scott on 2017/8/21.
//  Copyright © 2017年 Scott. All rights reserved.
//

#include <iostream>

bool duplicate(int numbers[], int length, int *duplication)
{
    int temp;
    
    if(numbers == nullptr || length <= 0)
        return false;
    
    for(int i = 0; i < length; ++i)
    {
        if(numbers[i] < 0 || numbers[i] > length - 1)
            return false;
        
        while(numbers[i] != i)
        {
            if(numbers[i] == numbers[numbers[i]])
            {
                *duplication = numbers[i];
                return true;
            }
            
            temp = numbers[i];
            numbers[i] = numbers[temp];
            numbers[temp] = temp;
        }
    }
    
    return false;
}

int main(int argc, const char * argv[]) {
    
    int data1[] = {0,3,1,1,2};
    void *res = (void*)malloc(sizeof(int));
    bool isduplicate = duplicate(data1, 5, (int*)res);
    if(isduplicate)
        printf("duplicate number is %d", *(int*)res);
    return 0;
}
