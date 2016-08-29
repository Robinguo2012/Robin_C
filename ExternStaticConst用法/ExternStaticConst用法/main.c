//
//  main.c
//  ExternStaticConst用法
//
//  Created by sks on 16/6/15.
//  Copyright © 2016年 sks. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a = 10;
    
    // const 的用法
    int const b = 20; // 只读变量
    
    int *p = &a;
    *p = 20;
    
    // 两种方式一样
    const int *p1;
    int const *p2;
    
    p1 = p;
    //*p1 = 20;
    int *const p3;   // *p3 变量 p3 常量
    *p3 = 30;
    //p3 = p2; // 报错
    
    const int const *p4; // *p4 常量 p4 常量
    int const * const *p5; // *p5 常量 p5 常量
    
    //
    return 0;
}
