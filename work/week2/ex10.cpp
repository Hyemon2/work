#include <iostream>
#include <iomanip> 

int main() {
    double quiz, midterm, finalScore;  
    std::cout << "퀴즈, 중간고사, 기말고사 성적을 입력하세요:";
    std::cin >> quiz >> midterm >> finalScore;

    double total = quiz + midterm + finalScore; 
    double average = total / 3.0;  

    std::cout << "총합: " << total << std::endl;
    std::cout << "평균: " << std::fixed << std::setprecision(2) << average << std::endl;

    return 0;
}