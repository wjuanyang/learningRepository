//
//  main.c
//  t1
//
//  Created by 杨文娟 on 2018/4/15.
//  Copyright © 2018年 杨文娟. All rights reserved.
//

#include <stdio.h>
//放电函数
int out(int n)
{
    return 0;
}

//充电函数(y原有电量，r容量)
int in(int y,int r)
{
    return (r-y);
}

//转移函数(x:电量来源的电量，y：目标的原有电量,r:目标的容量)
void transform(int x1,int y1,int r)
{
    //目标最多需要的电量
    int t = r - y1;
    //目标最终电量
    int y2;
    //来源最终电量
    int x2;
    if(t<x1)
    {
        y2 = r;
        x2 = x1 - t;
    }
    else
    {
        y2 = y1 + x1;
        x2 = 0;
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    
    return 0;
}
