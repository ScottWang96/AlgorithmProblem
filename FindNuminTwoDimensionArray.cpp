//
//  main.cpp
//  test
//
//  Created by Scott on 2017/9/13.
//  Copyright © 2017年 Scott. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

bool Find(int *matrix, int rows, int columns, int number)
{
    
    if(matrix == nullptr || rows <= 0 || columns <= 0)
        return false;
    
    int currow = 0;
    int curcolumn = columns - 1;
    
    while(currow < rows && curcolumn >= 0)
    {
        if(matrix[currow * columns + curcolumn] == number)
            return true;
        else if (matrix[currow * columns + curcolumn] < number)
            currow++;
        else
            curcolumn--;
    }
    return false;
}


int main(int argc, const char * argv[]) {
    int array[16] = {1,2,8,9,2,4,9,12,4,7,10,13,6,8,11,15};
    int rows = 4;
    int columns = 4;
    int target = 7;
    bool flag = Find(array, rows, columns, target);
    return 0;
}
