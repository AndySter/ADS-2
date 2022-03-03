// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"

double pown(double value, uint16_t n) {
    double tn = 1;
    while (n > 0) {
        tn *= value;
        n--;
    }
    return tn;
}

uint64_t fact(uint16_t n) {
    uint64_t ft = 1;
    while (n > 0) {
      ft *= n;
      n--;
    }
    return ft;
}

double calcItem(double x, uint16_t n) {
    double numb = pown(x, n)/fact(n);
    return numb;
}

double expn(double x, uint16_t count) {
    double ex = 0;
    int ch = 0;
    while (ch != count) {
        ex += calcItem(x, ch);
        ch++;
    }
    return ex;
}

double sinn(double x, uint16_t count) {
    double si;
    uint16_t sich = 1;
    while (sich != count) {
        si += pown(-1, sich-1)*calcItem(x, 2*sich-1);
        sich++;
    }
    return si;
}

double cosn(double x, uint16_t count) {
    double co;
    uint16_t coch = 1;
    while (coch != count) {
        co += pown(-1, coch-1)*calcItem(x, 2*coch-2);
        coch++;
    }
    return co;
}
