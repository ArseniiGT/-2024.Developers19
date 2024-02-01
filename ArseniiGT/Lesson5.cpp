// 01-02-2024(с++base).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

//#include <iostream>
//
//int main()
//{
//    int i = 0;
//    while (i<10) {
//        std::cout << i << std::endl ;
//        i++;
//    }
//
//    return 0;
//}
//
//
//#include <iostream>
//
//int main()
//{
//    int num;
//    int sum = 0;
//    do {
//        std::cout << "Input number: ";
//        std::cin >> num;
//        sum += num;
//    } while (sum < 10);//пока сумма введенных чисел меньше 10 или не введен 0
//    std::cout << sum;
//    return 0;
//}

//#include <iostream>

//int main()
//{
//    
//    for (int i = 0; i < 10; i++) {
//        std::cout << i << "\n";
//    }
//
//    return 0;
//}
//#include <iostream> 
//
//int main()
//{
//	setlocale(LC_ALL, "Ru");
//	int num;
//	int sum = 0;
//	std::cout << "Введите число - ";
//	std::cin >> num;
//	for (int i = num; i>0; --i)
//	{
//		sum += i;
//	}
//	std::cout << sum;
//
//	return 0;
//}
//#include <iostream>
//
//int main()
//{
//    setlocale(LC_ALL, "ru");
//    int number, sum;
//    sum = 0;
//    std::cout << "Введите число: ";
//    std::cin >> number;
//    do {
//        sum = sum + number;
//        number = number - 1;
//
//    } while (number != 0);
//    std::cout << sum;
//    return 0;
//}

/*Пользователь вводит в консоль целое положительное число;
Задача: выведите максимальную и минимальную цифру в числ*/

#include <iostream>

int main() {
	int num;//123
	int min = INT32_MAX;
	std::cout << "Input number: ";
	std::cin >> num;
	do {
		if (num % 10 < min) {
			min = num % 10;
		}
		num /= 10;
	} while (num!=0);

	std::cout << "Min: " << min << std::endl;
	return 0;
}
