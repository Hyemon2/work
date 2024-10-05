#include <iostream>
#include <initializer_list>
#include <cmath> //abs함수는 숫자를 항상 절대값(양수)로 표시해줌

using namespace std;
#define FAR 128

char list_exam(initializer_list<char> charList, char target) {
    char closestChar = *charList.begin(); 
    int minDistance = abs(target - closestChar); 


    for (char c : charList) {
        int distance = abs(target - c);
        if (distance < minDistance) {   
            minDistance = distance;
            closestChar = c;
        }
    }

    return closestChar;
}
int main()
{
    cout << "{ 'd', 'p', 'r', 'w', 'g', 'f' }문자 중 a와 가까운 문자는 : ";
    cout << list_exam({'d', 'p', 'r', 'w', 'g', 'f'}, 'a') << endl;
    cout << "{ 'k', 'q', 'b', 'r', 'a', 'e', 'v', 'z'}문자 중 w와 가까운 문자는 : ";
    cout << list_exam({'k', 'q', 'b', 'r', 'a', 'e', 'v', 'z'}, 'w') << endl;
}


/* 가장 큰 숫자일 경우

char list_exam(initializer_list<int> charList ) {
    int max = *charList.begin(); 


    for (int c : charList) {
        if (max < c) {   
            max = c;
        }
    }

    return max;
}
*/