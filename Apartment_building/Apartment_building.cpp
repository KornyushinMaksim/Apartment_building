//      Задание. 
//      Создайте программу, имитирующую многоквартирный
//      дом.Необходимо иметь классы “Человек”, “Квартира”,
//      “Дом”.Класс “Квартира” содержит динамический массив
//      объектов класса “Человек”.Класс “Дом” содержит массив
//      объектов класса “Квартира”.
//      Каждый из классов содержит переменные - члены и функции - члены, которые необходимы для предметной области
//      класса.Обращаем ваше внимание, что память под строковые значения выделяется динамически.Например, для
//      ФИО в классе “Человек”.Не забывайте обеспечить классы
//      различными конструкторами(конструктор копирования
//      обязателен), деструкторами.В main протестировать работу полученного набора классов
//

#include <iostream>
#include "Human.h"
#include "Flat.h"
#include "House.h"
using namespace std;

int main()
{
    system("chcp 1251>nul");
    Human obj1("Иван", "Иванов", "муж", 30);
    Human obj2("Петр", "Игнатов", "муж", 24);
    Human obj3("Лиза", "Рутова", "жен", 32);
    Human obj4("Вера", "Люмина", "жен", 47);
    Human obj5("Данил", "Родников", "муж", 23);
    Human obj6("Юля", "Родникова", "жен", 22);
    Human obj7("Саша", "Родников", "муж", 3);
    Human obj8("Саша", "Родникова", "жен", 1);
    //cout << obj1.to_print_human() << obj2.to_print_human() << obj3.to_print_human() << endl;
    Flat flat1;
    Flat flat2;
    flat1.add_human(obj1);
    flat1.add_human(obj2);
    flat1.add_human(obj3);
    flat1.add_human(obj4);
    flat2.add_human(obj5);
    flat2.add_human(obj6);
    flat2.add_human(obj7);
    flat2.add_human(obj8);
    flat1.del_human(1);
    //cout << flat1.to_print_flat() << flat2.to_print_flat() << endl;
    House house1;
    house1.add_flat(flat1);
    house1.add_flat(flat2);
    cout << house1.to_print_house() << endl;
}
