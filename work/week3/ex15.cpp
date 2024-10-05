#include <iostream>
#include <array>
#include <algorithm> // sort 함수 사용을 위한 헤더

using namespace std;

int main() {
    array<int , 5> arr; //int arr[5];
    int a = 10; 
    int *p = &a; // &주소 -> *p == a값
    cout<<"정수 5개 입력"<<endl;

    for(int i = 0; i <arr.size(); i++){
        cin>> arr[i];
    }

    cout<<"배열에 저장된 내용 : "<<endl;
    for(const auto & value  : arr){
        cout<< value <<" "; //&value == arr[i]
    }

    cout<<"배열 오름차순 정렬 : "<<endl;
    sort(arr.begin(), arr.end());
    for(const auto& value : arr)
    cout<<value<<" ";
}


