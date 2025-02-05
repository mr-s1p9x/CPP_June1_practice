#include <iostream>
using namespace std;

/*
   Статические переменные и методы: static int count используется для отслеживания количества созданных экземпляров
   класса Point. Метод displayCount() позволяет выводить это количество в консоль. Статические методы вызываются
   для класса в целом, а не для конкретного объекта.
   Конструкторы: В классе определены два конструктора. Один конструктор по умолчанию инициализирует точку координатами
   (0, 0) и увеличивает счетчик точек. Второй конструктор позволяет задать конкретные значения для x и y.
    Методы доступа (getters и setters): Эти методы предоставляют безопасный доступ к переменным класса. getX() и getY()
    возвращают значения координат, а setX() и setY() позволяют их изменить.
    Метод input() и show(): input() считывает координаты точки из стандартного ввода, а show() выводит координаты точки
    в стандартный вывод.
    Таким образом, данный код предоставляет базовое понимание работы с классами и объектами в C++, включая использование
    статических переменных и методов, а также организацию доступа к данным объекта через специальные методы.
 */

// Определение класса Point для представления точки на двумерной плоскости
class Point {
private:
    int x; // Приватный член класса для хранения координаты X
    int y; // Приватный член класса для хранения координаты Y
    static int count; // Статический член класса для отслеживания количества созданных объектов

public:
    // Конструктор по умолчанию, увеличивающий счётчик при создании каждого объекта
    Point() : x(0), y(0) { count++; }
    Point(int x, int y) : x(x), y(y) { count++; } // Конструктор с параметрами

    // Статический метод для вывода количества созданных точек
    static void displayCount() {
        cout << "Количество созданных точек: " << count << endl;
    }

    // Метод для ввода данных точки
    void input() {
        cout << "Введите координаты точки (x и y): ";
        cin >> x >> y;
    }

    // Метод для вывода данных точки
    void show() const {
        cout << "Точка(" << x << ", " << y << ")" << endl;
    }

    // Методы для доступа к координатам точки
    int getX() const { return x; }
    int getY() const { return y; }
    void setX(int newX) { x = newX; }
    void setY(int newY) { y = newY; }

    // Операции над точками
    Point sum(const Point& other) const {
        return Point(x + other.x, y + other.y);
    }
};

int Point::count = 0; // Инициализация статической переменной

int main() {
    Point::displayCount(); // Показать начальное количество точек

    Point a;
    a.input();
    a.show();

    Point b;
    b.input();
    b.show();

    Point c = a.sum(b); // Сложение двух точек
    c.show();

    Point::displayCount(); // Показать конечное количество точек

    return 0;
}
