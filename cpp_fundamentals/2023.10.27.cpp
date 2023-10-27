#include <iostream>
#include <bits/stdc++.h>

/*
// 1장
int main(){
    std::cout <<"hi" <<std::endl
    <<"my name is "
    << "Psi" << std::endl;
    return 0;
}
*/

// 2장 - C++의 참조자 (Reference)
/*
int change_val(int *p){
    *p=3;
    return 0;
}

int main(){
    int number=5;

    std::cout << number << std::endl;
    change_val(&number);
    std::cout << number << std::endl;
}
*/

/*
// Some Basic Examples
int main(){
    int x;
    int &y=x;
    int &z=y;

    x=1;
    std::cout << "x : "<<x<<" y : "<<y << " z : "<<z<<std::endl;
    y=2;
    std::cout << "x : "<<x<<" y : "<<y << " z : "<<z<<std::endl;
    z=3;
    std::cout << "x : "<<x<<" y : "<<y << " z : "<<z<<std::endl;
    return 0;
}
*/

/*
// Reference to array
int main(){
    int arr[3]={1,2,3};
    int (&ref)[3]=arr;

    ref[0]=2;
    ref[1]=3;
    ref[2]=4;


    std::cout << ref[0] << std::endl;
    std::cout << ref[1] << std::endl;
    std::cout << ref[2] << std::endl;
    return 0;
}
*/

/*
Gunwoo Kim2022-01-11 11:38:46.918
메모리에 존재하지 않아도 되는 경우

- 레퍼런스가 함수 내에서 별칭으로만 쓰이는 경우, 컴파일러 내부 동작은 모르지만, 별칭을 replace하는 방식으로만 구현한다면 실제 메모리에 변수를 만들 필요가 없을 것 같습니다.

메모리에 존재해야 하는 경우

- 인자로 넘기는 경우, 해당 함수에서 지역변수가 되어야하는데, 참조 대상의 주소값을 함수의 지역변수로 넘기는 일이 일어난다면, 메모리를 점유하지 않을까요
- 리턴값을 상수(const) 참조자로 받는 경우, 상수 참조자는 상수든 리터럴이든 가리키는 대상이 있었어야 할텐데 없으니, 함수 내의 변수나 리터럴의 주소값을 가지는식으로 메모리에 존재할 것 같습니다.
*/

// Chapter 3 - C++의 세계로 (New, Delete)

/*
// Pets
typedef struct Animal {
    char name[30]; // 이름
    int age;       // 나이
    int health;    // 체력
    int food;      // 배부른 정도
    int clean;     // 깨끗한 정도
} Animal;
void create_animal(Animal *animal){
    std::cout << "동물의 이름? ";
    std::cin >> animal->name;
    std::cout << "동물의 나이? ";
    std::cin >> animal->age;
    animal->health = 100;
    animal->food = 100;
    animal->clean = 100;
}
void play(Animal *animal){
    animal->health += 10;
    animal->food -= 20;
    animal->clean -= 30;
}
void one_day_pass(Animal *animal){
    // 하루가 지나면
    animal->health -= 10;
    animal->food -= 30;
    animal->clean -= 20;
}
void show_stat(Animal *animal){
    std::cout << animal->name << "의 상태" << std::endl;
    std::cout << "체력 : " << animal->health << std::endl;
    std::cout << "배부름 : " << animal->food << std::endl;
    std::cout << "청결 : " << animal->clean << std::endl;
}
int main(){
    Animal *list[10];
    int animal_num = 0;
    for (;;){
        std::cout << "1. 동물 추가하기" << std::endl;
        std::cout << "2. 놀기 " << std::endl;
        std::cout << "3. 상태 보기 " << std::endl;
        int input;
        std::cin >> input;
        switch (input){
            int play_with;
        case 1:
            list[animal_num] = new Animal;
            create_animal(list[animal_num]);
            animal_num++;
            break;
        case 2:
            std::cout << "누구랑 놀게? : ";
            std::cin >> play_with;
            if (play_with < animal_num)
                play(list[play_with]);
            break;
        case 3:
            std::cout << "누구껄 보게? : ";
            std::cin >> play_with;
            if (play_with < animal_num)
                show_stat(list[play_with]);
            break;
        }
        for (int i = 0; i != animal_num; i++){
            one_day_pass(list[i]);
        }
    }
    for (int i = 0; i != animal_num; i++){
        delete list[i];
    }
}
*/

// Chapter 4 - 객체지향 프로그래밍의 시작 (다음에....)