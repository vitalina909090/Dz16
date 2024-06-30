#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
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

// //2 завдання
//struct Man {
//    string lastName;
//    string name;
//    int age;
//    string birthday;
//};
//
//void Print(const Man& person) {
//    cout << "Прізвище: " << person.lastName << ", Ім'я: " << person.name << ", Вік: " << person.age << ", Дата народження: " << person.birthday << endl;
//}
//
//bool LastName(const Man& a, const Man& b) {
//    return a.lastName < b.lastName;
//}
//
//bool Name(const Man& a, const Man& b) {
//    return a.name < b.name;
//}
//
//void PrintLastName(const vector<Man>& people) {
//    vector<Man> sortedPeople = people;
//    sort(sortedPeople.begin(), sortedPeople.end(), LastName);
//
//    cout << "Список людей, відсортований за прізвищем:" << endl;
//    for (const auto& person : sortedPeople) {
//        Print(person);
//    }
//}
//
//void PrintName(const vector<Man>& people) {
//    vector<Man> sortedPeople = people;
//    sort(sortedPeople.begin(), sortedPeople.end(), Name);
//
//    cout << "Список людей, відсортований за ім'ям:" << endl;
//    for (const auto& person : sortedPeople) {
//        Print(person);
//    }
//}
//
//void PrintBirthdays(const vector<Man>& people, int month) {
//    cout << "Іменинники у місяці " << month << ":" << endl;
//    bool found = false;
//    for (const auto& person : people) {
//        int birthMonth = person.birthday[3] - '0';
//        birthMonth = birthMonth * 10 + (person.birthday[4] - '0');
//        if (birthMonth == month) {
//            Print(person);
//            found = true;
//        }
//    }
//    if (!found) {
//        cout << "Іменинників у цьому місяці не знайдено" << endl;
//    }
//}
//
//void AddPerson(vector<Man>& people, const Man& newPerson) {
//    people.push_back(newPerson);
//    cout << "Запис додано." << endl;
//}
//
//void DeletePerson(vector<Man>& people, int index) {
//    if (index >= 0 && index < people.size()) {
//        people[index] = people.back();
//        people.pop_back();
//        cout << "Запис видалено" << endl;
//    }
//    else {
//        cout << "Помилка" << endl;
//    }
//}
//
//bool Search(const vector<Man>& people, const string& lastName, const string& name, int& myindex) {
//    for (size_t i = 0; i < people.size(); ++i) {
//        if (people[i].lastName == lastName && people[i].name == name) {
//            myindex = i;
//            return true;
//        }
//    }
//    return false;
//}
//
//void Edit(vector<Man>& people, int index, const Man& updatedPerson) {
//    if (index >= 0 && index < people.size()) {
//        people[index] = updatedPerson;
//        cout << "Запис відредаговано" << endl;
//    }
//    else {
//        cout << "Помилка" << endl;
//    }
//}
//
//int main() {
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    vector<Man> people;
//
//    people.push_back({ "Іванов", "Петро", 25, "15.06.1999" });
//    people.push_back({ "Петров", "Олег", 30, "23.12.1994" });
//    people.push_back({ "Сидоров", "Андрій", 28, "10.03.1996" });
//
//    int choice;
//    do {
//        cout << "\nМеню:" << endl;
//        cout << "1. Виведення інформації із сортуванням за прізвищем" << endl;
//        cout << "2. Виведення інформації із сортуванням за ім'ям" << endl;
//        cout << "3. Виведення списку іменинників місяця" << endl;
//        cout << "4. Додавання нового запису" << endl;
//        cout << "5. Видалення запису" << endl;
//        cout << "6. Пошук за прізвищем та ім'ям" << endl;
//        cout << "7. Редагування запису" << endl;
//        cout << "0. Вихід з програми" << endl;
//        cout << "Виберіть опцію: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1:
//            PrintLastName(people);
//            break;
//        case 2:
//            PrintName(people);
//            break;
//        case 3:
//        {
//            int month;
//            cout << "Введіть номер місяця: ";
//            cin >> month;
//            PrintBirthdays(people, month);
//            break;
//        }
//        case 4:
//        {
//            string lastName, name, birthday;
//            int age;
//            cout << "Введіть прізвище: ";
//            cin >> lastName;
//            cout << "Введіть ім'я: ";
//            cin >> name;
//            cout << "Введіть вік: ";
//            cin >> age;
//            cout << "Введіть дату народження (dd.mm.yyyy): ";
//            cin >> birthday;
//            AddPerson(people, { lastName, name, age, birthday });
//            break;
//        }
//        case 5:
//        {
//            for (int i = 0; i < people.size(); i++) {
//                cout << i + 1 << ") ";
//                Print(people[i]);
//            }
//            int index;
//            cout << "Введіть номер для видалення: ";
//            cin >> index;
//            DeletePerson(people, index - 1);
//            break;
//        }
//        case 6:
//        {
//            string searchLastName, searchName;
//            cout << "Введіть прізвище для пошуку: ";
//            cin >> searchLastName;
//            cout << "Введіть ім'я для пошуку: ";
//            cin >> searchName;
//            int myindex = -1;
//            if (Search(people, searchLastName, searchName, myindex)) {
//                cout << "Знайдено людину:" << endl;
//                Print(people[myindex]);
//            }
//            else {
//                cout << "Людина не знайдена" << endl;
//            }
//            break;
//        }
//        case 7:
//        {
//            for (int i = 0; i < people.size(); i++) {
//                cout << i + 1 << ") ";
//                Print(people[i]);
//            }
//            int index;
//            cout << "Введіть індекс запису для редагування: ";
//            cin >> index;
//            string lastName, name, birthday;
//            int age;
//            cout << "Введіть нове прізвище: ";
//            cin >> lastName;
//            cout << "Введіть нове ім'я: ";
//            cin >> name;
//            cout << "Введіть новий вік: ";
//            cin >> age;
//            cout << "Введіть нову дату народження (dd.mm.yyyy): ";
//            cin >> birthday;
//            Edit(people, index - 1, { lastName, name, age, birthday });
//            break;
//        }
//        case 0:
//            cout << "Вихід з програми" << endl;
//            break;
//        default:
//            cout << "Невірний вибір" << endl;
//            break;
//        }
//    } while (choice != 0);
//
//    return 0;
//}
