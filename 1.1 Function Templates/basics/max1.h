//
// Created by Ginseng Purple on 02/04/2024.
//

#ifndef INC_1_1_FUNCTION_TEMPLATES_MAX1_H
#define INC_1_1_FUNCTION_TEMPLATES_MAX1_H

template<typename T>
T findmax (T a, T b){
    // if b < a then return a as max else b
    return b < a ? a : b;
}

#endif //INC_1_1_FUNCTION_TEMPLATES_MAX1_H
