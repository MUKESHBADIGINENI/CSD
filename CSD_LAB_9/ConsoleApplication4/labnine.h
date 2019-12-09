//108998405_CSD_LAB_9_Header_File
#ifndef LABNINE_H
#include<iostream>
#include<sstream>
#include<string>
class vector
{
    int sz;
    int* num=NULL;
    char* st=NULL;
public:
	int &operator[](int);
    vector(int s):sz(s), st(new char[s])
    {
        for(int i=0;i<s;i++)
        {
            st[i]='-';
        }
   }
   ~vector()
   {
       delete[] st;
   }
    char get(int n)
    {
        return st[n];
    }
    void set(int n, int s)
    {
        num[n]=s;
    }
    int size()
    {
        return sz;
    }
    void print()
    {
        for(int i=0;i<sz;i++)
        {std::cout<<st[i];}
    }

};

#endif