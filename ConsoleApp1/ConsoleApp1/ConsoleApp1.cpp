#include <iostream>
#include <string>

void FirstAndLastChar()
{
    std::string str;
    std::cout << "Введите строку: ";
    std::getline(std::cin, str);
    std::cout << "Первый символ: " << str.front() << std::endl << "Последний символ: " << str.back() << std::endl;
}

void CompareStrings()
{
    std::string str, str1;
    std::cout << "Введите первую строку: ";
    std::getline(std::cin, str);
    std::cout << "Введите вторую строку: ";
    std::getline(std::cin, str1);

    switch (str.compare(str1))
    {
    case 1: std::cout << "Первая строка лексически больше второй" << std::endl;
        break;
    case -1: std::cout << "Первая строка лексически меньше второй" << std::endl;
        break;
    case 0: std::cout << "Строки лексически одинаковы" << std::endl;
        break;
    default: std::cout << "Error" << std::endl;
        break;
    };

}

void InsertString(std::string str)
{
    int index;
    std::string str1;
    std::cout << "Введите индекс вставляемой подстроки: ";
    std::cin >> index;
    std::cout << "Введите подстроку: ";
    std::cin >> str1;
    str.insert(index, str1);

    std::cout << "Вывод: " << str << std::endl;
}

void EraseString(std::string str)
{
    int index, count;
    std::cout << "Введите индекс начала удаления: ";
    std::cin >> index;
    std::cout << "Введите кол-во удаляемых символов: ";
    std::cin >> count;
    str.erase(index, count);

    std::cout << "Вывод: " << str << std::endl;
}

void ReplaceString(std::string str)
{
    int index, count;
    std::string str1;
    std::cout << "Введите индекс начала замены: ";
    std::cin >> index;
    std::cout << "Введите кол-во заменяемых символов: ";
    std::cin >> count;
    std::cout << "Введите подстроку: ";
    std::cin >> str1;
    str.replace(index, count, str1);

    std::cout << "Вывод: " << str << std::endl;

}

void FindString(std::string str)
{
    std::string str1;
    std::cout << "Введите искомую подстроку: ";
    //std::getline(std::cin, str1);
    std::cin >> str1;
    std::cout << "Индекс первого вхождения: " << str.find(str1) << std::endl;

}

void menu()
{
    int action;
    std::string str;
    std::cout << "Введите строку: ";
    std::getline(std::cin, str);

    std::cout << "Выберите действие: \n1. insert\n2. erase\n3. replace\n4. find" << std::endl;
    std::cin >> action;

    switch (action)
    {
    case 1: InsertString(str);
        break;
    case 2: EraseString(str);
        break;
    case 3: ReplaceString(str);
        break;
    case 4: FindString(str);
        break;
    default: std::cout << "Ничего не выбрано" << std::endl;
        break;
    }
}

int main()
{
    int action;
    std::cout << "Выберите номер задания: ";
    std::cin >> action;
    switch (action)
    {
    case 1: FirstAndLastChar();
        break;
    case 2: menu();
        break;
    case 3: CompareStrings();
        break;
    default: std::cout << "Ничего не выбрано" << std::endl;
        break;
    }
    setlocale(LC_ALL, "");
    
}

