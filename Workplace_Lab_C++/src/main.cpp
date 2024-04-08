//
//  main.cpp
//  Workplace_Lab_C++
//
//  Created by Иван Клочков on 08.04.2024.
//

#include <stdio.h>
#include <iostream>
#include "Deanary.hpp"

int main() {
    std::cout << "=== Программа управления деканатом ===" << std::endl;

    // Создаем объект Deanary
    Deanary deanary;

    // Загружаем данные о студентах и группах из файлов
    std::cout << "Загрузка данных о студентах и группах из файлов..." << std::endl;
    deanary.createGroupsFromFile();
    deanary.createStudentsFromFile();
    std::cout << "Данные успешно загружены." << std::endl;

    // Добавляем случайные оценки студентам
    std::cout << "Добавление случайных оценок студентам..." << std::endl;
    deanary.addRandomMarks();
    std::cout << "Случайные оценки успешно добавлены." << std::endl;

    // Отображаем статистику успеваемости студентов и групп
    std::cout << "Отображение статистики успеваемости студентов и групп..." << std::endl;
    deanary.displayStatistics();
    std::cout << std::endl;

    // Переводим студента из одной группы в другую
    std::cout << "Перевод студента из одной группы в другую..." << std::endl;
    deanary.transferStudents(1, "23КНТ4", "23КНТ5");
    std::cout << std::endl;

    // Отображаем обновленную статистику
    std::cout << "Отображение обновленной статистики успеваемости студентов и групп..." << std::endl;
    deanary.displayStatistics();
    std::cout << std::endl;

    // Исключаем студентов за неуспеваемость
    std::cout << "Исключение студентов за неуспеваемость..." << std::endl;
    deanary.excludeStudents();
    std::cout << "Студенты, неуспевающие по предметам, были исключены." << std::endl;
    std::cout << std::endl;

    // Отображаем обновленную статистику
    std::cout << "Отображение обновленной статистики успеваемости студентов и групп..." << std::endl;
    deanary.displayStatistics();
    std::cout << std::endl;

    // Сохраняем данные в файлы
    std::cout << "Сохранение данных в файлы..." << std::endl;
    deanary.saveDataToFile();
    std::cout << "Данные успешно сохранены." << std::endl;

    // Отображаем данные о группах и студентах
    std::cout << "Отображение данных о группах и студентах..." << std::endl;
    deanary.displayData();

    std::cout << "=== Программа завершена ===" << std::endl;

    return 0;
}

