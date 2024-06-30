#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

// //1 завдання

//#define C cout
//#define E endl
//
//struct Student {
//    string surname;
//    string group;
//    int progress[5];
//};
//
//void Excellent(Student* students, int kilstud) {
//    C << "Список відмінників:" << E;
//    for (int i = 0; i < kilstud; i++) {
//        Student& thisstudent = students[i];
//        int kil = 0;
//        for (int j = 0; j < 5; j++) {
//            if (thisstudent.progress[j] >= 10) {
//                kil++;
//            }
//        }
//        if (kil >= 0.75 * 5) {
//            C << thisstudent.surname << ", " << thisstudent.group << E;
//        }
//    }
//}
//
//void Bad(Student* students, int kilstud) {
//    C << "Список двієчників:" << E;
//    for (int i = 0; i < kilstud; i++) {
//        Student& thisstudent = students[i];
//        int kil = 0;
//        for (int j = 0; j < 5; j++) {
//            if (thisstudent.progress[j] == 1 || thisstudent.progress[j] == 2 || thisstudent.progress[j] == 3) {
//                kil++;
//            }
//        }
//        if (kil > 0.5 * 5) {
//            C << thisstudent.surname << ", " << thisstudent.group << E;
//        }
//    }
//}
//
//int main() {
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    Student* students = new Student[4]{
//        {"Коваленко", "Група 1", {2, 4, 1, 3, 1}},
//        {"Бондаренко", "Група 2", {1, 2, 10, 3, 8}},
//        {"Шевченко", "Група 1", {12, 12, 1, 10, 12}}
//    };
//
//    Excellent(students, 4);
//    C << E;
//    Bad(students, 4);
//
//    delete[] students;
//
//    return 0;
//}