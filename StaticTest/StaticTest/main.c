//
//  main.c
//  StaticTest
//
//  Created by zhouwude on 16/2/25.
//  Copyright © 2016年 zhouwude. All rights reserved.
//

#include <stdio.h>
int global ;
int main(int argc, const char * argv[]) {
   
    
    extern char a;    // extern variable must be declared before use
    printf("%c ", a);
    //msg();
    
    //所有未加static前缀的全局变量和函数都具有全局可见性，其它的源文件也能访问。此例中，a是全局变量，msg是函数，并且都没有加static前缀，因此对于另外的源文件main.c是可见的。
    //如果加了static，就会对其它源文件隐藏。例如在a和msg的定义前加上static，main.c就看不到它们了。利用这一特性可以在不同的文件中定义同名函数和同名变量，而不必担心命名冲突。Static可以用作函数和变量的前缀，对于函数来讲，static的作用仅限于隐藏
    
    
    
    int b ;
    int *c = (int *)malloc(sizeof(int));
    //a是全局变量，b是栈变量，c是堆变量。当一个app启动后，代码区，常量区，全局区大小已固定，因此指向这些区的指针不会产生崩溃性的错误 应该是在程序退出的时候才会释放这块内存，静态变量在程序开始时创建，在程序结束时销毁。静态变量储存在静态存储区。经常被声明为常量，很少单独使用static声明变量。无论一个类创建了多少个对象，类只拥有类变量的一份拷贝
    //static对全局变量的修饰，可以认为是限制了只能是本文件引用此变量。有的程序是由好多.c文件构成。彼此可以互相引用变量，但加入static修饰之后，只能被本文件中函数引用此变量。
   // static对栈变量的修饰，可以认为栈变量的生命周期延长到程序执行结束时。一般来说，栈变量的生命周期由OS管理，在退栈的过程中，栈变量的生命也就结束了。但加入static修饰之后，变量已经不再存储在栈中，而是和全局变量一起存储。同时，离开定义它的函数后不能使用，但如再次调用定义它的函数时，它又可继续使用， 而且保存了前次被调用后留下的值。
    //static对函数的修饰与对全局变量的修饰相似，只能被本文件中的函数调用，而不能被同一程序其它文件中的函数调用。
    char d[13];
    int *p;
    
    return 0;
}
