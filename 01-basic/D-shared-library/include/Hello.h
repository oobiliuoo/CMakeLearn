#ifndef __HELLO_H__
#define __HELLO_H__

#ifdef DLL_EXPORT
#define API __declspec(dllexport)
#else
#define API __declspec(dllimport)
#endif 

class API Hello
{
public:
    void print();
};

#endif
