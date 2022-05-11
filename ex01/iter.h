//
// Created by Prime_Games_2 on 09.05.2022.
//

#ifndef EX01_ITER_H
#define EX01_ITER_H

template <typename T>
void iter(T *address, int length, void( *f)(const T &))
{
    for (int i = 0; i < length; i++) {
        f(address[i]);
    }
}

#endif //EX01_ITER_H
