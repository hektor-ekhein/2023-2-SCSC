#include <iostream>

// Chapter 4.1 - Classes
// Animal Class
/*
class Animal
{
private:
    int food;
    int weight;

public:
    void set_animal(int _food, int _weight)
    {
        food = _food;
        weight = _weight;
    }
    void increase_food(int inc)
    {
        food += inc;
        weight += (inc / 3);
    }
    void view_stat()
    {
        std::cout << "이 동물의 food : " << food << std::endl;
        std::cout << "이 동물의 weight : " << weight << std::endl;
    }
}; // 세미콜론 잊지 말자!
int main()
{
    Animal animal;
    animal.set_animal(100, 50);
    animal.increase_food(30);
    animal.view_stat();
    return 0;
}
*/

// Date class
/*
class Date {
    private:
    int year_;
    int month_;
    int day_;
    bool is_leap_year(int year){
        if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
            return true;
        }
        else{
            return false;
        }
    }
    int GetDaysInMonth(int year, int month){
        switch(month){
            case 2:
                if(is_leap_year(year)){
                    return 29;
                }
                else{
                    return 28;
                }
            case 4:
            case 6:
            case 9:
            case 11:
                return 30;
            default:
                return 31;
        }
    }
    public:
    void SetDate(int year, int month, int date){
        year_ = year;
        month_ = month;
        day_ = date;
    }
    void AddDay(int inc){
        day_ +=inc;
        while(day_ > GetDaysInMonth(year_, month_)){
            day_ -= GetDaysInMonth(year_, month_);
            AddMonth(1);
        }
    }
    void AddMonth(int inc){
        month_ += inc;
        if(month_ > 12){
            month_ -= 12;
            year_++;
        }
    }
    void AddYear(int inc){
        year_ += inc;
    }
    void ShowDate(){
        std::cout << "Year " << year_ << ", Month: " << month_ << ", Day: " << day_ << std::endl;
    }
};

int main(){
    Date date;
    date.SetDate(2023, 11, 4);
    date.AddDay(154);
    date.ShowDate();
    return 0;
}
*/

//  Chapter 4.2 - Constructors and Overloading

