#ifndef _EXCEPTION_H
#define _EXCEPTION_H
#include<iostream>
#include<vector>
#include<stdexcept>
using namespace std;
//基类
class Base{
    public:
        Base(string msg):m_msg(msg)
        {
        }
        virtual void what(){
            cout << m_msg << endl;
        }
    protected:
        string m_msg;
};
//派生类，重新实现了虚函数
class CBase : public Base
{
    public:
        CBase(string msg):Base(msg)
        {

        }
        void what()
        {
           cout << "CBase:" << m_msg << endl;
        }
        void test()
        {
            cout << "I am a CBase" << endl;
        }
};


class MyError {
    const char* const data;
public:
    MyError(const char* const msg = 0):data(msg)
    {
        //idle
    }
};
#endif
