/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
#include <malloc.h>
using namespace std;

int main()
{
    int countArray;                     // Размер массива
    cout << "Enter size array : ";      // Вывод в консоль
    cin >> countArray;                  // Получение от пользователя размера массива
    int *array = new int[countArray];   // Выделение памяти для массива
    for (int i = 0; i < countArray; i++) {
        // Заполнение массива и вывод значений его элементов
        array[i] = i;
        cout << "Value of " << i << " element is " << array[i] << endl;
    }
    delete [] array;    // очистка памяти
    
    return 0;
}
