//
// Created by Prime_Games_2 on 09.05.2022.
//

#ifndef EX02_ARRAY_H
#define EX02_ARRAY_H

template <typename T>
class Array {
public:
    T *arr;
    unsigned int length;
public:
    Array():arr(NULL), length(0){}
    Array(unsigned int n){
        arr = new T[n];
        length = n;
    }
    Array(const Array<T> &a)
    {
        int i = 0;
        arr = new T[a.length];
        while(i < a.length)
        {
            arr[i] = a.arr[i];
            i++;
        }
        length = a.length;
    }
    unsigned int size(){return length;}
    Array<T>	&operator=( const Array<T> &rhs )
    {
        if (this == &rhs)
            return *this;
        if (this->length > 0)
            delete [] this->arr;
        this->length = rhs.length;
        this->arr = new T[this->length];
        for (int i = 0; i < this->length; i++)
            this->arr[i] = rhs.arr[i];
        return *this;
    }

    T &operator[](const unsigned int n)
    {
        if(n < 0 || n >= length)
        {
            throw std::overflow_error("Out of bounds");
        }
        else
        {
            return this->arr[n];
        }
    }

};

template<typename T>
std::ostream	&operator<<( std::ostream &ostr, const Array<T> &instance )
{
    for (int i = 0; i < instance.length; i++) {
        ostr << instance.arr[i] << std::endl;
    }
    return ostr;
}

#endif //EX02_ARRAY_H
