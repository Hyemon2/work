#include "randint.h"
#include <iostream>
#include <random>
#include <ctime>

// 난수 엔진 초기화
std::mt19937 gen(std::time(nullptr));

RandInt::RandInt(int low, int high, std::string cn) 
    : low(low), high(high), objname(cn) {
    std::uniform_int_distribution<int> int_rd(low, high);
    rannum = int_rd(gen);  // 범위 내 난수 생성
}

RandInt::~RandInt() {
    std::cout << objname << " 객체 소멸" << std::endl;
}

void RandInt::print() const {
    std::cout << "Random number between " << low << " and " << high << " : " << rannum << std::endl;
}