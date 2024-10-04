#include "application.h"

#include "iostream"

using namespace std;


Application::Application() {}


void Application::showMenu() {
    cout << "1. Создать массив\n";
    cout << "2. Заполнить массив\n";
    cout << "3. Изменить размерность массива\n";
    cout << "4. Вывести элементы массива\n";
    cout << "5. Посчитать среднее\n";
    cout << "6. Посчитать СКО\n";
    cout << "7. Отсортировать\n";
    cout << "8. Изменить элемент\n";
    cout << "0. Назад\n\n";
}


int Application::exec(){
    unsigned char choice, sortReverse;
    int len, newLen, index;
    number value;
    Array *array = new Array(0);

    while(true){
        showMenu();
        cout << "Выберите: "; cin >> choice;

        switch (choice){

            case '1':
                cout << "Введите длину массива: "; cin >> len;
                array = new Array(len);
                break;

            case '2':
                cout << "Введите " << array->getLength() << " элементов массива через пробел\n";
                array->fill();
                cout << "Массив заполнен\n";
                break;

            case '3':
                cout << "Введите новую длину массива: "; cin >> newLen;
                array->resize(newLen);
                break;

            case '4':
                array->printArray();
                break;

            case '5':
                cout << "Среднее значение: " << array->averageValue() << "\n";
                break;

            case '6':
                cout << "СКО:" << array->SKO() << "\n";
                break;

            case '7':
                cout << "Сортировка:\n";
                cout << "1. По возрастанию\n";
                cout << "2. По убыванию\n";
                cin >> sortReverse;
                switch (sortReverse) {
                    case '1':
                        array->shakerSort();
                        break;

                    case '2':
                        array->shakerSort(true);
                        break;
                }
                cout << "Сортировка завершена\n";
                break;

            case '8':
                cout << "Введите\n";
                cout << "Индекс элемента: "; cin >> index;
                cout << "Новое значение: "; cin >> value; cout << "\n";

                array->changeElement(index, value);
                cout << "Значение элемента заменено\n";
                break;

            case '0':
                return 0;

            default:
                cout << "Неверный номер\n";

        }
    }
}


void Application::mainMenu() {
    char choise;
    while(true){
        cout << "Меню программы:\n" <<
             "1) Действия с массивом\n" <<
             "2) Действия с полиномом\n--> ";
        cin >> choise;
        switch (choise) {
            case '1':
                exec();
                break;
            case '2':

                break;
            default:
                cout << "\nНеверный ввод\n";
        }
    }
}


void Application::polynomMenu() {
    cout << "1) Создать полином\n" <<
    "2) Изменить коэффициент\n" <<
    "3) Изменить один из корней\n" <<
    "4) Вычислить значение в заданной точке\n" <<
    "5) Показать полином\n" <<
    "6) Назад\n--> ";
}


int Application::polynomApp() {
    char choise;
    while(true){
        polynomMenu();
        cin >> choise;
        switch (choise) {
            case '1':

                break;
            case '2':

                break;
            case '3':

                break;
            case '4':

                break;
            case '5':

                break;
            case '6':
                return 0;
            default:
                cout << "\nНеверный ввод";
                break;
        }
        cout << "\n";
    }
}