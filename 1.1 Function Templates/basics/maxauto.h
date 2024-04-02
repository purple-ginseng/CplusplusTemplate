//
// Created by Ginseng Purple on 02/04/2024.
//

#ifndef INC_1_1_FUNCTION_TEMPLATES_MAXAUTO_H
#define INC_1_1_FUNCTION_TEMPLATES_MAXAUTO_H
template<typename T1, typename T2>
auto automax (T1 a, T2 b) -> decltype(b<a?a:b) {
    // if b < a then return a as max else b
    return b < a ? a : b;
}
#endif //INC_1_1_FUNCTION_TEMPLATES_MAXAUTO_H
