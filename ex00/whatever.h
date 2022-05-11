//
// Created by Prime_Games_2 on 06.05.2022.
//

#ifndef EX00_WHATEVER_H
#define EX00_WHATEVER_H

template<typename R>
void swap(R &r1, R &r2)
{
    R r3;
    r3 = r1;
    r1 = r2;
    r2 = r3;
}

template<typename R>
const R&min(const R &r1, const R &r2)
{
    if(r1 < r2)
        return r1;
    else
        return r2;
}

template<typename R>
const R&max(const R &r1, const R &r2)
{
    if(r1 > r2)
        return r1;
    else
        return r2;
}

#endif //EX00_WHATEVER_H
