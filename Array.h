#ifndef ARRAY
#define ARRAY
class Array
{
    private:
       int SIZE;
       int *array;
    public:
        Array();
        Array(int size);
        Array(int *arr, int size);
        Array(const Array &arr);
        int operator[](int i);
        const Array operator=(const Array &arr);
        Array operator+(const Array &arr);
        Array operator++();
        Array operator++(int);
        Array operator--(int);
        bool operator==(const Array &arr)const;
        bool operator!();
        void operator+=(Array &arr);
        void operator-=(Array &arr);
        int operator()(int value, int indx);
        void display();
        ~Array();
};
#endif