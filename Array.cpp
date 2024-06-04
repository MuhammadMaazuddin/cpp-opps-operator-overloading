#include<iostream>
#include"Array.h"
using namespace std;
        Array::Array(){array = new int;}
        Array::Array(int size)
        {
            array = new int[size];
        }
        Array::Array(int *arr, int size)
        {   array = new int[size];
            for(int i=0;i<size;i++)
            {
                array[i] = arr[i];
            }
        }
        Array::Array(const Array &arr)
        {
            array = new int[arr.SIZE];
            for(int i=0;i<arr.SIZE;i++)
            {
                array[i] = arr.array[i];
            }
        }
        int Array::operator[](int i)
        {
            int num=0;
            if(i>SIZE){}
            else{
                for(int m=0;m<SIZE;m++)
                {
                    if(m==i){num= array[i];}

                }
            }
            return num;
        }
        const Array Array::operator=(const Array &arr)
        {
            Array temp;
            temp.array = new int[arr.SIZE];
            for(int i=0;i<arr.SIZE;i++)
            {
                temp.array[i] = arr.array[i];
            }
            return temp;
        }
        Array Array::operator+(const Array &arr)
        {
            Array temp;
            temp.array = new int[arr.SIZE];
            for(int i=0;i<arr.SIZE;i++)
            {
                temp.array[i] = array[i]+arr.array[i];
            }
            return temp;
        }
        Array Array::operator++()
        {
            Array temp;
            for(int i=0;i<SIZE;i++)
            {
                temp.array[i] = array[i]++;
            }
            return temp;
        }
        Array Array::operator++(int)
        {
            Array temp;
            for(int i=0;i<SIZE;i++)
            {
                temp.array[i] = ++array[i];
            }
            return temp;
        }
        Array Array::operator--(int)
        {
            Array temp;
            for(int i=0;i<SIZE;i++)
            {
                temp.array[i] = --array[i];
            }
            return temp;
        }
        bool Array::operator==(const Array &arr)const
        {
            bool flag = false;
            if(SIZE == arr.SIZE)
                {for(int i=0;i<SIZE;i++)
            {if(array[i]==arr.array[i])
                    {flag = true;}
            else if(array[i]!=arr.array[i])
                    {flag  = false;break;}}}
            else
                {flag = false;}
            return flag;
        }
        bool Array::operator!()
        {
             bool flag = false;
           
                {for(int i=0;i<SIZE;i++)
            {if(array[i]==0)
                    {flag = true;}
            else if(array[i]!=0)
                    {flag  = false;break;}}}
            
            return flag;
                }
        void Array::operator+=(Array &arr)
        {
            for(int i=0;i<SIZE;i++)
            {
                array[i]+=arr.array[i];
            }
        }
        void Array::operator-=(Array &arr)
        {
            for(int i=0;i<SIZE;i++)
            {
                array[i]-=arr.array[i];
            }
        }
        int Array::operator()(int value, int indx)
        {int *temp=new int[SIZE];
                temp=array;
            int num=0;
            for(int i=0;i<SIZE;i++)
            {
                if(array[i]==value)
                {array[i]=0;num=1;}
                else
                {num=-1;}
            }
            if(num==1)
            {
                for(int i=indx;i<SIZE;i++)
                {
                    array[i+1]=temp[i];
                }
            }
            return num;
        }
        void Array::display()
        {
            for(int i=0;i<SIZE;i++)
            {
                cout<<array[i]<<" ";
            }cout<<endl;
        }
        Array::~Array(){}