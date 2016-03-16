//
//  test2.h
//  StaticTest
//
//  Created by zhouwude on 16/2/25.
//  Copyright © 2016年 zhouwude. All rights reserved.
//

#ifndef test2_h
#define test2_h

#include <stdio.h>
//在不同类里面会产生冲突
static char a = 'b'; // global variable //在在 该文件中使用 加入static修饰之后，变量已经不再存储在栈中，而是和全局变量一起存储 同时，离开定义它的函数后不能使用，但如再次调用定义它的函数时，它又可继续使用， 而且保存了前次被调用后留下的值。
static void msg() //在在 该文件中使用
{
    printf("Hello test2\n");
}

#endif /* test2_h */
