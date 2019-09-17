
#include <iostream>
#include <string>
using namespace std;

int size;
int* array;

void InitArray(int size)
{
    array = new int[size];
}

void Deinit()
{
    delete [] array;
    cout << "Memory clear";
}

void Resize(int new_size)
{
    int* temp = new int[new_size];
    delete [] array;
    array = temp;   
}

int main()
{
    int countArray;
    cout << "Enter size array :";
    cin >> countArray;
    InitArray(countArray);
    for (int i = 0; i < countArray; i++){
        array[i] = i;
        cout<<"Value of "<< "element is "<< array[i] << endl;
    }
    int flag;
    cout << "Resize array?(1-yes 2-no)";
    cin >> flag;
    while(flag==1){
        cout << "Enter new size array :";
        cin >> countArray;
        Resize(countArray);
        for (int i = 0; i < countArray; i++){
            array[i] = i;
            cout<<"Value of "<< "element is " << array[i] << endl;
        }
        cout << "Resize array?(1-yes 2-no)";
        cin >> flag;
    }
    Deinit();
    return 0;
}
