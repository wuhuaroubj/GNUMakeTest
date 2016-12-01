#include <iostream>
#include <vector>
#include<stdexcept>
#include "swap.h"
#include "exception.h"
int main()
{
    try {
        //do some thing
    //抛出派生类对象
        throw CBase("I am a CBase exception");

    }catch(Base& e) {  //使用基类可以接收
        e.what();
    }
}

