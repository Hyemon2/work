#ifndef RANDINT_H
#define RANDINT_H

#include <string>

class RandInt {
private:
    std::string objname;
    int low, high, rannum;
    
public:
    RandInt(int low, int high, std::string cn);  // 생성자
    ~RandInt();  // 소멸자
    void print() const;  // 출력 함수
    
    // 복사 생성자 삭제
    RandInt(const RandInt& random) = delete;
};

#endif